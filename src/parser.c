#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_open = 1,
  anon_sym_COMMA = 2,
  anon_sym_close = 3,
  anon_sym_commodity = 4,
  anon_sym_STAR = 5,
  anon_sym_BANG = 6,
  anon_sym_note = 7,
  anon_sym_balance = 8,
  anon_sym_SEMI = 9,
  aux_sym_comment_definition_token1 = 10,
  anon_sym_Assets = 11,
  anon_sym_Liabilities = 12,
  anon_sym_Equity = 13,
  anon_sym_Income = 14,
  anon_sym_Expenses = 15,
  anon_sym_COLON = 16,
  sym__account_component = 17,
  anon_sym_STRICT = 18,
  anon_sym_NONE = 19,
  sym_date = 20,
  sym_note = 21,
  sym_amount = 22,
  sym_commodity = 23,
  sym_source_file = 24,
  sym__definition = 25,
  sym_entry_definition = 26,
  sym_entry_type_definition = 27,
  sym_open_definition = 28,
  sym_close_definition = 29,
  sym_commodity_definition = 30,
  sym_transaction_definition = 31,
  sym_note_definition = 32,
  sym_balance_definition = 33,
  sym_comment_definition = 34,
  sym_account = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_open_definition_repeat1 = 37,
  aux_sym_transaction_definition_repeat1 = 38,
  aux_sym_account_repeat1 = 39,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_open] = "open",
  [anon_sym_COMMA] = ",",
  [anon_sym_close] = "close",
  [anon_sym_commodity] = "commodity",
  [anon_sym_STAR] = "*",
  [anon_sym_BANG] = "!",
  [anon_sym_note] = "note",
  [anon_sym_balance] = "balance",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_definition_token1] = "comment_definition_token1",
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
  [sym_amount] = "amount",
  [sym_commodity] = "commodity",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_entry_definition] = "entry_definition",
  [sym_entry_type_definition] = "entry_type_definition",
  [sym_open_definition] = "open_definition",
  [sym_close_definition] = "close_definition",
  [sym_commodity_definition] = "commodity_definition",
  [sym_transaction_definition] = "transaction_definition",
  [sym_note_definition] = "note_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_comment_definition] = "comment_definition",
  [sym_account] = "account",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_open_definition_repeat1] = "open_definition_repeat1",
  [aux_sym_transaction_definition_repeat1] = "transaction_definition_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_open] = anon_sym_open,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_close] = anon_sym_close,
  [anon_sym_commodity] = anon_sym_commodity,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_note] = anon_sym_note,
  [anon_sym_balance] = anon_sym_balance,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_definition_token1] = aux_sym_comment_definition_token1,
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
  [sym_amount] = sym_amount,
  [sym_commodity] = sym_commodity,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_entry_definition] = sym_entry_definition,
  [sym_entry_type_definition] = sym_entry_type_definition,
  [sym_open_definition] = sym_open_definition,
  [sym_close_definition] = sym_close_definition,
  [sym_commodity_definition] = sym_commodity_definition,
  [sym_transaction_definition] = sym_transaction_definition,
  [sym_note_definition] = sym_note_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_comment_definition] = sym_comment_definition,
  [sym_account] = sym_account,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_open_definition_repeat1] = aux_sym_open_definition_repeat1,
  [aux_sym_transaction_definition_repeat1] = aux_sym_transaction_definition_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_note] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_balance] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_definition_token1] = {
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
  [sym_amount] = {
    .visible = true,
    .named = true,
  },
  [sym_commodity] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_entry_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_entry_type_definition] = {
    .visible = true,
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
  [sym_note_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_balance_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_comment_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_account] = {
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
  [aux_sym_account_repeat1] = {
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
      if (eof) ADVANCE(74);
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '*') ADVANCE(79);
      if (lookahead == ',') ADVANCE(76);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == 'N') ADVANCE(110);
      if (lookahead == 'S') ADVANCE(112);
      if (lookahead == 'b') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead == 'o') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '1') ADVANCE(100);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '1') ADVANCE(62);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(66);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(6);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(40);
      if (lookahead == 'o') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(7);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(24);
      END_STATE();
    case 30:
      if (lookahead == 'm') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 41:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 43:
      if (lookahead == 'q') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(86);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 'u') ADVANCE(23);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(88);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(78);
      END_STATE();
    case 59:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(3);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(95);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(59);
      END_STATE();
    case 63:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 64:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 71:
      if (eof) ADVANCE(74);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == 'A') ADVANCE(117);
      if (lookahead == 'E') ADVANCE(116);
      if (lookahead == 'I') ADVANCE(115);
      if (lookahead == 'L') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(71)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 72:
      if (eof) ADVANCE(74);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == 'A') ADVANCE(44);
      if (lookahead == 'E') ADVANCE(43);
      if (lookahead == 'I') ADVANCE(33);
      if (lookahead == 'L') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 73:
      if (eof) ADVANCE(74);
      if (lookahead == ';') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(99);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(65);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(6);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(42);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(118);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 71},
  [4] = {.lex_state = 71},
  [5] = {.lex_state = 71},
  [6] = {.lex_state = 71},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 73},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 63},
  [31] = {.lex_state = 73},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 73},
  [35] = {.lex_state = 84},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 73},
  [38] = {.lex_state = 73},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_open] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_close] = ACTIONS(1),
    [anon_sym_commodity] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_note] = ACTIONS(1),
    [anon_sym_balance] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_Assets] = ACTIONS(1),
    [anon_sym_Liabilities] = ACTIONS(1),
    [anon_sym_Equity] = ACTIONS(1),
    [anon_sym_Income] = ACTIONS(1),
    [anon_sym_Expenses] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_STRICT] = ACTIONS(1),
    [anon_sym_NONE] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [sym_note] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [sym_commodity] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__definition] = STATE(13),
    [sym_entry_definition] = STATE(13),
    [sym_comment_definition] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_open,
    ACTIONS(11), 1,
      anon_sym_close,
    ACTIONS(13), 1,
      anon_sym_commodity,
    ACTIONS(17), 1,
      anon_sym_note,
    ACTIONS(19), 1,
      anon_sym_balance,
    STATE(29), 1,
      sym_entry_type_definition,
    ACTIONS(15), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(28), 6,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_balance_definition,
  [31] = 4,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(5), 1,
      aux_sym_account_repeat1,
    ACTIONS(25), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(21), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [53] = 4,
    ACTIONS(29), 1,
      anon_sym_COLON,
    STATE(4), 1,
      aux_sym_account_repeat1,
    ACTIONS(32), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(27), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [75] = 4,
    ACTIONS(23), 1,
      anon_sym_COLON,
    STATE(4), 1,
      aux_sym_account_repeat1,
    ACTIONS(36), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(34), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [97] = 2,
    ACTIONS(32), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(27), 10,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      anon_sym_COLON,
      sym_date,
      sym_note,
  [114] = 4,
    STATE(9), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(10), 1,
      sym_account,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [133] = 4,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(10), 1,
      sym_account,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(44), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [152] = 4,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(10), 1,
      sym_account,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [171] = 2,
    ACTIONS(51), 1,
      sym_amount,
    ACTIONS(49), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [185] = 1,
    ACTIONS(53), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [196] = 4,
    ACTIONS(55), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(60), 1,
      sym_date,
    STATE(12), 4,
      sym__definition,
      sym_entry_definition,
      sym_comment_definition,
      aux_sym_source_file_repeat1,
  [212] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_date,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(12), 4,
      sym__definition,
      sym_entry_definition,
      sym_comment_definition,
      aux_sym_source_file_repeat1,
  [228] = 2,
    STATE(22), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [239] = 2,
    STATE(26), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [250] = 2,
    STATE(33), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [261] = 2,
    STATE(32), 1,
      sym_account,
    ACTIONS(40), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [272] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(65), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [284] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [296] = 3,
    ACTIONS(72), 1,
      anon_sym_COMMA,
    STATE(19), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [308] = 1,
    ACTIONS(65), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_date,
  [315] = 2,
    ACTIONS(78), 1,
      sym_commodity,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [324] = 1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [330] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [336] = 1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [342] = 1,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [348] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [354] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [360] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [366] = 1,
    ACTIONS(94), 1,
      sym__account_component,
  [370] = 1,
    ACTIONS(96), 1,
      sym_commodity,
  [374] = 1,
    ACTIONS(98), 1,
      sym_amount,
  [378] = 1,
    ACTIONS(100), 1,
      sym_note,
  [382] = 1,
    ACTIONS(102), 1,
      sym_commodity,
  [386] = 1,
    ACTIONS(104), 1,
      aux_sym_comment_definition_token1,
  [390] = 1,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
  [394] = 1,
    ACTIONS(108), 1,
      sym_commodity,
  [398] = 1,
    ACTIONS(110), 1,
      sym_commodity,
  [402] = 1,
    ACTIONS(112), 1,
      sym_note,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 75,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 152,
  [SMALL_STATE(10)] = 171,
  [SMALL_STATE(11)] = 185,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 239,
  [SMALL_STATE(16)] = 250,
  [SMALL_STATE(17)] = 261,
  [SMALL_STATE(18)] = 272,
  [SMALL_STATE(19)] = 284,
  [SMALL_STATE(20)] = 296,
  [SMALL_STATE(21)] = 308,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 324,
  [SMALL_STATE(24)] = 330,
  [SMALL_STATE(25)] = 336,
  [SMALL_STATE(26)] = 342,
  [SMALL_STATE(27)] = 348,
  [SMALL_STATE(28)] = 354,
  [SMALL_STATE(29)] = 360,
  [SMALL_STATE(30)] = 366,
  [SMALL_STATE(31)] = 370,
  [SMALL_STATE(32)] = 374,
  [SMALL_STATE(33)] = 378,
  [SMALL_STATE(34)] = 382,
  [SMALL_STATE(35)] = 386,
  [SMALL_STATE(36)] = 390,
  [SMALL_STATE(37)] = 394,
  [SMALL_STATE(38)] = 398,
  [SMALL_STATE(39)] = 402,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(30),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(37),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_definition, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_type_definition, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_definition, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
