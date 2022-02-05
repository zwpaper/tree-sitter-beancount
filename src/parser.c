#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 77
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_pushtag = 1,
  anon_sym_poptag = 2,
  anon_sym_open = 3,
  anon_sym_COMMA = 4,
  anon_sym_close = 5,
  anon_sym_commodity = 6,
  aux_sym_price_token1 = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  sym_tag = 10,
  sym_link = 11,
  anon_sym_note = 12,
  anon_sym_balance = 13,
  anon_sym_Assets = 14,
  anon_sym_Liabilities = 15,
  anon_sym_Equity = 16,
  anon_sym_Income = 17,
  anon_sym_Expenses = 18,
  anon_sym_COLON = 19,
  sym__account_component = 20,
  anon_sym_STRICT = 21,
  anon_sym_NONE = 22,
  sym_date = 23,
  sym_note = 24,
  anon_sym_DQUOTE = 25,
  aux_sym_payee_token1 = 26,
  sym_unsigned_amount = 27,
  sym_amount = 28,
  anon_sym_STAR = 29,
  anon_sym_BANG = 30,
  sym_commodity = 31,
  anon_sym_SEMI = 32,
  aux_sym_comment_token1 = 33,
  sym_source_file = 34,
  sym__definition = 35,
  sym_pushtag_definition = 36,
  sym_poptag_definition = 37,
  sym__entry_definition = 38,
  sym_open_definition = 39,
  sym_close_definition = 40,
  sym_commodity_definition = 41,
  sym_transaction_definition = 42,
  sym_post_definition = 43,
  sym_price = 44,
  sym_cost = 45,
  sym_note_definition = 46,
  sym_balance_definition = 47,
  sym_account = 48,
  sym_payee = 49,
  sym_narration = 50,
  sym_txn = 51,
  sym_comment = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_open_definition_repeat1 = 54,
  aux_sym_transaction_definition_repeat1 = 55,
  aux_sym_transaction_definition_repeat2 = 56,
  aux_sym_account_repeat1 = 57,
  aux_sym_payee_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_pushtag] = "pushtag",
  [anon_sym_poptag] = "poptag",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [aux_sym_price_token1] = "price_token1",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_tag] = "tag",
  [sym_link] = "link",
  [anon_sym_note] = "note",
  [anon_sym_balance] = "balance",
  [anon_sym_Assets] = "Assets",
  [anon_sym_Liabilities] = "Liabilities",
  [anon_sym_Equity] = "Equity",
  [anon_sym_Income] = "Income",
  [anon_sym_Expenses] = "Expenses",
  [anon_sym_COLON] = ":",
  [sym__account_component] = "_account_component",
  [anon_sym_STRICT] = "STRICT",
  [anon_sym_NONE] = "NONE",
  [sym_date] = "date",
  [sym_note] = "note",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_payee_token1] = "payee_token1",
  [sym_unsigned_amount] = "unsigned_amount",
  [sym_amount] = "amount",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [sym_commodity] = "commodity",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_pushtag_definition] = "pushtag_definition",
  [sym_poptag_definition] = "poptag_definition",
  [sym__entry_definition] = "_entry_definition",
  [sym_open_definition] = "open_definition",
  [sym_close_definition] = "close_definition",
  [sym_commodity_definition] = "commodity_definition",
  [sym_transaction_definition] = "transaction_definition",
  [sym_post_definition] = "post_definition",
  [sym_price] = "price",
  [sym_cost] = "cost",
  [sym_note_definition] = "note_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_account] = "account",
  [sym_payee] = "payee",
  [sym_narration] = "narration",
  [sym_txn] = "txn",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_open_definition_repeat1] = "open_definition_repeat1",
  [aux_sym_transaction_definition_repeat1] = "transaction_definition_repeat1",
  [aux_sym_transaction_definition_repeat2] = "transaction_definition_repeat2",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym_payee_repeat1] = "payee_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_pushtag] = anon_sym_pushtag,
  [anon_sym_poptag] = anon_sym_poptag,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [aux_sym_price_token1] = aux_sym_price_token1,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_tag] = sym_tag,
  [sym_link] = sym_link,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_Assets] = anon_sym_Assets,
  [anon_sym_Liabilities] = anon_sym_Liabilities,
  [anon_sym_Equity] = anon_sym_Equity,
  [anon_sym_Income] = anon_sym_Income,
  [anon_sym_Expenses] = anon_sym_Expenses,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__account_component] = sym__account_component,
  [anon_sym_STRICT] = anon_sym_STRICT,
  [anon_sym_NONE] = anon_sym_NONE,
  [sym_date] = sym_date,
  [sym_note] = sym_note,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_payee_token1] = aux_sym_payee_token1,
  [sym_unsigned_amount] = sym_unsigned_amount,
  [sym_amount] = sym_amount,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [sym_commodity] = sym_commodity,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_pushtag_definition] = sym_pushtag_definition,
  [sym_poptag_definition] = sym_poptag_definition,
  [sym__entry_definition] = sym__entry_definition,
  [sym_open_definition] = sym_open_definition,
  [sym_close_definition] = sym_close_definition,
  [sym_commodity_definition] = sym_commodity_definition,
  [sym_transaction_definition] = sym_transaction_definition,
  [sym_post_definition] = sym_post_definition,
  [sym_price] = sym_price,
  [sym_cost] = sym_cost,
  [sym_note_definition] = sym_note_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_account] = sym_account,
  [sym_payee] = sym_payee,
  [sym_narration] = sym_narration,
  [sym_txn] = sym_txn,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_open_definition_repeat1] = aux_sym_open_definition_repeat1,
  [aux_sym_transaction_definition_repeat1] = aux_sym_transaction_definition_repeat1,
  [aux_sym_transaction_definition_repeat2] = aux_sym_transaction_definition_repeat2,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym_payee_repeat1] = aux_sym_payee_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_pushtag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_poptag] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_open] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_close] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_commodity] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_price_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_link] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Assets] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Liabilities] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Equity] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Income] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Expenses] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__account_component] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_STRICT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NONE] = {
    .visible = true,
    .named = false,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_payee_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_unsigned_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_pushtag_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_poptag_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__entry_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_open_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_close_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_transaction_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_post_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_price] = {
    .visible = true,
    .named = true,
  },
  [sym_cost] = {
    .visible = true,
    .named = true,
  },
  [sym_note_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [sym_narration] = {
    .visible = true,
    .named = true,
  },
  [sym_txn] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_open_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_transaction_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_payee_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(90);
      if (lookahead == '!') ADVANCE(138);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == '*') ADVANCE(137);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == 'N') ADVANCE(143);
      if (lookahead == 'S') ADVANCE(145);
      if (lookahead == '^') ADVANCE(86);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(51);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0) ADVANCE(117);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(119);
      if (lookahead == '1') ADVANCE(122);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(128);
      if (lookahead == '1') ADVANCE(131);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '1') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(81);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(111);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(31);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(95);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 27:
      if (lookahead == 'g') ADVANCE(92);
      END_STATE();
    case 28:
      if (lookahead == 'g') ADVANCE(91);
      END_STATE();
    case 29:
      if (lookahead == 'h') ADVANCE(69);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(63);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(50);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'm') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(93);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 48:
      if (lookahead == 'o') ADVANCE(52);
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(61);
      END_STATE();
    case 51:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 52:
      if (lookahead == 'p') ADVANCE(68);
      END_STATE();
    case 53:
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 54:
      if (lookahead == 'q') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(105);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(109);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(106);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 70:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 71:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 72:
      if (lookahead == 'y') ADVANCE(96);
      END_STATE();
    case 73:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      END_STATE();
    case 74:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      END_STATE();
    case 75:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(114);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(73);
      END_STATE();
    case 77:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(73);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 85:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 86:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 87:
      if (eof) ADVANCE(90);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == '#') ADVANCE(85);
      if (lookahead == ',') ADVANCE(94);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == '@') ADVANCE(98);
      if (lookahead == 'A') ADVANCE(55);
      if (lookahead == 'E') ADVANCE(54);
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'L') ADVANCE(30);
      if (lookahead == '^') ADVANCE(86);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(87)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 88:
      if (eof) ADVANCE(90);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == ':') ADVANCE(110);
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == 'A') ADVANCE(150);
      if (lookahead == 'E') ADVANCE(149);
      if (lookahead == 'I') ADVANCE(148);
      if (lookahead == 'L') ADVANCE(147);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 89:
      if (eof) ADVANCE(90);
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == 'p') ADVANCE(48);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_price_token1);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_price_token1);
      if (lookahead == '@') ADVANCE(97);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_link);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead == ';') ADVANCE(152);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '0') ADVANCE(123);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(121);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(121);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(133);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(129);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(129);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(80);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(15);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(70);
      if (lookahead == 'x') ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(153);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(155);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 88},
  [10] = {.lex_state = 88},
  [11] = {.lex_state = 88},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 88},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 87},
  [42] = {.lex_state = 87},
  [43] = {.lex_state = 89},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 87},
  [50] = {.lex_state = 87},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 1},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 154},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 89},
  [63] = {.lex_state = 89},
  [64] = {.lex_state = 7},
  [65] = {.lex_state = 7},
  [66] = {.lex_state = 89},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 89},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 89},
  [71] = {.lex_state = 89},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 87},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 88},
  [76] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_pushtag] = ACTIONS(1),
    [anon_sym_poptag] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [aux_sym_price_token1] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_tag] = ACTIONS(1),
    [sym_link] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_Assets] = ACTIONS(1),
    [anon_sym_Liabilities] = ACTIONS(1),
    [anon_sym_Equity] = ACTIONS(1),
    [anon_sym_Income] = ACTIONS(1),
    [anon_sym_Expenses] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STRICT] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_unsigned_amount] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [sym_commodity] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(72),
    [sym__definition] = STATE(52),
    [sym_pushtag_definition] = STATE(51),
    [sym_poptag_definition] = STATE(51),
    [sym__entry_definition] = STATE(51),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(30),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_pushtag] = ACTIONS(7),
    [anon_sym_poptag] = ACTIONS(9),
    [sym_date] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(19), 1,
      anon_sym_DQUOTE,
    STATE(2), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(7), 1,
      sym_narration,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    STATE(58), 1,
      sym_payee,
    ACTIONS(15), 2,
      sym_tag,
      sym_link,
    ACTIONS(13), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [45] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(19), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(15), 2,
      sym_tag,
      sym_link,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [81] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(15), 2,
      sym_tag,
      sym_link,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [117] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(15), 2,
      sym_tag,
      sym_link,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [153] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(22), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(15), 2,
      sym_tag,
      sym_link,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [189] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(7), 1,
      sym_comment,
    STATE(22), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(15), 2,
      sym_tag,
      sym_link,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [225] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_open,
    ACTIONS(29), 1,
      anon_sym_close,
    ACTIONS(31), 1,
      anon_sym_commodity,
    ACTIONS(33), 1,
      anon_sym_note,
    ACTIONS(35), 1,
      anon_sym_balance,
    STATE(2), 1,
      sym_txn,
    STATE(8), 1,
      sym_comment,
    ACTIONS(37), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(46), 6,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_balance_definition,
  [262] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_COLON,
    ACTIONS(44), 2,
      sym_amount,
      sym_commodity,
    STATE(9), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(39), 10,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [289] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      anon_sym_COLON,
    STATE(9), 1,
      aux_sym_account_repeat1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(50), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(46), 10,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [318] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(48), 1,
      anon_sym_COLON,
    STATE(10), 1,
      aux_sym_account_repeat1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(54), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(52), 10,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [347] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      aux_sym_price_token1,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(23), 1,
      sym_cost,
    STATE(34), 1,
      sym_price,
    ACTIONS(56), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [377] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_comment,
    ACTIONS(44), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(39), 11,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_COLON,
      sym_date,
      sym_note,
  [401] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(64), 1,
      anon_sym_DQUOTE,
    STATE(14), 1,
      sym_comment,
    ACTIONS(62), 11,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [424] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(68), 2,
      sym_tag,
      sym_link,
    STATE(15), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat1,
    ACTIONS(66), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [447] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [476] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(73), 1,
      anon_sym_DQUOTE,
    STATE(17), 1,
      sym_comment,
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [499] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(25), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [528] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
    STATE(21), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [557] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(77), 12,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [578] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    STATE(21), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat2,
    ACTIONS(79), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(81), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [605] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(22), 1,
      sym_comment,
    STATE(27), 1,
      sym_account,
    STATE(33), 1,
      sym_post_definition,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [634] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(58), 1,
      aux_sym_price_token1,
    STATE(23), 1,
      sym_comment,
    STATE(32), 1,
      sym_price,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [658] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(86), 11,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [678] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(62), 11,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [698] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
    ACTIONS(71), 11,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [718] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      sym_amount,
    STATE(27), 1,
      sym_comment,
    ACTIONS(88), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [739] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_comment,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_price_token1,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [758] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_pushtag,
    ACTIONS(99), 1,
      anon_sym_poptag,
    ACTIONS(102), 1,
      sym_date,
    STATE(52), 1,
      sym__definition,
    STATE(29), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(51), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [786] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_pushtag,
    ACTIONS(9), 1,
      anon_sym_poptag,
    ACTIONS(11), 1,
      sym_date,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(30), 1,
      sym_comment,
    STATE(52), 1,
      sym__definition,
    STATE(51), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [816] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_comment,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [834] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(32), 1,
      sym_comment,
    ACTIONS(109), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [852] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_comment,
    ACTIONS(111), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [870] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_comment,
    ACTIONS(84), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [888] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    STATE(50), 1,
      sym_account,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [905] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_comment,
    STATE(43), 1,
      sym_account,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [922] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    STATE(73), 1,
      sym_account,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [939] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [958] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(39), 2,
      sym_comment,
      aux_sym_open_definition_repeat1,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [975] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    STATE(75), 1,
      sym_account,
    ACTIONS(17), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [992] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(115), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_open_definition_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1011] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_COMMA,
      sym_date,
  [1025] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(126), 1,
      sym_commodity,
    STATE(43), 1,
      sym_comment,
    ACTIONS(124), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1041] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(128), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1054] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(45), 1,
      sym_comment,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1067] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1080] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1093] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1106] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_comment,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1119] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1132] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_comment,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1145] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1158] = 5,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 1,
      aux_sym_payee_token1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_comment,
    STATE(56), 1,
      aux_sym_payee_repeat1,
  [1174] = 5,
    ACTIONS(148), 1,
      aux_sym_payee_token1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(152), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym_payee_repeat1,
    STATE(54), 1,
      sym_comment,
  [1190] = 5,
    ACTIONS(148), 1,
      aux_sym_payee_token1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(154), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_comment,
    STATE(57), 1,
      aux_sym_payee_repeat1,
  [1206] = 4,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      aux_sym_payee_token1,
    STATE(56), 2,
      sym_comment,
      aux_sym_payee_repeat1,
  [1220] = 5,
    ACTIONS(148), 1,
      aux_sym_payee_token1,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(56), 1,
      aux_sym_payee_repeat1,
    STATE(57), 1,
      sym_comment,
  [1236] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(163), 1,
      anon_sym_DQUOTE,
    STATE(5), 1,
      sym_narration,
    STATE(58), 1,
      sym_comment,
  [1249] = 3,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    ACTIONS(165), 2,
      anon_sym_DQUOTE,
      aux_sym_payee_token1,
  [1260] = 3,
    ACTIONS(150), 1,
      anon_sym_SEMI,
    ACTIONS(167), 1,
      aux_sym_comment_token1,
    STATE(60), 1,
      sym_comment,
  [1270] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(169), 1,
      sym_tag,
    STATE(61), 1,
      sym_comment,
  [1280] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(171), 1,
      sym_commodity,
    STATE(62), 1,
      sym_comment,
  [1290] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(173), 1,
      sym_commodity,
    STATE(63), 1,
      sym_comment,
  [1300] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(175), 1,
      sym_unsigned_amount,
    STATE(64), 1,
      sym_comment,
  [1310] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(177), 1,
      sym_unsigned_amount,
    STATE(65), 1,
      sym_comment,
  [1320] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(179), 1,
      sym_commodity,
    STATE(66), 1,
      sym_comment,
  [1330] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(181), 1,
      sym__account_component,
    STATE(67), 1,
      sym_comment,
  [1340] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(183), 1,
      sym_commodity,
    STATE(68), 1,
      sym_comment,
  [1350] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(185), 1,
      sym_tag,
    STATE(69), 1,
      sym_comment,
  [1360] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(187), 1,
      sym_commodity,
    STATE(70), 1,
      sym_comment,
  [1370] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      sym_commodity,
    STATE(71), 1,
      sym_comment,
  [1380] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      ts_builtin_sym_end,
    STATE(72), 1,
      sym_comment,
  [1390] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(193), 1,
      sym_amount,
    STATE(73), 1,
      sym_comment,
  [1400] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_comment,
  [1410] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(197), 1,
      sym_note,
    STATE(75), 1,
      sym_comment,
  [1420] = 1,
    ACTIONS(199), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 81,
  [SMALL_STATE(5)] = 117,
  [SMALL_STATE(6)] = 153,
  [SMALL_STATE(7)] = 189,
  [SMALL_STATE(8)] = 225,
  [SMALL_STATE(9)] = 262,
  [SMALL_STATE(10)] = 289,
  [SMALL_STATE(11)] = 318,
  [SMALL_STATE(12)] = 347,
  [SMALL_STATE(13)] = 377,
  [SMALL_STATE(14)] = 401,
  [SMALL_STATE(15)] = 424,
  [SMALL_STATE(16)] = 447,
  [SMALL_STATE(17)] = 476,
  [SMALL_STATE(18)] = 499,
  [SMALL_STATE(19)] = 528,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 605,
  [SMALL_STATE(23)] = 634,
  [SMALL_STATE(24)] = 658,
  [SMALL_STATE(25)] = 678,
  [SMALL_STATE(26)] = 698,
  [SMALL_STATE(27)] = 718,
  [SMALL_STATE(28)] = 739,
  [SMALL_STATE(29)] = 758,
  [SMALL_STATE(30)] = 786,
  [SMALL_STATE(31)] = 816,
  [SMALL_STATE(32)] = 834,
  [SMALL_STATE(33)] = 852,
  [SMALL_STATE(34)] = 870,
  [SMALL_STATE(35)] = 888,
  [SMALL_STATE(36)] = 905,
  [SMALL_STATE(37)] = 922,
  [SMALL_STATE(38)] = 939,
  [SMALL_STATE(39)] = 958,
  [SMALL_STATE(40)] = 975,
  [SMALL_STATE(41)] = 992,
  [SMALL_STATE(42)] = 1011,
  [SMALL_STATE(43)] = 1025,
  [SMALL_STATE(44)] = 1041,
  [SMALL_STATE(45)] = 1054,
  [SMALL_STATE(46)] = 1067,
  [SMALL_STATE(47)] = 1080,
  [SMALL_STATE(48)] = 1093,
  [SMALL_STATE(49)] = 1106,
  [SMALL_STATE(50)] = 1119,
  [SMALL_STATE(51)] = 1132,
  [SMALL_STATE(52)] = 1145,
  [SMALL_STATE(53)] = 1158,
  [SMALL_STATE(54)] = 1174,
  [SMALL_STATE(55)] = 1190,
  [SMALL_STATE(56)] = 1206,
  [SMALL_STATE(57)] = 1220,
  [SMALL_STATE(58)] = 1236,
  [SMALL_STATE(59)] = 1249,
  [SMALL_STATE(60)] = 1260,
  [SMALL_STATE(61)] = 1270,
  [SMALL_STATE(62)] = 1280,
  [SMALL_STATE(63)] = 1290,
  [SMALL_STATE(64)] = 1300,
  [SMALL_STATE(65)] = 1310,
  [SMALL_STATE(66)] = 1320,
  [SMALL_STATE(67)] = 1330,
  [SMALL_STATE(68)] = 1340,
  [SMALL_STATE(69)] = 1350,
  [SMALL_STATE(70)] = 1360,
  [SMALL_STATE(71)] = 1370,
  [SMALL_STATE(72)] = 1380,
  [SMALL_STATE(73)] = 1390,
  [SMALL_STATE(74)] = 1400,
  [SMALL_STATE(75)] = 1410,
  [SMALL_STATE(76)] = 1420,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(67),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 3),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 3),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(24),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 5),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2), SHIFT_REPEAT(11),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(69),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(8),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 5),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(68),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag_definition, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag_definition, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2),
  [158] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2), SHIFT_REPEAT(59),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [191] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_beancount(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
