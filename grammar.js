newline = '\n',

module.exports = grammar({
    name: 'beancount',

    extras: $ => [
        $.comment,
        /\s/
    ],

    conflicts: $ => [
        [$.transaction_definition],
    ],

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $._entry_definition,
            $.option_definition,
            $.plugin_definition,
            $.include_definition,
            $.pushtag_definition,
            $.poptag_definition,
        ),

        option_definition: $ => seq(
            'option',
            field('name', $.text),
            field('value', $.text),
        ),

        plugin_definition: $ => seq(
            'plugin',
            field('name', $.text),
            optional(
                field('config', $.text),
            ),
        ),

        include_definition: $ => seq(
            'include',
            $.filepath,
        ),

        pushtag_definition: $ => seq(
            'pushtag',
            $.tag,
        ),
        poptag_definition: $ => seq(
            'poptag',
            $.tag,
        ),


        _entry_definition: $ => seq(
            $.date,
            choice(
                $.open_definition,
                $.close_definition,
                $.commodity_definition,
                $.transaction_definition,
                $.note_definition,
                $.document_definition,
                $.event_definition,
                $.balance_definition,
                $.price_definition,
                $.pad_definition,
                $.custom_definition,
            ),
            repeat(
                $.metadata_definition,
            ),
        ),

        open_definition: $ => seq(
            'open',
            $.account,
            optional(
                seq(
                    $.commodity,
                    repeat(
                        seq(
                            ",",
                            $.commodity,
                        )
                    ),
                )
            ),
        ),

        close_definition: $ => seq(
            'close',
            $.account,
        ),

        commodity_definition: $ => seq(
            'commodity',
            $.commodity,
        ),

        // Transaction
        // YYYY-MM-DD [txn|Flag] [[Payee] Narration] [Key: Value] ...
        //   [Flag] Account Amount [{Cost}] [@ Price] [Key: Value] ...
        //   [Flag] Account Amount [{Cost}] [@ Price] [Key: Value] ... ...
        transaction_definition: $ => seq(
            $.txn,
            optional(
                choice(
                    seq(
                        field('payee', $.text),
                        field('narration', $.text),
                    ),
                    field('narration', $.text),
                ),
            ),
            repeat(
                choice(
                    $.tag,
                    $.link,
                ),
            ),
            repeat(
                choice(
                    $.post_definition,
                    $.metadata_definition,
                ),
            )
        ),

        post_definition: $ => seq(
            $.account,
            optional(
                seq(
                    $.amount,
                    $.commodity,
                    // Beancount does NOT support cost after price
                    // So that do not have to check the reverse
                    optional(
                        $.cost,
                    ),
                    optional(
                        $.price,
                    ),
                ),
            ),
        ),

        price: $ => seq(
            /@{1,2}/,
            $.unsigned_amount,
            $.commodity,
        ),

        cost: $ => seq(
            '{',
            $.unsigned_amount,
            $.commodity,
            '}',
        ),

        tag: $ => /#(-|\w)+/,
        link: $ => /\^(-|\w)+/,

        note_definition: $ => seq(
            'note',
            $.account,
            $.note,
        ),

        document_definition: $ => seq(
            'document',
            $.account,
            $.filepath,
        ),

        filepath: $ => /".+"/,

        event_definition: $ => seq(
            'event',
            field('name', $.text),
            field('value', $.text),
        ),

        balance_definition: $ => seq(
            'balance',
            $.account,
            $.amount,
            $.commodity
        ),

        price_definition: $ => seq(
            'price',
            $.commodity,
            $.amount,
            $.commodity
        ),

        pad_definition: $ => seq(
            'pad',
            $.account,
            field('pad', $.account),
        ),

        custom_definition: $ => seq(
            'custom',
            field('type_name', $.text),
            repeat(
                $.uncheck,
            ),
        ),

        uncheck: $ => choice(
            $.text,
            /\S+/,
        ),


        account: $ => seq(
            choice(
                "Assets",
                "Liabilities",
                "Equity",
                "Income",
                "Expenses"
            ),
            repeat(
                seq(
                    ":",
                    $._account_component,
                )
            )
        ),

        metadata_definition: $ => prec.left(
            seq(
                $.metadata_key,
                ":",
                optional(
                    $.metadata_value,
                ),
            ),
        ),
        metadata_key: $ => /[a-z][a-zA-Z0-9-_]*/,
        metadata_value: $ => choice(
            $.text,
            $.account,
            $.commodity,
            $.date,
            $.tag,
            $.amount,
        ),
        _account_component: $ => /[A-Z0-9][a-zA-Z0-9-]*/,
        _booking_method: $ => choice(
            "STRICT",
            "NONE",
        ),
        date: $ => /\d\d\d\d[-/](0[1-9]|1[0-2])[-/]([012][0-9]|3[0-1])/,
        note: $ => /".*"/,
        text: $ => seq("\"", repeat(/./), "\""),
        unsigned_amount: $ => /\d+(.\d+)?/,
        amount: $ => /-?\d+(.\d+)?/,
        txn: $ => choice(
            '*',  // Completed transaction, known amounts.
            "!",  // Incomplete transaction, needs confirmation or revision
        ),
        commodity: $ => /[A-Z]+/,

        comment: $ => seq(';', /.*/)
    }
});
