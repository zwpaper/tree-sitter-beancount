newline = '\n',

module.exports = grammar({
    name: 'beancount',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.comment_definition,
            $._entry_definition,
        ),

        _entry_definition: $ => seq(
            $.date,
            choice(
                $.open_definition,
                $.close_definition,
                $.commodity_definition,
                $.transaction_definition,
                $.note_definition,
                $.balance_definition,
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

        transaction_definition: $ => seq(
            $.txn,
            choice(
                seq(
                    $.payee,
                    $.narration,
                ),
                $.narration,
            ),
            repeat(
                seq(
                    $.account,
                    optional(
                        seq(
                            $.amount,
                            $.commodity,
                        ),
                    ),
                )
            )
        ),

        note_definition: $ => seq(
            'note',
            $.account,
            $.note,
        ),

        balance_definition: $ => seq(
            'balance',
            $.account,
            $.amount,
            $.commodity
        ),

        comment_definition: $ => seq(
            ';',
            /.*/,
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

        _account_component: $ => /[A-Z0-9][a-zA-Z0-9-]*/,
        _booking_method: $ => choice(
            "STRICT",
            "NONE",
        ),
        date: $ => /\d\d\d\d[-/](0[1-9]|1[0-2])[-/]([012][0-9]|3[0-1])/,
        note: $ => /".*"/,
        payee: $ => seq("\"", repeat(/./), "\""),
        narration: $ => seq("\"", repeat(/./), "\""),
        amount: $ => /-?\d+(.\d+)?/,
        txn: $ => choice('*',  // Completed transaction, known amounts.
                         "!",  // Incomplete transaction, needs confirmation or revision
                        ),
        commodity: $ => /[A-Z]+/,
        comment: $ => seq(';', /.*/)
    }
});
