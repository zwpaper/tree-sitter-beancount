#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 102
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 72
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

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
  anon_sym_event = 15,
  anon_sym_balance = 16,
  anon_sym_price = 17,
  anon_sym_pad = 18,
  anon_sym_custom = 19,
  aux_sym_uncheck_token1 = 20,
  anon_sym_Assets = 21,
  anon_sym_Liabilities = 22,
  anon_sym_Equity = 23,
  anon_sym_Income = 24,
  anon_sym_Expenses = 25,
  anon_sym_COLON = 26,
  sym__account_component = 27,
  anon_sym_STRICT = 28,
  anon_sym_NONE = 29,
  sym_date = 30,
  sym_note = 31,
  anon_sym_DQUOTE = 32,
  aux_sym_text_token1 = 33,
  sym_unsigned_amount = 34,
  sym_amount = 35,
  anon_sym_STAR = 36,
  anon_sym_BANG = 37,
  sym_commodity = 38,
  anon_sym_SEMI = 39,
  aux_sym_comment_token1 = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym_pushtag_definition = 43,
  sym_poptag_definition = 44,
  sym__entry_definition = 45,
  sym_open_definition = 46,
  sym_close_definition = 47,
  sym_commodity_definition = 48,
  sym_transaction_definition = 49,
  sym_post_definition = 50,
  sym_price = 51,
  sym_cost = 52,
  sym_note_definition = 53,
  sym_document_definition = 54,
  sym_event_definition = 55,
  sym_balance_definition = 56,
  sym_price_definition = 57,
  sym_pad_definition = 58,
  sym_custom_definition = 59,
  sym_uncheck = 60,
  sym_account = 61,
  sym_text = 62,
  sym_txn = 63,
  sym_comment = 64,
  aux_sym_source_file_repeat1 = 65,
  aux_sym_open_definition_repeat1 = 66,
  aux_sym_transaction_definition_repeat1 = 67,
  aux_sym_transaction_definition_repeat2 = 68,
  aux_sym_custom_definition_repeat1 = 69,
  aux_sym_account_repeat1 = 70,
  aux_sym_text_repeat1 = 71,
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
  [anon_sym_event] = "event",
  [anon_sym_balance] = "balance",
  [anon_sym_price] = "price",
  [anon_sym_pad] = "pad",
  [anon_sym_custom] = "custom",
  [aux_sym_uncheck_token1] = "uncheck_token1",
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
  [aux_sym_text_token1] = "text_token1",
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
  [sym_event_definition] = "event_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_price_definition] = "price_definition",
  [sym_pad_definition] = "pad_definition",
  [sym_custom_definition] = "custom_definition",
  [sym_uncheck] = "uncheck",
  [sym_account] = "account",
  [sym_text] = "text",
  [sym_txn] = "txn",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_open_definition_repeat1] = "open_definition_repeat1",
  [aux_sym_transaction_definition_repeat1] = "transaction_definition_repeat1",
  [aux_sym_transaction_definition_repeat2] = "transaction_definition_repeat2",
  [aux_sym_custom_definition_repeat1] = "custom_definition_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
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
  [anon_sym_event] = anon_sym_event,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_price] = anon_sym_price,
  [anon_sym_pad] = anon_sym_pad,
  [anon_sym_custom] = anon_sym_custom,
  [aux_sym_uncheck_token1] = aux_sym_uncheck_token1,
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
  [aux_sym_text_token1] = aux_sym_text_token1,
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
  [sym_event_definition] = sym_event_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_price_definition] = sym_price_definition,
  [sym_pad_definition] = sym_pad_definition,
  [sym_custom_definition] = sym_custom_definition,
  [sym_uncheck] = sym_uncheck,
  [sym_account] = sym_account,
  [sym_text] = sym_text,
  [sym_txn] = sym_txn,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_open_definition_repeat1] = aux_sym_open_definition_repeat1,
  [aux_sym_transaction_definition_repeat1] = aux_sym_transaction_definition_repeat1,
  [aux_sym_transaction_definition_repeat2] = aux_sym_transaction_definition_repeat2,
  [aux_sym_custom_definition_repeat1] = aux_sym_custom_definition_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
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
  [anon_sym_event] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_price] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_pad] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_custom] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_uncheck_token1] = {
    .visible = false,
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
  [aux_sym_text_token1] = {
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
  [sym_event_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_price_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_pad_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_custom_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_uncheck] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
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
  [aux_sym_custom_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_account_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_narration = 2,
  field_pad = 3,
  field_payee = 4,
  field_type_name = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_narration] = "narration",
  [field_pad] = "pad",
  [field_payee] = "payee",
  [field_type_name] = "type_name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type_name, 1},
  [1] =
    {field_narration, 1},
  [2] =
    {field_name, 1},
    {field_value, 2},
  [4] =
    {field_pad, 2},
  [5] =
    {field_narration, 2},
    {field_payee, 1},
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
      if (eof) ADVANCE(113);
      if (lookahead == '!') ADVANCE(192);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == '*') ADVANCE(191);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A') ADVANCE(204);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead == 'I') ADVANCE(202);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'N') ADVANCE(197);
      if (lookahead == 'S') ADVANCE(199);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == 'b') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(46);
      if (lookahead == 'd') ADVANCE(61);
      if (lookahead == 'e') ADVANCE(91);
      if (lookahead == 'n') ADVANCE(59);
      if (lookahead == 'o') ADVANCE(67);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '}') ADVANCE(125);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(180);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0) ADVANCE(171);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(173);
      if (lookahead == '1') ADVANCE(176);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '1') ADVANCE(185);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '1') ADVANCE(97);
      END_STATE();
    case 7:
      if (lookahead == '3') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      END_STATE();
    case 9:
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(164);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(21);
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 'r') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(90);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(134);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(120);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(133);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(161);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(132);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(73);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(116);
      END_STATE();
    case 36:
      if (lookahead == 'g') ADVANCE(114);
      END_STATE();
    case 37:
      if (lookahead == 'h') ADVANCE(87);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(86);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(82);
      END_STATE();
    case 44:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'o') ADVANCE(49);
      if (lookahead == 'u') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(135);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(62);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 52:
      if (lookahead == 'm') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(118);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(81);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(20);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(66);
      if (lookahead == 'u') ADVANCE(71);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(84);
      END_STATE();
    case 67:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 68:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 69:
      if (lookahead == 'q') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(75);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(162);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 78:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(131);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(129);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 87:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 89:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 90:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 91:
      if (lookahead == 'v') ADVANCE(23);
      END_STATE();
    case 92:
      if (lookahead == 'y') ADVANCE(160);
      END_STATE();
    case 93:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 94:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      END_STATE();
    case 95:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      END_STATE();
    case 96:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(167);
      END_STATE();
    case 97:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(94);
      END_STATE();
    case 98:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(94);
      END_STATE();
    case 99:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 100:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 101:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(167);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 104:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 107:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 108:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 109:
      if (eof) ADVANCE(113);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == '#') ADVANCE(106);
      if (lookahead == ',') ADVANCE(119);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '@') ADVANCE(123);
      if (lookahead == 'A') ADVANCE(70);
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == 'I') ADVANCE(53);
      if (lookahead == 'L') ADVANCE(38);
      if (lookahead == '^') ADVANCE(107);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == '{') ADVANCE(124);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(109)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 110:
      if (eof) ADVANCE(113);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == 'A') ADVANCE(204);
      if (lookahead == 'E') ADVANCE(203);
      if (lookahead == 'I') ADVANCE(202);
      if (lookahead == 'L') ADVANCE(201);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(110)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 111:
      if (eof) ADVANCE(113);
      if (lookahead == '"') ADVANCE(170);
      if (lookahead == ';') ADVANCE(207);
      if (lookahead == 'p') ADVANCE(143);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(111)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (lookahead != 0) ADVANCE(157);
      END_STATE();
    case 112:
      if (eof) ADVANCE(113);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead == ':') ADVANCE(163);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == 'p') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(112)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_pushtag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_poptag);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_price_token1);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_price_token1);
      if (lookahead == '@') ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_link);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '"') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '0') ADVANCE(152);
      if (lookahead == '1') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '3') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(153);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'a') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'a') ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'g') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'g') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'h') ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'o') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'p') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 's') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(169);
      if (lookahead == ';') ADVANCE(206);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(171);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '0') ADVANCE(177);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(175);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(175);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(177);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(181);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(100);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(187);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(183);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(101);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(89);
      if (lookahead == 'x') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(205);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(157);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(208);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(210);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 109},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 109},
  [4] = {.lex_state = 109},
  [5] = {.lex_state = 109},
  [6] = {.lex_state = 109},
  [7] = {.lex_state = 109},
  [8] = {.lex_state = 109},
  [9] = {.lex_state = 110},
  [10] = {.lex_state = 110},
  [11] = {.lex_state = 110},
  [12] = {.lex_state = 109},
  [13] = {.lex_state = 110},
  [14] = {.lex_state = 109},
  [15] = {.lex_state = 109},
  [16] = {.lex_state = 109},
  [17] = {.lex_state = 109},
  [18] = {.lex_state = 109},
  [19] = {.lex_state = 109},
  [20] = {.lex_state = 109},
  [21] = {.lex_state = 109},
  [22] = {.lex_state = 109},
  [23] = {.lex_state = 109},
  [24] = {.lex_state = 109},
  [25] = {.lex_state = 109},
  [26] = {.lex_state = 109},
  [27] = {.lex_state = 109},
  [28] = {.lex_state = 109},
  [29] = {.lex_state = 111},
  [30] = {.lex_state = 109},
  [31] = {.lex_state = 109},
  [32] = {.lex_state = 111},
  [33] = {.lex_state = 109},
  [34] = {.lex_state = 111},
  [35] = {.lex_state = 109},
  [36] = {.lex_state = 109},
  [37] = {.lex_state = 109},
  [38] = {.lex_state = 109},
  [39] = {.lex_state = 109},
  [40] = {.lex_state = 109},
  [41] = {.lex_state = 111},
  [42] = {.lex_state = 109},
  [43] = {.lex_state = 111},
  [44] = {.lex_state = 109},
  [45] = {.lex_state = 109},
  [46] = {.lex_state = 109},
  [47] = {.lex_state = 109},
  [48] = {.lex_state = 109},
  [49] = {.lex_state = 109},
  [50] = {.lex_state = 111},
  [51] = {.lex_state = 111},
  [52] = {.lex_state = 109},
  [53] = {.lex_state = 112},
  [54] = {.lex_state = 109},
  [55] = {.lex_state = 109},
  [56] = {.lex_state = 109},
  [57] = {.lex_state = 109},
  [58] = {.lex_state = 109},
  [59] = {.lex_state = 109},
  [60] = {.lex_state = 109},
  [61] = {.lex_state = 109},
  [62] = {.lex_state = 109},
  [63] = {.lex_state = 109},
  [64] = {.lex_state = 109},
  [65] = {.lex_state = 109},
  [66] = {.lex_state = 109},
  [67] = {.lex_state = 112},
  [68] = {.lex_state = 112},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 112},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 112},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 109},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 112},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 112},
  [88] = {.lex_state = 112},
  [89] = {.lex_state = 110},
  [90] = {.lex_state = 209},
  [91] = {.lex_state = 112},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 112},
  [94] = {.lex_state = 109},
  [95] = {.lex_state = 112},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 112},
  [98] = {.lex_state = 112},
  [99] = {.lex_state = 112},
  [100] = {.lex_state = 9},
  [101] = {(TSStateId)(-1)},
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
    [anon_sym_event] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_price] = ACTIONS(1),
    [anon_sym_pad] = ACTIONS(1),
    [anon_sym_custom] = ACTIONS(1),
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
    [sym_source_file] = STATE(85),
    [sym__definition] = STATE(56),
    [sym_pushtag_definition] = STATE(57),
    [sym_poptag_definition] = STATE(57),
    [sym__entry_definition] = STATE(57),
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
  [0] = 15,
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
      anon_sym_event,
    ACTIONS(25), 1,
      anon_sym_balance,
    ACTIONS(27), 1,
      anon_sym_price,
    ACTIONS(29), 1,
      anon_sym_pad,
    ACTIONS(31), 1,
      anon_sym_custom,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      sym_txn,
    ACTIONS(33), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(62), 11,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_document_definition,
      sym_event_definition,
      sym_balance_definition,
      sym_price_definition,
      sym_pad_definition,
      sym_custom_definition,
  [57] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_text,
    STATE(6), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(22), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(37), 2,
      sym_tag,
      sym_link,
    ACTIONS(35), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [99] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(8), 1,
      sym_text,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(37), 2,
      sym_tag,
      sym_link,
    ACTIONS(43), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [141] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(5), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(23), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(37), 2,
      sym_tag,
      sym_link,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [177] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(6), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(37), 2,
      sym_tag,
      sym_link,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [213] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_comment,
    STATE(16), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(24), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(37), 2,
      sym_tag,
      sym_link,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [249] = 9,
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
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(37), 2,
      sym_tag,
      sym_link,
    ACTIONS(51), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [285] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      anon_sym_COLON,
    STATE(9), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_account_repeat1,
    ACTIONS(57), 2,
      sym_amount,
      sym_commodity,
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
  [314] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(55), 1,
      anon_sym_COLON,
    STATE(9), 1,
      aux_sym_account_repeat1,
    STATE(10), 1,
      sym_comment,
    ACTIONS(61), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(59), 10,
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
  [343] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      anon_sym_COLON,
    ACTIONS(68), 2,
      sym_amount,
      sym_commodity,
    STATE(11), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(63), 10,
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
  [370] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      aux_sym_price_token1,
    ACTIONS(74), 1,
      anon_sym_LBRACE,
    STATE(12), 1,
      sym_comment,
    STATE(26), 1,
      sym_cost,
    STATE(37), 1,
      sym_price,
    ACTIONS(70), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [400] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(13), 1,
      sym_comment,
    ACTIONS(68), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(63), 11,
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
  [424] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(14), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [453] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(15), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(76), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [482] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(80), 2,
      sym_tag,
      sym_link,
    STATE(16), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat1,
    ACTIONS(78), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [505] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(17), 1,
      sym_comment,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [534] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    STATE(18), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat2,
    ACTIONS(83), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(85), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [561] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(19), 1,
      sym_comment,
    ACTIONS(88), 12,
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
  [582] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(20), 1,
      sym_comment,
    ACTIONS(90), 12,
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
  [603] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(21), 1,
      sym_comment,
    ACTIONS(92), 12,
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
  [624] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(22), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [653] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(23), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(94), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [682] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(18), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(24), 1,
      sym_comment,
    STATE(28), 1,
      sym_account,
    STATE(31), 1,
      sym_post_definition,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [711] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(98), 11,
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
  [731] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      aux_sym_price_token1,
    STATE(26), 1,
      sym_comment,
    STATE(36), 1,
      sym_price,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [755] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(27), 1,
      sym_comment,
    ACTIONS(102), 10,
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
  [774] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(106), 1,
      sym_amount,
    STATE(28), 1,
      sym_comment,
    ACTIONS(104), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [795] = 8,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      aux_sym_uncheck_token1,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    STATE(50), 1,
      sym_text,
    STATE(51), 1,
      sym_uncheck,
    STATE(29), 2,
      sym_comment,
      aux_sym_custom_definition_repeat1,
    ACTIONS(110), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [823] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_pushtag,
    ACTIONS(9), 1,
      anon_sym_poptag,
    ACTIONS(11), 1,
      sym_date,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    STATE(30), 1,
      sym_comment,
    STATE(33), 1,
      aux_sym_source_file_repeat1,
    STATE(56), 1,
      sym__definition,
    STATE(57), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [853] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_comment,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [871] = 9,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(128), 1,
      aux_sym_uncheck_token1,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_comment,
    STATE(34), 1,
      aux_sym_custom_definition_repeat1,
    STATE(50), 1,
      sym_text,
    STATE(51), 1,
      sym_uncheck,
    ACTIONS(126), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [901] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
    ACTIONS(134), 1,
      anon_sym_pushtag,
    ACTIONS(137), 1,
      anon_sym_poptag,
    ACTIONS(140), 1,
      sym_date,
    STATE(56), 1,
      sym__definition,
    STATE(33), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(57), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [929] = 9,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      aux_sym_uncheck_token1,
    ACTIONS(130), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      aux_sym_custom_definition_repeat1,
    STATE(34), 1,
      sym_comment,
    STATE(50), 1,
      sym_text,
    STATE(51), 1,
      sym_uncheck,
    ACTIONS(145), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [959] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(35), 1,
      sym_comment,
    ACTIONS(147), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [977] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(36), 1,
      sym_comment,
    ACTIONS(149), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [995] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    ACTIONS(100), 9,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1013] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(38), 1,
      sym_comment,
    STATE(53), 1,
      sym_account,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1030] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(153), 1,
      anon_sym_COMMA,
    STATE(39), 2,
      sym_comment,
      aux_sym_open_definition_repeat1,
    ACTIONS(151), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1047] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(39), 1,
      aux_sym_open_definition_repeat1,
    STATE(40), 1,
      sym_comment,
    ACTIONS(156), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1066] = 4,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    STATE(41), 1,
      sym_comment,
    ACTIONS(160), 5,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_date,
      anon_sym_DQUOTE,
  [1083] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    STATE(61), 1,
      sym_account,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1100] = 4,
    ACTIONS(88), 1,
      ts_builtin_sym_end,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    STATE(43), 1,
      sym_comment,
    ACTIONS(162), 5,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_date,
      anon_sym_DQUOTE,
  [1117] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    STATE(66), 1,
      sym_account,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1134] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(158), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_open_definition_repeat1,
    STATE(45), 1,
      sym_comment,
    ACTIONS(164), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1153] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_account,
    STATE(46), 1,
      sym_comment,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1170] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    STATE(89), 1,
      sym_account,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1187] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(48), 1,
      sym_comment,
    STATE(80), 1,
      sym_account,
    ACTIONS(39), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1204] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(49), 1,
      sym_comment,
    STATE(84), 1,
      sym_account,
    ACTIONS(166), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1221] = 4,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    STATE(50), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_date,
      anon_sym_DQUOTE,
  [1238] = 4,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_comment,
    ACTIONS(174), 5,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_date,
      anon_sym_DQUOTE,
  [1255] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(52), 1,
      sym_comment,
    ACTIONS(151), 5,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      anon_sym_COMMA,
      sym_date,
  [1269] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(178), 1,
      sym_commodity,
    STATE(53), 1,
      sym_comment,
    ACTIONS(176), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1285] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(54), 1,
      sym_comment,
    ACTIONS(180), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1298] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(55), 1,
      sym_comment,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1311] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    ACTIONS(184), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1324] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_comment,
    ACTIONS(186), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1337] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_comment,
    ACTIONS(188), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1350] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    ACTIONS(190), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1363] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1376] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_comment,
    ACTIONS(194), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1389] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(62), 1,
      sym_comment,
    ACTIONS(196), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1402] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_comment,
    ACTIONS(198), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1415] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(64), 1,
      sym_comment,
    ACTIONS(200), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1428] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_comment,
    ACTIONS(202), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1441] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_comment,
    ACTIONS(204), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1454] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      sym_filepath,
    ACTIONS(206), 1,
      anon_sym_COLON,
    STATE(67), 1,
      sym_comment,
    STATE(70), 1,
      aux_sym_account_repeat1,
  [1470] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_filepath,
    ACTIONS(206), 1,
      anon_sym_COLON,
    STATE(67), 1,
      aux_sym_account_repeat1,
    STATE(68), 1,
      sym_comment,
  [1486] = 4,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(208), 1,
      anon_sym_DQUOTE,
    ACTIONS(210), 1,
      aux_sym_text_token1,
    STATE(69), 2,
      sym_comment,
      aux_sym_text_repeat1,
  [1500] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      sym_filepath,
    ACTIONS(213), 1,
      anon_sym_COLON,
    STATE(70), 2,
      sym_comment,
      aux_sym_account_repeat1,
  [1514] = 5,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    ACTIONS(218), 1,
      aux_sym_text_token1,
    STATE(71), 1,
      sym_comment,
    STATE(72), 1,
      aux_sym_text_repeat1,
  [1530] = 5,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      aux_sym_text_token1,
    ACTIONS(220), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_text_repeat1,
    STATE(72), 1,
      sym_comment,
  [1546] = 5,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      aux_sym_text_token1,
    ACTIONS(222), 1,
      anon_sym_DQUOTE,
    STATE(73), 1,
      sym_comment,
    STATE(74), 1,
      aux_sym_text_repeat1,
  [1562] = 5,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(218), 1,
      aux_sym_text_token1,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    STATE(69), 1,
      aux_sym_text_repeat1,
    STATE(74), 1,
      sym_comment,
  [1578] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(58), 1,
      sym_text,
    STATE(75), 1,
      sym_comment,
  [1591] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_comment,
    ACTIONS(63), 2,
      sym_filepath,
      anon_sym_COLON,
  [1602] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      sym_text,
    STATE(77), 1,
      sym_comment,
  [1615] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(41), 1,
      anon_sym_DQUOTE,
    STATE(75), 1,
      sym_text,
    STATE(78), 1,
      sym_comment,
  [1628] = 3,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    STATE(79), 1,
      sym_comment,
    ACTIONS(228), 2,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [1639] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(230), 1,
      sym_amount,
    STATE(80), 1,
      sym_comment,
  [1649] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      anon_sym_RBRACE,
    STATE(81), 1,
      sym_comment,
  [1659] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(234), 1,
      sym_unsigned_amount,
    STATE(82), 1,
      sym_comment,
  [1669] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(236), 1,
      sym_unsigned_amount,
    STATE(83), 1,
      sym_comment,
  [1679] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(238), 1,
      sym_filepath,
    STATE(84), 1,
      sym_comment,
  [1689] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(240), 1,
      ts_builtin_sym_end,
    STATE(85), 1,
      sym_comment,
  [1699] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(242), 1,
      sym_tag,
    STATE(86), 1,
      sym_comment,
  [1709] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(244), 1,
      sym_commodity,
    STATE(87), 1,
      sym_comment,
  [1719] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(246), 1,
      sym_commodity,
    STATE(88), 1,
      sym_comment,
  [1729] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(248), 1,
      sym_note,
    STATE(89), 1,
      sym_comment,
  [1739] = 3,
    ACTIONS(118), 1,
      anon_sym_SEMI,
    ACTIONS(250), 1,
      aux_sym_comment_token1,
    STATE(90), 1,
      sym_comment,
  [1749] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      sym_commodity,
    STATE(91), 1,
      sym_comment,
  [1759] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(254), 1,
      sym_tag,
    STATE(92), 1,
      sym_comment,
  [1769] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(256), 1,
      sym_commodity,
    STATE(93), 1,
      sym_comment,
  [1779] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(258), 1,
      sym_amount,
    STATE(94), 1,
      sym_comment,
  [1789] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(260), 1,
      sym_commodity,
    STATE(95), 1,
      sym_comment,
  [1799] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(262), 1,
      sym__account_component,
    STATE(96), 1,
      sym_comment,
  [1809] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(264), 1,
      sym_commodity,
    STATE(97), 1,
      sym_comment,
  [1819] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(266), 1,
      sym_commodity,
    STATE(98), 1,
      sym_comment,
  [1829] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(268), 1,
      sym_commodity,
    STATE(99), 1,
      sym_comment,
  [1839] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(270), 1,
      sym__account_component,
    STATE(100), 1,
      sym_comment,
  [1849] = 1,
    ACTIONS(272), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 99,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 213,
  [SMALL_STATE(8)] = 249,
  [SMALL_STATE(9)] = 285,
  [SMALL_STATE(10)] = 314,
  [SMALL_STATE(11)] = 343,
  [SMALL_STATE(12)] = 370,
  [SMALL_STATE(13)] = 400,
  [SMALL_STATE(14)] = 424,
  [SMALL_STATE(15)] = 453,
  [SMALL_STATE(16)] = 482,
  [SMALL_STATE(17)] = 505,
  [SMALL_STATE(18)] = 534,
  [SMALL_STATE(19)] = 561,
  [SMALL_STATE(20)] = 582,
  [SMALL_STATE(21)] = 603,
  [SMALL_STATE(22)] = 624,
  [SMALL_STATE(23)] = 653,
  [SMALL_STATE(24)] = 682,
  [SMALL_STATE(25)] = 711,
  [SMALL_STATE(26)] = 731,
  [SMALL_STATE(27)] = 755,
  [SMALL_STATE(28)] = 774,
  [SMALL_STATE(29)] = 795,
  [SMALL_STATE(30)] = 823,
  [SMALL_STATE(31)] = 853,
  [SMALL_STATE(32)] = 871,
  [SMALL_STATE(33)] = 901,
  [SMALL_STATE(34)] = 929,
  [SMALL_STATE(35)] = 959,
  [SMALL_STATE(36)] = 977,
  [SMALL_STATE(37)] = 995,
  [SMALL_STATE(38)] = 1013,
  [SMALL_STATE(39)] = 1030,
  [SMALL_STATE(40)] = 1047,
  [SMALL_STATE(41)] = 1066,
  [SMALL_STATE(42)] = 1083,
  [SMALL_STATE(43)] = 1100,
  [SMALL_STATE(44)] = 1117,
  [SMALL_STATE(45)] = 1134,
  [SMALL_STATE(46)] = 1153,
  [SMALL_STATE(47)] = 1170,
  [SMALL_STATE(48)] = 1187,
  [SMALL_STATE(49)] = 1204,
  [SMALL_STATE(50)] = 1221,
  [SMALL_STATE(51)] = 1238,
  [SMALL_STATE(52)] = 1255,
  [SMALL_STATE(53)] = 1269,
  [SMALL_STATE(54)] = 1285,
  [SMALL_STATE(55)] = 1298,
  [SMALL_STATE(56)] = 1311,
  [SMALL_STATE(57)] = 1324,
  [SMALL_STATE(58)] = 1337,
  [SMALL_STATE(59)] = 1350,
  [SMALL_STATE(60)] = 1363,
  [SMALL_STATE(61)] = 1376,
  [SMALL_STATE(62)] = 1389,
  [SMALL_STATE(63)] = 1402,
  [SMALL_STATE(64)] = 1415,
  [SMALL_STATE(65)] = 1428,
  [SMALL_STATE(66)] = 1441,
  [SMALL_STATE(67)] = 1454,
  [SMALL_STATE(68)] = 1470,
  [SMALL_STATE(69)] = 1486,
  [SMALL_STATE(70)] = 1500,
  [SMALL_STATE(71)] = 1514,
  [SMALL_STATE(72)] = 1530,
  [SMALL_STATE(73)] = 1546,
  [SMALL_STATE(74)] = 1562,
  [SMALL_STATE(75)] = 1578,
  [SMALL_STATE(76)] = 1591,
  [SMALL_STATE(77)] = 1602,
  [SMALL_STATE(78)] = 1615,
  [SMALL_STATE(79)] = 1628,
  [SMALL_STATE(80)] = 1639,
  [SMALL_STATE(81)] = 1649,
  [SMALL_STATE(82)] = 1659,
  [SMALL_STATE(83)] = 1669,
  [SMALL_STATE(84)] = 1679,
  [SMALL_STATE(85)] = 1689,
  [SMALL_STATE(86)] = 1699,
  [SMALL_STATE(87)] = 1709,
  [SMALL_STATE(88)] = 1719,
  [SMALL_STATE(89)] = 1729,
  [SMALL_STATE(90)] = 1739,
  [SMALL_STATE(91)] = 1749,
  [SMALL_STATE(92)] = 1759,
  [SMALL_STATE(93)] = 1769,
  [SMALL_STATE(94)] = 1779,
  [SMALL_STATE(95)] = 1789,
  [SMALL_STATE(96)] = 1799,
  [SMALL_STATE(97)] = 1809,
  [SMALL_STATE(98)] = 1819,
  [SMALL_STATE(99)] = 1829,
  [SMALL_STATE(100)] = 1839,
  [SMALL_STATE(101)] = 1849,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2, .production_id = 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3, .production_id = 2),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4, .production_id = 5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3, .production_id = 5),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(96),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(25),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2), SHIFT_REPEAT(10),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4, .production_id = 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 5, .production_id = 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_definition_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2), SHIFT_REPEAT(50),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2), SHIFT_REPEAT(71),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_definition, 2, .production_id = 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_definition, 2, .production_id = 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(92),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(86),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_definition, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_definition, 3, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(95),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 3),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uncheck, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uncheck, 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_definition_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_definition, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 3, .production_id = 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag_definition, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad_definition, 3, .production_id = 4),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_definition, 4),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag_definition, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(79),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(100),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [218] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [220] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [240] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [250] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
