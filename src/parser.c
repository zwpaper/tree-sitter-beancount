#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 88
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

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
  anon_sym_document = 13,
  sym_filepath = 14,
  anon_sym_balance = 15,
  anon_sym_pad = 16,
  anon_sym_Assets = 17,
  anon_sym_Liabilities = 18,
  anon_sym_Equity = 19,
  anon_sym_Income = 20,
  anon_sym_Expenses = 21,
  anon_sym_COLON = 22,
  sym__account_component = 23,
  anon_sym_STRICT = 24,
  anon_sym_NONE = 25,
  sym_date = 26,
  sym_note = 27,
  anon_sym_DQUOTE = 28,
  aux_sym_payee_token1 = 29,
  sym_unsigned_amount = 30,
  sym_amount = 31,
  anon_sym_STAR = 32,
  anon_sym_BANG = 33,
  sym_commodity = 34,
  anon_sym_SEMI = 35,
  aux_sym_comment_token1 = 36,
  sym_source_file = 37,
  sym__definition = 38,
  sym_pushtag_definition = 39,
  sym_poptag_definition = 40,
  sym__entry_definition = 41,
  sym_open_definition = 42,
  sym_close_definition = 43,
  sym_commodity_definition = 44,
  sym_transaction_definition = 45,
  sym_post_definition = 46,
  sym_price = 47,
  sym_cost = 48,
  sym_note_definition = 49,
  sym_document_definition = 50,
  sym_balance_definition = 51,
  sym_pad_definition = 52,
  sym_account = 53,
  sym_payee = 54,
  sym_narration = 55,
  sym_txn = 56,
  sym_comment = 57,
  aux_sym_source_file_repeat1 = 58,
  aux_sym_open_definition_repeat1 = 59,
  aux_sym_transaction_definition_repeat1 = 60,
  aux_sym_transaction_definition_repeat2 = 61,
  aux_sym_account_repeat1 = 62,
  aux_sym_payee_repeat1 = 63,
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
  [anon_sym_document] = "document",
  [sym_filepath] = "filepath",
  [anon_sym_balance] = "balance",
  [anon_sym_pad] = "pad",
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
  [sym_document_definition] = "document_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_pad_definition] = "pad_definition",
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
  [anon_sym_document] = anon_sym_document,
  [sym_filepath] = sym_filepath,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_pad] = anon_sym_pad,
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
  [sym_document_definition] = sym_document_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_pad_definition] = sym_pad_definition,
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
  [anon_sym_document] = {
    .visible = true,
    .named = false,
  },
  [sym_filepath] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
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
  [sym_document_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_pad_definition] = {
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

enum {
  field_pad = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_pad] = "pad",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pad, 2},
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
      if (eof) ADVANCE(101);
      if (lookahead == '!') ADVANCE(152);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == '*') ADVANCE(151);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == 'I') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(161);
      if (lookahead == 'N') ADVANCE(157);
      if (lookahead == 'S') ADVANCE(159);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 'o') ADVANCE(59);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '}') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(133);
      if (lookahead == '1') ADVANCE(136);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(142);
      if (lookahead == '1') ADVANCE(145);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(87);
      if (lookahead == '1') ADVANCE(86);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(91);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(125);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(80);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(118);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(114);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(117);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 32:
      if (lookahead == 'g') ADVANCE(103);
      END_STATE();
    case 33:
      if (lookahead == 'g') ADVANCE(102);
      END_STATE();
    case 34:
      if (lookahead == 'h') ADVANCE(78);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(71);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(76);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 44:
      if (lookahead == 'm') ADVANCE(45);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(60);
      if (lookahead == 'u') ADVANCE(64);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 56:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 57:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(69);
      END_STATE();
    case 59:
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 60:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 61:
      if (lookahead == 'p') ADVANCE(27);
      END_STATE();
    case 62:
      if (lookahead == 'q') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(61);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 65:
      if (lookahead == 's') ADVANCE(119);
      END_STATE();
    case 66:
      if (lookahead == 's') ADVANCE(123);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(81);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 75:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 76:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 79:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 80:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 81:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 82:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 83:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      END_STATE();
    case 84:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      END_STATE();
    case 85:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(128);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(83);
      END_STATE();
    case 87:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 96:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 97:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 98:
      if (eof) ADVANCE(101);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == '#') ADVANCE(95);
      if (lookahead == ',') ADVANCE(105);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'A') ADVANCE(63);
      if (lookahead == 'E') ADVANCE(62);
      if (lookahead == 'I') ADVANCE(48);
      if (lookahead == 'L') ADVANCE(35);
      if (lookahead == '^') ADVANCE(96);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == '{') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(98)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 99:
      if (eof) ADVANCE(101);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == 'A') ADVANCE(164);
      if (lookahead == 'E') ADVANCE(163);
      if (lookahead == 'I') ADVANCE(162);
      if (lookahead == 'L') ADVANCE(161);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(99)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 100:
      if (eof) ADVANCE(101);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == ':') ADVANCE(124);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == 'p') ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_price_token1);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_price_token1);
      if (lookahead == '@') ADVANCE(108);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_link);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '"') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead == ';') ADVANCE(166);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '0') ADVANCE(137);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(135);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(147);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(143);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(90);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(79);
      if (lookahead == 'x') ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(165);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 98},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 98},
  [4] = {.lex_state = 98},
  [5] = {.lex_state = 98},
  [6] = {.lex_state = 98},
  [7] = {.lex_state = 98},
  [8] = {.lex_state = 98},
  [9] = {.lex_state = 99},
  [10] = {.lex_state = 99},
  [11] = {.lex_state = 99},
  [12] = {.lex_state = 98},
  [13] = {.lex_state = 99},
  [14] = {.lex_state = 98},
  [15] = {.lex_state = 98},
  [16] = {.lex_state = 98},
  [17] = {.lex_state = 98},
  [18] = {.lex_state = 98},
  [19] = {.lex_state = 98},
  [20] = {.lex_state = 98},
  [21] = {.lex_state = 98},
  [22] = {.lex_state = 98},
  [23] = {.lex_state = 98},
  [24] = {.lex_state = 98},
  [25] = {.lex_state = 98},
  [26] = {.lex_state = 98},
  [27] = {.lex_state = 98},
  [28] = {.lex_state = 98},
  [29] = {.lex_state = 98},
  [30] = {.lex_state = 98},
  [31] = {.lex_state = 98},
  [32] = {.lex_state = 98},
  [33] = {.lex_state = 98},
  [34] = {.lex_state = 98},
  [35] = {.lex_state = 98},
  [36] = {.lex_state = 98},
  [37] = {.lex_state = 98},
  [38] = {.lex_state = 98},
  [39] = {.lex_state = 98},
  [40] = {.lex_state = 98},
  [41] = {.lex_state = 98},
  [42] = {.lex_state = 98},
  [43] = {.lex_state = 98},
  [44] = {.lex_state = 98},
  [45] = {.lex_state = 100},
  [46] = {.lex_state = 98},
  [47] = {.lex_state = 98},
  [48] = {.lex_state = 98},
  [49] = {.lex_state = 98},
  [50] = {.lex_state = 98},
  [51] = {.lex_state = 98},
  [52] = {.lex_state = 98},
  [53] = {.lex_state = 98},
  [54] = {.lex_state = 98},
  [55] = {.lex_state = 98},
  [56] = {.lex_state = 98},
  [57] = {.lex_state = 98},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 100},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 100},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 100},
  [65] = {.lex_state = 1},
  [66] = {.lex_state = 100},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 99},
  [70] = {.lex_state = 98},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 100},
  [74] = {.lex_state = 168},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 100},
  [78] = {.lex_state = 100},
  [79] = {.lex_state = 100},
  [80] = {.lex_state = 100},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 100},
  [84] = {.lex_state = 100},
  [85] = {.lex_state = 9},
  [86] = {.lex_state = 9},
  [87] = {(TSStateId)(-1)},
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
    [anon_sym_document] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
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
    [sym_source_file] = STATE(75),
    [sym__definition] = STATE(51),
    [sym_pushtag_definition] = STATE(48),
    [sym_poptag_definition] = STATE(48),
    [sym__entry_definition] = STATE(48),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(33),
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
    ACTIONS(13), 1,
      anon_sym_open,
    ACTIONS(15), 1,
      anon_sym_close,
    ACTIONS(17), 1,
      anon_sym_commodity,
    ACTIONS(19), 1,
      anon_sym_note,
    ACTIONS(21), 1,
      anon_sym_document,
    ACTIONS(23), 1,
      anon_sym_balance,
    ACTIONS(25), 1,
      anon_sym_pad,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      sym_txn,
    ACTIONS(27), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(52), 8,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_document_definition,
      sym_balance_definition,
      sym_pad_definition,
  [45] = 12,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(6), 1,
      sym_narration,
    STATE(22), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    STATE(67), 1,
      sym_payee,
    ACTIONS(31), 2,
      sym_tag,
      sym_link,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [90] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(31), 2,
      sym_tag,
      sym_link,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [126] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(31), 2,
      sym_tag,
      sym_link,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [162] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(4), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(31), 2,
      sym_tag,
      sym_link,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [198] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(21), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(31), 2,
      sym_tag,
      sym_link,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [234] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(8), 1,
      sym_comment,
    STATE(14), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(31), 2,
      sym_tag,
      sym_link,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [270] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_COLON,
    STATE(9), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_account_repeat1,
    ACTIONS(47), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(43), 10,
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
  [299] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(45), 1,
      anon_sym_COLON,
    STATE(10), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_account_repeat1,
    ACTIONS(51), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(49), 10,
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
  [328] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      anon_sym_COLON,
    ACTIONS(58), 2,
      sym_amount,
      sym_commodity,
    STATE(11), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(53), 10,
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
  [355] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      aux_sym_price_token1,
    ACTIONS(64), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(24), 1,
      sym_cost,
    STATE(32), 1,
      sym_price,
    ACTIONS(60), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [385] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_comment,
    ACTIONS(58), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(53), 11,
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
  [409] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(41), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [438] = 4,
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
  [461] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(16), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(37), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [490] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    STATE(17), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat2,
    ACTIONS(71), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(73), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [517] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(78), 1,
      anon_sym_DQUOTE,
    STATE(18), 1,
      sym_comment,
    ACTIONS(76), 11,
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
  [540] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
    ACTIONS(80), 12,
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
  [561] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(84), 1,
      anon_sym_DQUOTE,
    STATE(20), 1,
      sym_comment,
    ACTIONS(82), 11,
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
  [584] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(21), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(86), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [613] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(22), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(34), 1,
      sym_post_definition,
    ACTIONS(39), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [642] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(76), 11,
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
  [662] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      aux_sym_price_token1,
    STATE(24), 1,
      sym_comment,
    STATE(31), 1,
      sym_price,
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
  [686] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(82), 11,
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
  [706] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
    ACTIONS(90), 11,
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
  [726] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
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
  [745] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      sym_amount,
    STATE(28), 1,
      sym_comment,
    ACTIONS(94), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [766] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 1,
      anon_sym_pushtag,
    ACTIONS(103), 1,
      anon_sym_poptag,
    ACTIONS(106), 1,
      sym_date,
    STATE(51), 1,
      sym__definition,
    STATE(29), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(48), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [794] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(30), 1,
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
  [812] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(31), 1,
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
  [830] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(32), 1,
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
  [848] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_pushtag,
    ACTIONS(9), 1,
      anon_sym_poptag,
    ACTIONS(11), 1,
      sym_date,
    ACTIONS(113), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_source_file_repeat1,
    STATE(33), 1,
      sym_comment,
    STATE(51), 1,
      sym__definition,
    STATE(48), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [878] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_comment,
    ACTIONS(115), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [896] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    STATE(69), 1,
      sym_account,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [913] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    STATE(36), 2,
      sym_comment,
      aux_sym_open_definition_repeat1,
    ACTIONS(117), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [930] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    STATE(50), 1,
      sym_account,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [947] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(36), 1,
      aux_sym_open_definition_repeat1,
    STATE(38), 1,
      sym_comment,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [966] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    STATE(45), 1,
      sym_account,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [983] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_open_definition_repeat1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1002] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    STATE(57), 1,
      sym_account,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1019] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_account,
    STATE(42), 1,
      sym_comment,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1036] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_comment,
    STATE(70), 1,
      sym_account,
    ACTIONS(33), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1053] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    STATE(73), 1,
      sym_account,
    ACTIONS(128), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1070] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      sym_commodity,
    STATE(45), 1,
      sym_comment,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1086] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    ACTIONS(117), 5,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_COMMA,
      sym_date,
  [1100] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(134), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1113] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1126] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_comment,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1139] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_comment,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1152] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_comment,
    ACTIONS(142), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1165] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
    ACTIONS(144), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1178] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(53), 1,
      sym_comment,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1191] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_comment,
    ACTIONS(148), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1204] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1217] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    ACTIONS(152), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1230] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_comment,
    ACTIONS(154), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1243] = 5,
    ACTIONS(156), 1,
      anon_sym_DQUOTE,
    ACTIONS(158), 1,
      aux_sym_payee_token1,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_comment,
    STATE(63), 1,
      aux_sym_payee_repeat1,
  [1259] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      sym_filepath,
    ACTIONS(162), 1,
      anon_sym_COLON,
    STATE(59), 2,
      sym_comment,
      aux_sym_account_repeat1,
  [1273] = 5,
    ACTIONS(158), 1,
      aux_sym_payee_token1,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(165), 1,
      anon_sym_DQUOTE,
    STATE(60), 1,
      sym_comment,
    STATE(65), 1,
      aux_sym_payee_repeat1,
  [1289] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(49), 1,
      sym_filepath,
    ACTIONS(167), 1,
      anon_sym_COLON,
    STATE(59), 1,
      aux_sym_account_repeat1,
    STATE(61), 1,
      sym_comment,
  [1305] = 4,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(171), 1,
      aux_sym_payee_token1,
    STATE(62), 2,
      sym_comment,
      aux_sym_payee_repeat1,
  [1319] = 5,
    ACTIONS(158), 1,
      aux_sym_payee_token1,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_payee_repeat1,
    STATE(63), 1,
      sym_comment,
  [1335] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_filepath,
    ACTIONS(167), 1,
      anon_sym_COLON,
    STATE(61), 1,
      aux_sym_account_repeat1,
    STATE(64), 1,
      sym_comment,
  [1351] = 5,
    ACTIONS(158), 1,
      aux_sym_payee_token1,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(176), 1,
      anon_sym_DQUOTE,
    STATE(62), 1,
      aux_sym_payee_repeat1,
    STATE(65), 1,
      sym_comment,
  [1367] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_comment,
    ACTIONS(53), 2,
      sym_filepath,
      anon_sym_COLON,
  [1378] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      anon_sym_DQUOTE,
    STATE(8), 1,
      sym_narration,
    STATE(67), 1,
      sym_comment,
  [1391] = 3,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_comment,
    ACTIONS(180), 2,
      anon_sym_DQUOTE,
      aux_sym_payee_token1,
  [1402] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(182), 1,
      sym_note,
    STATE(69), 1,
      sym_comment,
  [1412] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(184), 1,
      sym_amount,
    STATE(70), 1,
      sym_comment,
  [1422] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(186), 1,
      sym_unsigned_amount,
    STATE(71), 1,
      sym_comment,
  [1432] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(188), 1,
      sym_unsigned_amount,
    STATE(72), 1,
      sym_comment,
  [1442] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      sym_filepath,
    STATE(73), 1,
      sym_comment,
  [1452] = 3,
    ACTIONS(160), 1,
      anon_sym_SEMI,
    ACTIONS(192), 1,
      aux_sym_comment_token1,
    STATE(74), 1,
      sym_comment,
  [1462] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    STATE(75), 1,
      sym_comment,
  [1472] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(196), 1,
      sym_tag,
    STATE(76), 1,
      sym_comment,
  [1482] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(198), 1,
      sym_commodity,
    STATE(77), 1,
      sym_comment,
  [1492] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(200), 1,
      sym_commodity,
    STATE(78), 1,
      sym_comment,
  [1502] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(202), 1,
      sym_commodity,
    STATE(79), 1,
      sym_comment,
  [1512] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(204), 1,
      sym_commodity,
    STATE(80), 1,
      sym_comment,
  [1522] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_comment,
  [1532] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      sym_tag,
    STATE(82), 1,
      sym_comment,
  [1542] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(210), 1,
      sym_commodity,
    STATE(83), 1,
      sym_comment,
  [1552] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(212), 1,
      sym_commodity,
    STATE(84), 1,
      sym_comment,
  [1562] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(214), 1,
      sym__account_component,
    STATE(85), 1,
      sym_comment,
  [1572] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      sym__account_component,
    STATE(86), 1,
      sym_comment,
  [1582] = 1,
    ACTIONS(218), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 45,
  [SMALL_STATE(4)] = 90,
  [SMALL_STATE(5)] = 126,
  [SMALL_STATE(6)] = 162,
  [SMALL_STATE(7)] = 198,
  [SMALL_STATE(8)] = 234,
  [SMALL_STATE(9)] = 270,
  [SMALL_STATE(10)] = 299,
  [SMALL_STATE(11)] = 328,
  [SMALL_STATE(12)] = 355,
  [SMALL_STATE(13)] = 385,
  [SMALL_STATE(14)] = 409,
  [SMALL_STATE(15)] = 438,
  [SMALL_STATE(16)] = 461,
  [SMALL_STATE(17)] = 490,
  [SMALL_STATE(18)] = 517,
  [SMALL_STATE(19)] = 540,
  [SMALL_STATE(20)] = 561,
  [SMALL_STATE(21)] = 584,
  [SMALL_STATE(22)] = 613,
  [SMALL_STATE(23)] = 642,
  [SMALL_STATE(24)] = 662,
  [SMALL_STATE(25)] = 686,
  [SMALL_STATE(26)] = 706,
  [SMALL_STATE(27)] = 726,
  [SMALL_STATE(28)] = 745,
  [SMALL_STATE(29)] = 766,
  [SMALL_STATE(30)] = 794,
  [SMALL_STATE(31)] = 812,
  [SMALL_STATE(32)] = 830,
  [SMALL_STATE(33)] = 848,
  [SMALL_STATE(34)] = 878,
  [SMALL_STATE(35)] = 896,
  [SMALL_STATE(36)] = 913,
  [SMALL_STATE(37)] = 930,
  [SMALL_STATE(38)] = 947,
  [SMALL_STATE(39)] = 966,
  [SMALL_STATE(40)] = 983,
  [SMALL_STATE(41)] = 1002,
  [SMALL_STATE(42)] = 1019,
  [SMALL_STATE(43)] = 1036,
  [SMALL_STATE(44)] = 1053,
  [SMALL_STATE(45)] = 1070,
  [SMALL_STATE(46)] = 1086,
  [SMALL_STATE(47)] = 1100,
  [SMALL_STATE(48)] = 1113,
  [SMALL_STATE(49)] = 1126,
  [SMALL_STATE(50)] = 1139,
  [SMALL_STATE(51)] = 1152,
  [SMALL_STATE(52)] = 1165,
  [SMALL_STATE(53)] = 1178,
  [SMALL_STATE(54)] = 1191,
  [SMALL_STATE(55)] = 1204,
  [SMALL_STATE(56)] = 1217,
  [SMALL_STATE(57)] = 1230,
  [SMALL_STATE(58)] = 1243,
  [SMALL_STATE(59)] = 1259,
  [SMALL_STATE(60)] = 1273,
  [SMALL_STATE(61)] = 1289,
  [SMALL_STATE(62)] = 1305,
  [SMALL_STATE(63)] = 1319,
  [SMALL_STATE(64)] = 1335,
  [SMALL_STATE(65)] = 1351,
  [SMALL_STATE(66)] = 1367,
  [SMALL_STATE(67)] = 1378,
  [SMALL_STATE(68)] = 1391,
  [SMALL_STATE(69)] = 1402,
  [SMALL_STATE(70)] = 1412,
  [SMALL_STATE(71)] = 1422,
  [SMALL_STATE(72)] = 1432,
  [SMALL_STATE(73)] = 1442,
  [SMALL_STATE(74)] = 1452,
  [SMALL_STATE(75)] = 1462,
  [SMALL_STATE(76)] = 1472,
  [SMALL_STATE(77)] = 1482,
  [SMALL_STATE(78)] = 1492,
  [SMALL_STATE(79)] = 1502,
  [SMALL_STATE(80)] = 1512,
  [SMALL_STATE(81)] = 1522,
  [SMALL_STATE(82)] = 1532,
  [SMALL_STATE(83)] = 1542,
  [SMALL_STATE(84)] = 1552,
  [SMALL_STATE(85)] = 1562,
  [SMALL_STATE(86)] = 1572,
  [SMALL_STATE(87)] = 1582,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(85),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(26),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2), SHIFT_REPEAT(9),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 5),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(82),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(83),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_definition, 3),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad_definition, 3, .production_id = 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag_definition, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag_definition, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(86),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2),
  [171] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2), SHIFT_REPEAT(68),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
