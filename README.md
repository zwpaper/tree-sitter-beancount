# Tree Sitter for Beancount

[Beancount](https://github.com/beancount/beancount) grammar for [Tree Sitter](https://github.com/tree-sitter/tree-sitter).


## Development

Install the dependencies:

```sh
npm install
```

Build and run the tests:

```sh
npm test
```


## TODOs

- [ ] Transaction Amount support `( ) * / - +`
- [ ] [Query](https://beancount.github.io/docs/beancount_language_syntax.html#query)
- [ ] Metadata value support Date
- [ ] [Open Booking
Method](https://beancount.github.io/docs/beancount_language_syntax.html#open)
- [ ] [Attach flags to the transaction
postings](https://beancount.github.io/docs/beancount_language_syntax.html#transactions)
- [ ] (Low) For legacy reasons, a pipe symbol (“|”) is accepted between those strings (but this will be removed at some point in the future)

## Reference

[Beancount Language
Syntax](https://beancount.github.io/docs/beancount_language_syntax.html)
[Beancount Cheat
Sheet](https://beancount.github.io/docs/beancount_cheat_sheet.html)
