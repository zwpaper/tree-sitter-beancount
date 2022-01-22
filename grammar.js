newline = '\n',

module.exports = grammar({
    name: 'beancount',

    rules: {
        source_file: $ => repeat($._definition),

        _definition: $ => choice(
            $.comment_definition,
            $.entry_definition,
        ),

        entry_definition: $ => seq(
            $.date,
            $.entry_type_definition,
        ),

        entry_type_definition: $ => choice(
            $.open_definition,
            $.note_definition,
            $.balance_definition,
        ),

        open_definition: $ => seq(
            'open',
            $.account,
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
            $.currency
        ),

        comment_definition: $ => seq(
            ';',
        ),

        account: $ => /[a-zA-Z][a-zA-Z:]*/,
        date: $ => /\d\d\d\d[-/](0[1-9]|1[0-2])[-/]([012][0-9]|3[0-1])/,
        note: $ => /".*"/,
        amount: $ => /\d+(.\d+)?/,
        currency: $ => /[A-Z]+/,
        comment: $ => /.?/,
    }
});
