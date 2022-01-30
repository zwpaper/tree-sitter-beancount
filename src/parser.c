#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 51
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
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
  anon_sym_DQUOTE = 22,
  aux_sym_payee_token1 = 23,
  sym_amount = 24,
  sym_commodity = 25,
  sym_source_file = 26,
  sym__definition = 27,
  sym_entry_definition = 28,
  sym_open_definition = 29,
  sym_close_definition = 30,
  sym_commodity_definition = 31,
  sym_transaction_definition = 32,
  sym_note_definition = 33,
  sym_balance_definition = 34,
  sym_comment_definition = 35,
  sym_account = 36,
  sym_payee = 37,
  sym_narration = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_open_definition_repeat1 = 40,
  aux_sym_transaction_definition_repeat1 = 41,
  aux_sym_account_repeat1 = 42,
  aux_sym_payee_repeat1 = 43,
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
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_payee_token1] = "payee_token1",
  [sym_amount] = "amount",
  [sym_commodity] = "commodity",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_entry_definition] = "entry_definition",
  [sym_open_definition] = "open_definition",
  [sym_close_definition] = "close_definition",
  [sym_commodity_definition] = "commodity_definition",
  [sym_transaction_definition] = "transaction_definition",
  [sym_note_definition] = "note_definition",
  [sym_balance_definition] = "balance_definition",
  [sym_comment_definition] = "comment_definition",
  [sym_account] = "account",
  [sym_payee] = "payee",
  [sym_narration] = "narration",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_open_definition_repeat1] = "open_definition_repeat1",
  [aux_sym_transaction_definition_repeat1] = "transaction_definition_repeat1",
  [aux_sym_account_repeat1] = "account_repeat1",
  [aux_sym_payee_repeat1] = "payee_repeat1",
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
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_payee_token1] = aux_sym_payee_token1,
  [sym_amount] = sym_amount,
  [sym_commodity] = sym_commodity,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_entry_definition] = sym_entry_definition,
  [sym_open_definition] = sym_open_definition,
  [sym_close_definition] = sym_close_definition,
  [sym_commodity_definition] = sym_commodity_definition,
  [sym_transaction_definition] = sym_transaction_definition,
  [sym_note_definition] = sym_note_definition,
  [sym_balance_definition] = sym_balance_definition,
  [sym_comment_definition] = sym_comment_definition,
  [sym_account] = sym_account,
  [sym_payee] = sym_payee,
  [sym_narration] = sym_narration,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_open_definition_repeat1] = aux_sym_open_definition_repeat1,
  [aux_sym_transaction_definition_repeat1] = aux_sym_transaction_definition_repeat1,
  [aux_sym_account_repeat1] = aux_sym_account_repeat1,
  [aux_sym_payee_repeat1] = aux_sym_payee_repeat1,
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
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_payee_token1] = {
    .visible = false,
    .named = false,
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
  [sym_payee] = {
    .visible = true,
    .named = true,
  },
  [sym_narration] = {
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
      if (eof) ADVANCE(75);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '*') ADVANCE(80);
      if (lookahead == ',') ADVANCE(77);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(114);
      if (lookahead == 'S') ADVANCE(116);
      if (lookahead == 'b') ADVANCE(6);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(38);
      if (lookahead == 'o') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '1') ADVANCE(104);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == '1') ADVANCE(63);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(67);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'b') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(40);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(48);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(7);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(56);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(54);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(41);
      if (lookahead == 'o') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(8);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 31:
      if (lookahead == 'm') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(76);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 42:
      if (lookahead == 'p') ADVANCE(13);
      END_STATE();
    case 43:
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 44:
      if (lookahead == 'q') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(88);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(14);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'u') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == 'y') ADVANCE(79);
      END_STATE();
    case 60:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      END_STATE();
    case 61:
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(4);
      END_STATE();
    case 62:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(96);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(60);
      END_STATE();
    case 64:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(93);
      END_STATE();
    case 65:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 72:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(45);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == 'I') ADVANCE(34);
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(72)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 73:
      if (eof) ADVANCE(75);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '-') ADVANCE(71);
      if (lookahead == ':') ADVANCE(92);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == 'A') ADVANCE(121);
      if (lookahead == 'E') ADVANCE(120);
      if (lookahead == 'I') ADVANCE(119);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(73)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(74)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_open);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_close);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_commodity);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_note);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_balance);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_comment_definition_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(86);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_Assets);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_Liabilities);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_Equity);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_Income);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Expenses);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__account_component);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_STRICT);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_NONE);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_note);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_payee_token1);
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '0') ADVANCE(105);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_amount);
      if (lookahead == '-' ||
          lookahead == '/') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(103);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_amount);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(66);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'C') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'E') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'I') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'N') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'O') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'R') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'T') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'i') ADVANCE(7);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'n') ADVANCE(10);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 'q') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(43);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_commodity);
      if (lookahead == 's') ADVANCE(49);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_commodity);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(122);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 73},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 73},
  [5] = {.lex_state = 73},
  [6] = {.lex_state = 73},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 72},
  [15] = {.lex_state = 72},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 74},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 74},
  [43] = {.lex_state = 74},
  [44] = {.lex_state = 85},
  [45] = {.lex_state = 74},
  [46] = {.lex_state = 64},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 73},
  [49] = {.lex_state = 74},
  [50] = {.lex_state = 0},
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
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_amount] = ACTIONS(1),
    [sym_commodity] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym__definition] = STATE(18),
    [sym_entry_definition] = STATE(18),
    [sym_comment_definition] = STATE(18),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_SEMI] = ACTIONS(5),
    [sym_date] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(4), 1,
      aux_sym_account_repeat1,
    ACTIONS(13), 2,
      sym_amount,
      sym_commodity,
    ACTIONS(9), 9,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
      sym_note,
  [22] = 7,
    ACTIONS(15), 1,
      anon_sym_open,
    ACTIONS(17), 1,
      anon_sym_close,
    ACTIONS(19), 1,
      anon_sym_commodity,
    ACTIONS(23), 1,
      anon_sym_note,
    ACTIONS(25), 1,
      anon_sym_balance,
    ACTIONS(21), 2,
      anon_sym_STAR,
      anon_sym_BANG,
    STATE(29), 6,
      sym_open_definition,
      sym_close_definition,
      sym_commodity_definition,
      sym_transaction_definition,
      sym_note_definition,
      sym_balance_definition,
  [50] = 4,
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
  [72] = 4,
    ACTIONS(11), 1,
      anon_sym_COLON,
    STATE(2), 1,
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
  [94] = 2,
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
  [111] = 4,
    STATE(7), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
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
  [130] = 4,
    STATE(7), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(43), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(45), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [149] = 4,
    STATE(7), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(45), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [168] = 4,
    STATE(8), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(47), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(45), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [187] = 4,
    STATE(9), 1,
      aux_sym_transaction_definition_repeat1,
    STATE(13), 1,
      sym_account,
    ACTIONS(49), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
    ACTIONS(45), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [206] = 2,
    ACTIONS(53), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [220] = 2,
    ACTIONS(57), 1,
      sym_amount,
    ACTIONS(55), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [234] = 2,
    ACTIONS(61), 1,
      anon_sym_DQUOTE,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [248] = 1,
    ACTIONS(63), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [259] = 1,
    ACTIONS(51), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [270] = 1,
    ACTIONS(59), 8,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
      sym_date,
  [281] = 4,
    ACTIONS(5), 1,
      anon_sym_SEMI,
    ACTIONS(7), 1,
      sym_date,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    STATE(19), 4,
      sym__definition,
      sym_entry_definition,
      sym_comment_definition,
      aux_sym_source_file_repeat1,
  [297] = 4,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      sym_date,
    STATE(19), 4,
      sym__definition,
      sym_entry_definition,
      sym_comment_definition,
      aux_sym_source_file_repeat1,
  [313] = 2,
    STATE(47), 1,
      sym_account,
    ACTIONS(45), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [324] = 2,
    STATE(27), 1,
      sym_account,
    ACTIONS(45), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [335] = 2,
    STATE(32), 1,
      sym_account,
    ACTIONS(45), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [346] = 2,
    STATE(48), 1,
      sym_account,
    ACTIONS(45), 5,
      anon_sym_Assets,
      anon_sym_Liabilities,
      anon_sym_Equity,
      anon_sym_Income,
      anon_sym_Expenses,
  [357] = 3,
    ACTIONS(77), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [369] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [381] = 3,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(24), 1,
      aux_sym_open_definition_repeat1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [393] = 2,
    ACTIONS(88), 1,
      sym_commodity,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [402] = 1,
    ACTIONS(75), 4,
      ts_builtin_sym_end,
      anon_sym_COMMA,
      anon_sym_SEMI,
      sym_date,
  [409] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [415] = 3,
    ACTIONS(92), 1,
      anon_sym_DQUOTE,
    ACTIONS(94), 1,
      aux_sym_payee_token1,
    STATE(30), 1,
      aux_sym_payee_repeat1,
  [425] = 1,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [431] = 1,
    ACTIONS(99), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [437] = 1,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [443] = 1,
    ACTIONS(103), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [449] = 3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE,
    ACTIONS(107), 1,
      aux_sym_payee_token1,
    STATE(38), 1,
      aux_sym_payee_repeat1,
  [459] = 1,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_SEMI,
      sym_date,
  [465] = 3,
    ACTIONS(111), 1,
      anon_sym_DQUOTE,
    ACTIONS(113), 1,
      aux_sym_payee_token1,
    STATE(30), 1,
      aux_sym_payee_repeat1,
  [475] = 3,
    ACTIONS(113), 1,
      aux_sym_payee_token1,
    ACTIONS(115), 1,
      anon_sym_DQUOTE,
    STATE(30), 1,
      aux_sym_payee_repeat1,
  [485] = 3,
    ACTIONS(117), 1,
      anon_sym_DQUOTE,
    STATE(11), 1,
      sym_narration,
    STATE(41), 1,
      sym_payee,
  [495] = 3,
    ACTIONS(119), 1,
      anon_sym_DQUOTE,
    ACTIONS(121), 1,
      aux_sym_payee_token1,
    STATE(37), 1,
      aux_sym_payee_repeat1,
  [505] = 2,
    ACTIONS(123), 1,
      anon_sym_DQUOTE,
    STATE(10), 1,
      sym_narration,
  [512] = 1,
    ACTIONS(125), 1,
      sym_commodity,
  [516] = 1,
    ACTIONS(127), 1,
      sym_commodity,
  [520] = 1,
    ACTIONS(129), 1,
      aux_sym_comment_definition_token1,
  [524] = 1,
    ACTIONS(131), 1,
      sym_commodity,
  [528] = 1,
    ACTIONS(133), 1,
      sym__account_component,
  [532] = 1,
    ACTIONS(135), 1,
      sym_amount,
  [536] = 1,
    ACTIONS(137), 1,
      sym_note,
  [540] = 1,
    ACTIONS(139), 1,
      sym_commodity,
  [544] = 1,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 94,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 206,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 248,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 270,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 297,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 335,
  [SMALL_STATE(23)] = 346,
  [SMALL_STATE(24)] = 357,
  [SMALL_STATE(25)] = 369,
  [SMALL_STATE(26)] = 381,
  [SMALL_STATE(27)] = 393,
  [SMALL_STATE(28)] = 402,
  [SMALL_STATE(29)] = 409,
  [SMALL_STATE(30)] = 415,
  [SMALL_STATE(31)] = 425,
  [SMALL_STATE(32)] = 431,
  [SMALL_STATE(33)] = 437,
  [SMALL_STATE(34)] = 443,
  [SMALL_STATE(35)] = 449,
  [SMALL_STATE(36)] = 459,
  [SMALL_STATE(37)] = 465,
  [SMALL_STATE(38)] = 475,
  [SMALL_STATE(39)] = 485,
  [SMALL_STATE(40)] = 495,
  [SMALL_STATE(41)] = 505,
  [SMALL_STATE(42)] = 512,
  [SMALL_STATE(43)] = 516,
  [SMALL_STATE(44)] = 520,
  [SMALL_STATE(45)] = 524,
  [SMALL_STATE(46)] = 528,
  [SMALL_STATE(47)] = 532,
  [SMALL_STATE(48)] = 536,
  [SMALL_STATE(49)] = 540,
  [SMALL_STATE(50)] = 544,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_account_repeat1, 2), SHIFT_REPEAT(46),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_account_repeat1, 2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_account, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_account, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 2), SHIFT_REPEAT(5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 3),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_transaction_definition, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_narration, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_payee, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_transaction_definition_repeat1, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_open_definition_repeat1, 2), SHIFT_REPEAT(43),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_open_definition, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_entry_definition, 2),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_payee_repeat1, 2), SHIFT_REPEAT(30),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_commodity_definition, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_close_definition, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_definition, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment_definition, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_balance_definition, 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
