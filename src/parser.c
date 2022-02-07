#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 111
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 76
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  sym_metadata_key = 27,
  sym__account_component = 28,
  anon_sym_STRICT = 29,
  anon_sym_NONE = 30,
  sym_date = 31,
  sym_note = 32,
  anon_sym_DQUOTE = 33,
  aux_sym_text_token1 = 34,
  sym_unsigned_amount = 35,
  sym_amount = 36,
  anon_sym_STAR = 37,
  anon_sym_BANG = 38,
  sym_commodity = 39,
  anon_sym_SEMI = 40,
  aux_sym_comment_token1 = 41,
  sym_source_file = 42,
  sym__definition = 43,
  sym_pushtag_definition = 44,
  sym_poptag_definition = 45,
  sym__entry_definition = 46,
  sym_open_definition = 47,
  sym_close_definition = 48,
  sym_commodity_definition = 49,
  sym_transaction_definition = 50,
  sym_post_definition = 51,
  sym_price = 52,
  sym_cost = 53,
  sym_note_definition = 54,
  sym_document_definition = 55,
  sym_event_definition = 56,
  sym_balance_definition = 57,
  sym_price_definition = 58,
  sym_pad_definition = 59,
  sym_custom_definition = 60,
  sym_uncheck = 61,
  sym_account = 62,
  sym_metadata_definition = 63,
  sym_metadata_value = 64,
  sym_text = 65,
  sym_txn = 66,
  sym_comment = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym__entry_definition_repeat1 = 69,
  aux_sym_open_definition_repeat1 = 70,
  aux_sym_transaction_definition_repeat1 = 71,
  aux_sym_transaction_definition_repeat2 = 72,
  aux_sym_custom_definition_repeat1 = 73,
  aux_sym_account_repeat1 = 74,
  aux_sym_text_repeat1 = 75,
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
  [sym_metadata_key] = "metadata_key",
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
  [sym_metadata_definition] = "metadata_definition",
  [sym_metadata_value] = "metadata_value",
  [sym_text] = "text",
  [sym_txn] = "txn",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__entry_definition_repeat1] = "_entry_definition_repeat1",
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
  [sym_metadata_key] = sym_metadata_key,
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
  [sym_metadata_definition] = sym_metadata_definition,
  [sym_metadata_value] = sym_metadata_value,
  [sym_text] = sym_text,
  [sym_txn] = sym_txn,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__entry_definition_repeat1] = aux_sym__entry_definition_repeat1,
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
  [sym_metadata_key] = {
    .visible = true,
    .named = true,
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
  [sym_metadata_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_value] = {
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
  [aux_sym__entry_definition_repeat1] = {
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
      if (eof) ADVANCE(104);
      if (lookahead == '!') ADVANCE(197);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '*') ADVANCE(196);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(209);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == 'N') ADVANCE(202);
      if (lookahead == 'S') ADVANCE(204);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == 'b') ADVANCE(9);
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 'd') ADVANCE(59);
      if (lookahead == 'e') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(58);
      if (lookahead == 'o') ADVANCE(65);
      if (lookahead == 'p') ADVANCE(10);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '}') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0) ADVANCE(176);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(178);
      if (lookahead == '1') ADVANCE(181);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(187);
      if (lookahead == '1') ADVANCE(190);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 6:
      if (lookahead == '3') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(96);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      END_STATE();
    case 8:
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(169);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(64);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(69);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'd') ADVANCE(127);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(121);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(113);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(155);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(72);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 34:
      if (lookahead == 'g') ADVANCE(108);
      END_STATE();
    case 35:
      if (lookahead == 'g') ADVANCE(105);
      END_STATE();
    case 36:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(77);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(80);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(32);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(63);
      if (lookahead == 'o') ADVANCE(48);
      if (lookahead == 'u') ADVANCE(74);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(41);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(128);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(60);
      END_STATE();
    case 50:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'm') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 53:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 54:
      if (lookahead == 'n') ADVANCE(78);
      END_STATE();
    case 55:
      if (lookahead == 'n') ADVANCE(79);
      END_STATE();
    case 56:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 59:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 60:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 61:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 62:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 64:
      if (lookahead == 'p') ADVANCE(82);
      END_STATE();
    case 65:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 66:
      if (lookahead == 'p') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 'q') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 68:
      if (lookahead == 's') ADVANCE(73);
      END_STATE();
    case 69:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 70:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 71:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 72:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 73:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 74:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 76:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 77:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(124);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(122);
      END_STATE();
    case 80:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 82:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 83:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 85:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 86:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 87:
      if (lookahead == 'u') ADVANCE(40);
      END_STATE();
    case 88:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 89:
      if (lookahead == 'v') ADVANCE(22);
      END_STATE();
    case 90:
      if (lookahead == 'y') ADVANCE(154);
      END_STATE();
    case 91:
      if (lookahead == 'y') ADVANCE(114);
      END_STATE();
    case 92:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(172);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 94:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 95:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 96:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      END_STATE();
    case 97:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 98:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 99:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 100:
      if (eof) ADVANCE(104);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == ',') ADVANCE(112);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'A') ADVANCE(209);
      if (lookahead == 'E') ADVANCE(208);
      if (lookahead == 'I') ADVANCE(207);
      if (lookahead == 'L') ADVANCE(206);
      if (lookahead == '^') ADVANCE(98);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == '{') ADVANCE(117);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(100)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 101:
      if (eof) ADVANCE(104);
      if (lookahead == '"') ADVANCE(99);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == 'A') ADVANCE(68);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(101)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 102:
      if (eof) ADVANCE(104);
      if (lookahead == '"') ADVANCE(175);
      if (lookahead == ';') ADVANCE(212);
      if (lookahead == 'p') ADVANCE(136);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(102)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0) ADVANCE(151);
      END_STATE();
    case 103:
      if (eof) ADVANCE(104);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(93);
      if (lookahead == ':') ADVANCE(157);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == 'p') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(103)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_pushtag);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_pushtag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_pushtag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_poptag);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_poptag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_poptag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_price_token1);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_price_token1);
      if (lookahead == '@') ADVANCE(115);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_tag);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(119);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_link);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_document);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_filepath);
      if (lookahead == '"') ADVANCE(123);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_event);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_price);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_pad);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_custom);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == '1') ADVANCE(144);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '3') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'g') ADVANCE(110);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'g') ADVANCE(107);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'h') ADVANCE(140);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'o') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(138);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 'p') ADVANCE(139);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 's') ADVANCE(135);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 't') ADVANCE(131);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == 't') ADVANCE(132);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_uncheck_token1);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(160);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'a') ADVANCE(161);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(109);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'g') ADVANCE(106);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'h') ADVANCE(167);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'o') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(165);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 'p') ADVANCE(166);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 's') ADVANCE(162);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(158);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == 't') ADVANCE(159);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_metadata_key);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(168);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_text_token1);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_text_token1);
      if (lookahead == '"') ADVANCE(174);
      if (lookahead == ';') ADVANCE(211);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(177);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(176);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '0') ADVANCE(182);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(180);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(180);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(184);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_unsigned_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(192);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(188);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(188);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(95);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(11);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(17);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(87);
      if (lookahead == 'x') ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(210);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ') ADVANCE(151);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == ';') ADVANCE(213);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(214);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(215);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 100},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 100},
  [4] = {.lex_state = 100},
  [5] = {.lex_state = 100},
  [6] = {.lex_state = 100},
  [7] = {.lex_state = 100},
  [8] = {.lex_state = 100},
  [9] = {.lex_state = 100},
  [10] = {.lex_state = 100},
  [11] = {.lex_state = 100},
  [12] = {.lex_state = 100},
  [13] = {.lex_state = 100},
  [14] = {.lex_state = 100},
  [15] = {.lex_state = 101},
  [16] = {.lex_state = 100},
  [17] = {.lex_state = 100},
  [18] = {.lex_state = 101},
  [19] = {.lex_state = 101},
  [20] = {.lex_state = 100},
  [21] = {.lex_state = 100},
  [22] = {.lex_state = 100},
  [23] = {.lex_state = 100},
  [24] = {.lex_state = 100},
  [25] = {.lex_state = 100},
  [26] = {.lex_state = 101},
  [27] = {.lex_state = 100},
  [28] = {.lex_state = 100},
  [29] = {.lex_state = 100},
  [30] = {.lex_state = 100},
  [31] = {.lex_state = 100},
  [32] = {.lex_state = 103},
  [33] = {.lex_state = 100},
  [34] = {.lex_state = 102},
  [35] = {.lex_state = 103},
  [36] = {.lex_state = 102},
  [37] = {.lex_state = 100},
  [38] = {.lex_state = 102},
  [39] = {.lex_state = 100},
  [40] = {.lex_state = 100},
  [41] = {.lex_state = 103},
  [42] = {.lex_state = 100},
  [43] = {.lex_state = 100},
  [44] = {.lex_state = 103},
  [45] = {.lex_state = 100},
  [46] = {.lex_state = 102},
  [47] = {.lex_state = 102},
  [48] = {.lex_state = 100},
  [49] = {.lex_state = 100},
  [50] = {.lex_state = 100},
  [51] = {.lex_state = 100},
  [52] = {.lex_state = 100},
  [53] = {.lex_state = 100},
  [54] = {.lex_state = 102},
  [55] = {.lex_state = 102},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 100},
  [64] = {.lex_state = 103},
  [65] = {.lex_state = 100},
  [66] = {.lex_state = 100},
  [67] = {.lex_state = 100},
  [68] = {.lex_state = 100},
  [69] = {.lex_state = 100},
  [70] = {.lex_state = 100},
  [71] = {.lex_state = 100},
  [72] = {.lex_state = 100},
  [73] = {.lex_state = 100},
  [74] = {.lex_state = 100},
  [75] = {.lex_state = 100},
  [76] = {.lex_state = 100},
  [77] = {.lex_state = 100},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 101},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 7},
  [91] = {.lex_state = 103},
  [92] = {.lex_state = 100},
  [93] = {.lex_state = 103},
  [94] = {.lex_state = 103},
  [95] = {.lex_state = 103},
  [96] = {.lex_state = 103},
  [97] = {.lex_state = 103},
  [98] = {.lex_state = 100},
  [99] = {.lex_state = 103},
  [100] = {.lex_state = 103},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 103},
  [107] = {.lex_state = 214},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 8},
  [110] = {(TSStateId)(-1)},
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
    [sym_source_file] = STATE(103),
    [sym__definition] = STATE(77),
    [sym_pushtag_definition] = STATE(76),
    [sym_poptag_definition] = STATE(76),
    [sym__entry_definition] = STATE(76),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(45),
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
    STATE(50), 11,
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
  [57] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(43), 1,
      sym_metadata_key,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      sym_text,
    STATE(9), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(29), 1,
      sym_account,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(37), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    ACTIONS(39), 2,
      sym_tag,
      sym_link,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [105] = 13,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_metadata_key,
    STATE(4), 1,
      sym_comment,
    STATE(5), 1,
      sym_text,
    STATE(6), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(21), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(29), 1,
      sym_account,
    ACTIONS(39), 2,
      sym_tag,
      sym_link,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(50), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [153] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_metadata_key,
    STATE(5), 1,
      sym_comment,
    STATE(10), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(14), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(29), 1,
      sym_account,
    ACTIONS(39), 2,
      sym_tag,
      sym_link,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(57), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [195] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      sym_metadata_key,
    STATE(6), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(25), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(29), 1,
      sym_account,
    ACTIONS(39), 2,
      sym_tag,
      sym_link,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(64), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [237] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_tag,
    STATE(7), 1,
      sym_comment,
    STATE(39), 1,
      sym_metadata_value,
    ACTIONS(75), 2,
      sym_amount,
      sym_commodity,
    STATE(37), 2,
      sym_account,
      sym_text,
    ACTIONS(71), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(69), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [275] = 10,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      sym_tag,
    STATE(8), 1,
      sym_comment,
    STATE(39), 1,
      sym_metadata_value,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(75), 2,
      sym_amount,
      sym_commodity,
    STATE(37), 2,
      sym_account,
      sym_text,
    ACTIONS(71), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(77), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [315] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      sym_metadata_key,
    STATE(9), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(25), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(29), 1,
      sym_account,
    ACTIONS(39), 2,
      sym_tag,
      sym_link,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(81), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [357] = 11,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      sym_metadata_key,
    STATE(10), 1,
      sym_comment,
    STATE(12), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(25), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(29), 1,
      sym_account,
    ACTIONS(39), 2,
      sym_tag,
      sym_link,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(88), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [399] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      sym_metadata_key,
    STATE(11), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(29), 1,
      sym_account,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(95), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [434] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(104), 1,
      sym_metadata_key,
    STATE(12), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(29), 1,
      sym_account,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(102), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [469] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      sym_metadata_key,
    STATE(13), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(29), 1,
      sym_account,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(81), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [504] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      sym_metadata_key,
    STATE(14), 1,
      sym_comment,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(29), 1,
      sym_account,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(88), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [539] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(111), 1,
      anon_sym_COLON,
    STATE(15), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(109), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(107), 8,
      ts_builtin_sym_end,
      sym_filepath,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [566] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      aux_sym_price_token1,
    ACTIONS(120), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_comment,
    STATE(27), 1,
      sym_cost,
    STATE(40), 1,
      sym_price,
    ACTIONS(116), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(114), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [599] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(129), 1,
      sym_metadata_key,
    STATE(29), 1,
      sym_account,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(124), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(17), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat2,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(126), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [632] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      anon_sym_COLON,
    STATE(18), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_account_repeat1,
    ACTIONS(134), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(132), 8,
      ts_builtin_sym_end,
      sym_filepath,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [661] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(136), 1,
      anon_sym_COLON,
    STATE(15), 1,
      aux_sym_account_repeat1,
    STATE(19), 1,
      sym_comment,
    ACTIONS(140), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      sym_filepath,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [690] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(146), 1,
      sym_metadata_key,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(20), 1,
      sym_comment,
    STATE(29), 1,
      sym_account,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(144), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [725] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      sym_metadata_key,
    STATE(17), 1,
      aux_sym_transaction_definition_repeat2,
    STATE(21), 1,
      sym_comment,
    STATE(29), 1,
      sym_account,
    ACTIONS(62), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(64), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(42), 2,
      sym_post_definition,
      sym_metadata_definition,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [760] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(22), 1,
      sym_comment,
    ACTIONS(151), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(149), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [784] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(23), 1,
      sym_comment,
    ACTIONS(155), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(153), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [808] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(24), 1,
      sym_comment,
    ACTIONS(159), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(157), 10,
      ts_builtin_sym_end,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      anon_sym_DQUOTE,
  [832] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(165), 2,
      sym_tag,
      sym_link,
    STATE(25), 2,
      sym_comment,
      aux_sym_transaction_definition_repeat1,
    ACTIONS(163), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(161), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [858] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(26), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(107), 9,
      ts_builtin_sym_end,
      sym_filepath,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_COLON,
      sym_date,
  [882] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      aux_sym_price_token1,
    STATE(27), 1,
      sym_comment,
    STATE(31), 1,
      sym_price,
    ACTIONS(170), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [909] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(28), 1,
      sym_comment,
    ACTIONS(174), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(172), 9,
      ts_builtin_sym_end,
      sym_tag,
      sym_link,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [932] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(180), 1,
      sym_amount,
    STATE(29), 1,
      sym_comment,
    ACTIONS(178), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [956] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(30), 1,
      sym_comment,
    ACTIONS(184), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(182), 8,
      ts_builtin_sym_end,
      aux_sym_price_token1,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [978] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(31), 1,
      sym_comment,
    ACTIONS(188), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [999] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_COLON,
    STATE(32), 1,
      sym_comment,
    STATE(41), 1,
      aux_sym_account_repeat1,
    ACTIONS(132), 4,
      ts_builtin_sym_end,
      sym_date,
      sym_note,
      sym_commodity,
    ACTIONS(134), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
  [1024] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(33), 1,
      sym_comment,
    ACTIONS(194), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1045] = 9,
    ACTIONS(196), 1,
      ts_builtin_sym_end,
    ACTIONS(200), 1,
      aux_sym_uncheck_token1,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      sym_comment,
    STATE(36), 1,
      aux_sym_custom_definition_repeat1,
    STATE(54), 1,
      sym_text,
    STATE(55), 1,
      sym_uncheck,
    ACTIONS(198), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_date,
  [1076] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(206), 1,
      anon_sym_COLON,
    STATE(35), 2,
      sym_comment,
      aux_sym_account_repeat1,
    ACTIONS(107), 4,
      ts_builtin_sym_end,
      sym_date,
      sym_note,
      sym_commodity,
    ACTIONS(109), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
  [1099] = 8,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(209), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 1,
      aux_sym_uncheck_token1,
    ACTIONS(216), 1,
      anon_sym_DQUOTE,
    STATE(54), 1,
      sym_text,
    STATE(55), 1,
      sym_uncheck,
    STATE(36), 2,
      sym_comment,
      aux_sym_custom_definition_repeat1,
    ACTIONS(211), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_date,
  [1128] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(37), 1,
      sym_comment,
    ACTIONS(221), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(219), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1149] = 9,
    ACTIONS(200), 1,
      aux_sym_uncheck_token1,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    STATE(34), 1,
      aux_sym_custom_definition_repeat1,
    STATE(38), 1,
      sym_comment,
    STATE(54), 1,
      sym_text,
    STATE(55), 1,
      sym_uncheck,
    ACTIONS(225), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_date,
  [1180] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(39), 1,
      sym_comment,
    ACTIONS(229), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(227), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1201] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(40), 1,
      sym_comment,
    ACTIONS(170), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(168), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1222] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(190), 1,
      anon_sym_COLON,
    STATE(35), 1,
      aux_sym_account_repeat1,
    STATE(41), 1,
      sym_comment,
    ACTIONS(138), 4,
      ts_builtin_sym_end,
      sym_date,
      sym_note,
      sym_commodity,
    ACTIONS(140), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
  [1247] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(42), 1,
      sym_comment,
    ACTIONS(233), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
    ACTIONS(231), 7,
      ts_builtin_sym_end,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [1268] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(237), 1,
      anon_sym_pushtag,
    ACTIONS(240), 1,
      anon_sym_poptag,
    ACTIONS(243), 1,
      sym_date,
    STATE(77), 1,
      sym__definition,
    STATE(43), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    STATE(76), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [1296] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(44), 1,
      sym_comment,
    ACTIONS(109), 4,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
      sym_amount,
    ACTIONS(107), 5,
      ts_builtin_sym_end,
      anon_sym_COLON,
      sym_date,
      sym_note,
      sym_commodity,
  [1316] = 9,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      anon_sym_pushtag,
    ACTIONS(9), 1,
      anon_sym_poptag,
    ACTIONS(11), 1,
      sym_date,
    ACTIONS(246), 1,
      ts_builtin_sym_end,
    STATE(43), 1,
      aux_sym_source_file_repeat1,
    STATE(45), 1,
      sym_comment,
    STATE(77), 1,
      sym__definition,
    STATE(76), 3,
      sym_pushtag_definition,
      sym_poptag_definition,
      sym__entry_definition,
  [1346] = 4,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    STATE(46), 1,
      sym_comment,
    ACTIONS(155), 6,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_metadata_key,
      sym_date,
      anon_sym_DQUOTE,
  [1364] = 4,
    ACTIONS(149), 1,
      ts_builtin_sym_end,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    STATE(47), 1,
      sym_comment,
    ACTIONS(151), 6,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_metadata_key,
      sym_date,
      anon_sym_DQUOTE,
  [1382] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(252), 1,
      anon_sym_COMMA,
    ACTIONS(248), 2,
      ts_builtin_sym_end,
      sym_date,
    STATE(48), 2,
      sym_comment,
      aux_sym_open_definition_repeat1,
    ACTIONS(250), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1402] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      sym_metadata_key,
    STATE(49), 1,
      sym_comment,
    STATE(52), 1,
      aux_sym__entry_definition_repeat1,
    STATE(71), 1,
      sym_metadata_definition,
    ACTIONS(255), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(257), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
  [1426] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(259), 1,
      sym_metadata_key,
    STATE(49), 1,
      aux_sym__entry_definition_repeat1,
    STATE(50), 1,
      sym_comment,
    STATE(71), 1,
      sym_metadata_definition,
    ACTIONS(261), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(263), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
  [1450] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(51), 1,
      sym_comment,
    STATE(53), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(267), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1472] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(275), 1,
      sym_metadata_key,
    STATE(71), 1,
      sym_metadata_definition,
    ACTIONS(271), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(273), 2,
      anon_sym_pushtag,
      anon_sym_poptag,
    STATE(52), 2,
      sym_comment,
      aux_sym__entry_definition_repeat1,
  [1494] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(269), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_open_definition_repeat1,
    STATE(53), 1,
      sym_comment,
    ACTIONS(278), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(280), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1516] = 4,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
    ACTIONS(284), 6,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_metadata_key,
      sym_date,
      anon_sym_DQUOTE,
  [1534] = 4,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(286), 1,
      ts_builtin_sym_end,
    STATE(55), 1,
      sym_comment,
    ACTIONS(288), 6,
      anon_sym_pushtag,
      anon_sym_poptag,
      aux_sym_uncheck_token1,
      sym_metadata_key,
      sym_date,
      anon_sym_DQUOTE,
  [1552] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      sym_comment,
    STATE(64), 1,
      sym_account,
    ACTIONS(77), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1569] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_comment,
    STATE(69), 1,
      sym_account,
    ACTIONS(77), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1586] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(58), 1,
      sym_comment,
    STATE(73), 1,
      sym_account,
    ACTIONS(77), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1603] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(59), 1,
      sym_comment,
    STATE(100), 1,
      sym_account,
    ACTIONS(77), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1620] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(60), 1,
      sym_comment,
    STATE(87), 1,
      sym_account,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1637] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(61), 1,
      sym_comment,
    STATE(92), 1,
      sym_account,
    ACTIONS(77), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1654] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(57), 1,
      sym_account,
    STATE(62), 1,
      sym_comment,
    ACTIONS(41), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [1671] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(63), 1,
      sym_comment,
    ACTIONS(248), 3,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      sym_date,
    ACTIONS(250), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1688] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      sym_commodity,
    STATE(64), 1,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(292), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1707] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(65), 1,
      sym_comment,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(298), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1723] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(66), 1,
      sym_comment,
    ACTIONS(300), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(302), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1739] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(67), 1,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(306), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1755] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(68), 1,
      sym_comment,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(310), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1771] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(69), 1,
      sym_comment,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(314), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1787] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(70), 1,
      sym_comment,
    ACTIONS(316), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(318), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1803] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(71), 1,
      sym_comment,
    ACTIONS(320), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(322), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1819] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(72), 1,
      sym_comment,
    ACTIONS(324), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(326), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1835] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(73), 1,
      sym_comment,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      sym_date,
    ACTIONS(330), 3,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_metadata_key,
  [1851] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      sym_comment,
    ACTIONS(332), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1864] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(75), 1,
      sym_comment,
    ACTIONS(334), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1877] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(76), 1,
      sym_comment,
    ACTIONS(336), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1890] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    STATE(77), 1,
      sym_comment,
    ACTIONS(338), 4,
      ts_builtin_sym_end,
      anon_sym_pushtag,
      anon_sym_poptag,
      sym_date,
  [1903] = 4,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(340), 1,
      anon_sym_DQUOTE,
    ACTIONS(342), 1,
      aux_sym_text_token1,
    STATE(78), 2,
      sym_comment,
      aux_sym_text_repeat1,
  [1917] = 5,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(345), 1,
      anon_sym_DQUOTE,
    ACTIONS(347), 1,
      aux_sym_text_token1,
    STATE(79), 1,
      sym_comment,
    STATE(80), 1,
      aux_sym_text_repeat1,
  [1933] = 5,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      aux_sym_text_token1,
    ACTIONS(349), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_text_repeat1,
    STATE(80), 1,
      sym_comment,
  [1949] = 5,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      aux_sym_text_token1,
    ACTIONS(351), 1,
      anon_sym_DQUOTE,
    STATE(81), 1,
      sym_comment,
    STATE(82), 1,
      aux_sym_text_repeat1,
  [1965] = 5,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(347), 1,
      aux_sym_text_token1,
    ACTIONS(353), 1,
      anon_sym_DQUOTE,
    STATE(78), 1,
      aux_sym_text_repeat1,
    STATE(82), 1,
      sym_comment,
  [1981] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(355), 1,
      anon_sym_DQUOTE,
    STATE(38), 1,
      sym_text,
    STATE(83), 1,
      sym_comment,
  [1994] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    STATE(68), 1,
      sym_text,
    STATE(84), 1,
      sym_comment,
  [2007] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(46), 1,
      anon_sym_DQUOTE,
    STATE(84), 1,
      sym_text,
    STATE(85), 1,
      sym_comment,
  [2020] = 3,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    STATE(86), 1,
      sym_comment,
    ACTIONS(357), 2,
      anon_sym_DQUOTE,
      aux_sym_text_token1,
  [2031] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(359), 1,
      sym_filepath,
    STATE(87), 1,
      sym_comment,
  [2041] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(361), 1,
      anon_sym_RBRACE,
    STATE(88), 1,
      sym_comment,
  [2051] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(363), 1,
      sym_unsigned_amount,
    STATE(89), 1,
      sym_comment,
  [2061] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(365), 1,
      sym_unsigned_amount,
    STATE(90), 1,
      sym_comment,
  [2071] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(367), 1,
      sym_commodity,
    STATE(91), 1,
      sym_comment,
  [2081] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(369), 1,
      sym_amount,
    STATE(92), 1,
      sym_comment,
  [2091] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(371), 1,
      sym_commodity,
    STATE(93), 1,
      sym_comment,
  [2101] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(373), 1,
      sym_commodity,
    STATE(94), 1,
      sym_comment,
  [2111] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(375), 1,
      sym_commodity,
    STATE(95), 1,
      sym_comment,
  [2121] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(377), 1,
      sym_commodity,
    STATE(96), 1,
      sym_comment,
  [2131] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(379), 1,
      sym_commodity,
    STATE(97), 1,
      sym_comment,
  [2141] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(381), 1,
      sym_amount,
    STATE(98), 1,
      sym_comment,
  [2151] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(383), 1,
      sym_commodity,
    STATE(99), 1,
      sym_comment,
  [2161] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(385), 1,
      sym_note,
    STATE(100), 1,
      sym_comment,
  [2171] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(387), 1,
      sym__account_component,
    STATE(101), 1,
      sym_comment,
  [2181] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(389), 1,
      anon_sym_COLON,
    STATE(102), 1,
      sym_comment,
  [2191] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(391), 1,
      ts_builtin_sym_end,
    STATE(103), 1,
      sym_comment,
  [2201] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(393), 1,
      sym_tag,
    STATE(104), 1,
      sym_comment,
  [2211] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(395), 1,
      sym_tag,
    STATE(105), 1,
      sym_comment,
  [2221] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(397), 1,
      sym_commodity,
    STATE(106), 1,
      sym_comment,
  [2231] = 3,
    ACTIONS(204), 1,
      anon_sym_SEMI,
    ACTIONS(399), 1,
      aux_sym_comment_token1,
    STATE(107), 1,
      sym_comment,
  [2241] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(401), 1,
      anon_sym_COLON,
    STATE(108), 1,
      sym_comment,
  [2251] = 3,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(403), 1,
      sym__account_component,
    STATE(109), 1,
      sym_comment,
  [2261] = 1,
    ACTIONS(405), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 57,
  [SMALL_STATE(4)] = 105,
  [SMALL_STATE(5)] = 153,
  [SMALL_STATE(6)] = 195,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 275,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 357,
  [SMALL_STATE(11)] = 399,
  [SMALL_STATE(12)] = 434,
  [SMALL_STATE(13)] = 469,
  [SMALL_STATE(14)] = 504,
  [SMALL_STATE(15)] = 539,
  [SMALL_STATE(16)] = 566,
  [SMALL_STATE(17)] = 599,
  [SMALL_STATE(18)] = 632,
  [SMALL_STATE(19)] = 661,
  [SMALL_STATE(20)] = 690,
  [SMALL_STATE(21)] = 725,
  [SMALL_STATE(22)] = 760,
  [SMALL_STATE(23)] = 784,
  [SMALL_STATE(24)] = 808,
  [SMALL_STATE(25)] = 832,
  [SMALL_STATE(26)] = 858,
  [SMALL_STATE(27)] = 882,
  [SMALL_STATE(28)] = 909,
  [SMALL_STATE(29)] = 932,
  [SMALL_STATE(30)] = 956,
  [SMALL_STATE(31)] = 978,
  [SMALL_STATE(32)] = 999,
  [SMALL_STATE(33)] = 1024,
  [SMALL_STATE(34)] = 1045,
  [SMALL_STATE(35)] = 1076,
  [SMALL_STATE(36)] = 1099,
  [SMALL_STATE(37)] = 1128,
  [SMALL_STATE(38)] = 1149,
  [SMALL_STATE(39)] = 1180,
  [SMALL_STATE(40)] = 1201,
  [SMALL_STATE(41)] = 1222,
  [SMALL_STATE(42)] = 1247,
  [SMALL_STATE(43)] = 1268,
  [SMALL_STATE(44)] = 1296,
  [SMALL_STATE(45)] = 1316,
  [SMALL_STATE(46)] = 1346,
  [SMALL_STATE(47)] = 1364,
  [SMALL_STATE(48)] = 1382,
  [SMALL_STATE(49)] = 1402,
  [SMALL_STATE(50)] = 1426,
  [SMALL_STATE(51)] = 1450,
  [SMALL_STATE(52)] = 1472,
  [SMALL_STATE(53)] = 1494,
  [SMALL_STATE(54)] = 1516,
  [SMALL_STATE(55)] = 1534,
  [SMALL_STATE(56)] = 1552,
  [SMALL_STATE(57)] = 1569,
  [SMALL_STATE(58)] = 1586,
  [SMALL_STATE(59)] = 1603,
  [SMALL_STATE(60)] = 1620,
  [SMALL_STATE(61)] = 1637,
  [SMALL_STATE(62)] = 1654,
  [SMALL_STATE(63)] = 1671,
  [SMALL_STATE(64)] = 1688,
  [SMALL_STATE(65)] = 1707,
  [SMALL_STATE(66)] = 1723,
  [SMALL_STATE(67)] = 1739,
  [SMALL_STATE(68)] = 1755,
  [SMALL_STATE(69)] = 1771,
  [SMALL_STATE(70)] = 1787,
  [SMALL_STATE(71)] = 1803,
  [SMALL_STATE(72)] = 1819,
  [SMALL_STATE(73)] = 1835,
  [SMALL_STATE(74)] = 1851,
  [SMALL_STATE(75)] = 1864,
  [SMALL_STATE(76)] = 1877,
  [SMALL_STATE(77)] = 1890,
  [SMALL_STATE(78)] = 1903,
  [SMALL_STATE(79)] = 1917,
  [SMALL_STATE(80)] = 1933,
  [SMALL_STATE(81)] = 1949,
  [SMALL_STATE(82)] = 1965,
  [SMALL_STATE(83)] = 1981,
  [SMALL_STATE(84)] = 1994,
  [SMALL_STATE(85)] = 2007,
  [SMALL_STATE(86)] = 2020,
  [SMALL_STATE(87)] = 2031,
  [SMALL_STATE(88)] = 2041,
  [SMALL_STATE(89)] = 2051,
  [SMALL_STATE(90)] = 2061,
  [SMALL_STATE(91)] = 2071,
  [SMALL_STATE(92)] = 2081,
  [SMALL_STATE(93)] = 2091,
  [SMALL_STATE(94)] = 2101,
  [SMALL_STATE(95)] = 2111,
  [SMALL_STATE(96)] = 2121,
  [SMALL_STATE(97)] = 2131,
  [SMALL_STATE(98)] = 2141,
  [SMALL_STATE(99)] = 2151,
  [SMALL_STATE(100)] = 2161,
  [SMALL_STATE(101)] = 2171,
  [SMALL_STATE(102)] = 2181,
  [SMALL_STATE(103)] = 2191,
  [SMALL_STATE(104)] = 2201,
  [SMALL_STATE(105)] = 2211,
  [SMALL_STATE(106)] = 2221,
  [SMALL_STATE(107)] = 2231,
  [SMALL_STATE(108)] = 2241,
  [SMALL_STATE(109)] = 2251,
  [SMALL_STATE(110)] = 2261,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 1), SHIFT(108),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 2, .production_id = 2),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 2, .production_id = 2), SHIFT(108),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3, .production_id = 5),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 3, .production_id = 5),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 3, .production_id = 5), SHIFT(108),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 3, .production_id = 2),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 3, .production_id = 2), SHIFT(108),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_definition, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_definition, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 2), SHIFT(108),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4, .production_id = 5),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 4, .production_id = 5),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 4, .production_id = 5), SHIFT(108),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 4, .production_id = 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 4, .production_id = 2), SHIFT(108),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 5, .production_id = 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 5, .production_id = 5),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 5, .production_id = 5), SHIFT(108),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(109),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_definition, 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat2, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 2), SHIFT_REPEAT(18),
  [129] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat2, 2), SHIFT_REPEAT(108),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_transaction_definition, 3),
  [146] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_transaction_definition, 3), SHIFT(108),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_text, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_txn, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_txn, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(28),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 4),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_definition, 4),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 1),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_definition, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cost, 4),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cost, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_post_definition, 5),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_post_definition, 5),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price, 3),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price, 3),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_definition, 3, .production_id = 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_definition, 3, .production_id = 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(101),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_definition_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2), SHIFT_REPEAT(54),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 2), SHIFT_REPEAT(79),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_value, 1),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_value, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_custom_definition, 2, .production_id = 1),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_custom_definition, 2, .production_id = 1),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_definition, 3),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_definition, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat2, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_transaction_definition_repeat2, 1),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(105),
  [240] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(104),
  [243] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(99),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entry_definition, 3),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__entry_definition, 2),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__entry_definition, 2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_definition, 3),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entry_definition_repeat1, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__entry_definition_repeat1, 2),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__entry_definition_repeat1, 2), SHIFT_REPEAT(102),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_definition, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_uncheck, 1),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_uncheck, 1),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_custom_definition_repeat1, 1),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_custom_definition_repeat1, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_open_definition, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_balance_definition, 4),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_definition, 3),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document_definition, 3),
  [306] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_document_definition, 3),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_event_definition, 3, .production_id = 3),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_event_definition, 3, .production_id = 3),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pad_definition, 3, .production_id = 4),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pad_definition, 3, .production_id = 4),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_price_definition, 4),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_price_definition, 4),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__entry_definition_repeat1, 1),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__entry_definition_repeat1, 1),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [326] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_commodity_definition, 2),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_close_definition, 2),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_poptag_definition, 2),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pushtag_definition, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2),
  [342] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(86),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [349] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [351] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [353] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_text_repeat1, 1),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [391] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
