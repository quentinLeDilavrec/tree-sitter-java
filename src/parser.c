#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 4
#define STATE_COUNT 19
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_SEMI = 1,
  sym_decimal_integer_literal = 2,
  sym_hex_integer_literal = 3,
  sym_octal_integer_literal = 4,
  sym_binary_integer_literal = 5,
  sym_decimal_floating_point_literal = 6,
  sym_hex_floating_point_literal = 7,
  anon_sym_true = 8,
  anon_sym_false = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH = 11,
  aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH = 12,
  aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH = 13,
  sym_string_literal = 14,
  sym_null_literal = 15,
  sym_comment = 16,
  sym_program = 17,
  sym__statement = 18,
  sym__literal = 19,
  sym_integer_literal = 20,
  sym_floating_point_literal = 21,
  sym_boolean_literal = 22,
  sym_character_literal = 23,
  aux_sym_program_repeat1 = 24,
  aux_sym_character_literal_repeat1 = 25,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_SEMI] = ";",
  [sym_decimal_integer_literal] = "decimal_integer_literal",
  [sym_hex_integer_literal] = "hex_integer_literal",
  [sym_octal_integer_literal] = "octal_integer_literal",
  [sym_binary_integer_literal] = "binary_integer_literal",
  [sym_decimal_floating_point_literal] = "decimal_floating_point_literal",
  [sym_hex_floating_point_literal] = "hex_floating_point_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = "/[^\\'\\n]/",
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = "/\\\\./",
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = "/\\\\\\n/",
  [sym_string_literal] = "string_literal",
  [sym_null_literal] = "null_literal",
  [sym_comment] = "comment",
  [sym_program] = "program",
  [sym__statement] = "_statement",
  [sym__literal] = "_literal",
  [sym_integer_literal] = "integer_literal",
  [sym_floating_point_literal] = "floating_point_literal",
  [sym_boolean_literal] = "boolean_literal",
  [sym_character_literal] = "character_literal",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_character_literal_repeat1] = "character_literal_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_decimal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_decimal_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_character_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(19);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '\\')
        ADVANCE(45);
      if (lookahead == 'f')
        ADVANCE(48);
      if (lookahead == 'n')
        ADVANCE(53);
      if (lookahead == 't')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      if (lookahead == '\"')
        ADVANCE(3);
      if (lookahead == '\\')
        ADVANCE(4);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(2);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    case 4:
      if (lookahead == '\n')
        ADVANCE(2);
      if (lookahead != 0)
        ADVANCE(2);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(8);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '_')
        ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '+')
        ADVANCE(10);
      if (lookahead == '-')
        ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(12);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '_')
        ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(11);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      END_STATE();
    case 14:
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == '*')
        ADVANCE(16);
      if (lookahead == '/')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(15);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n')
        ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == 'B')
        ADVANCE(21);
      if (lookahead == 'O')
        ADVANCE(23);
      if (lookahead == 'X')
        ADVANCE(25);
      if (lookahead == '_')
        ADVANCE(42);
      if (lookahead == 'b')
        ADVANCE(21);
      if (lookahead == 'o')
        ADVANCE(23);
      if (lookahead == 'x')
        ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_decimal_floating_point_literal);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(7);
      END_STATE();
    case 21:
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_binary_integer_literal);
      if (lookahead == '_')
        ADVANCE(21);
      if (lookahead == '0' ||
          lookahead == '1')
        ADVANCE(22);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_octal_integer_literal);
      if (lookahead == '_')
        ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '7'))
        ADVANCE(24);
      END_STATE();
    case 25:
      if (lookahead == '.')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      END_STATE();
    case 27:
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      END_STATE();
    case 28:
      if (lookahead == '+')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(31);
      if (lookahead == 'D' ||
          lookahead == 'F' ||
          lookahead == 'd' ||
          lookahead == 'f')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 31:
      if (lookahead == '_')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(30);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(28);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(35);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '_')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_hex_floating_point_literal);
      if (lookahead == '_')
        ADVANCE(26);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(27);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '+')
        ADVANCE(29);
      if (lookahead == '-')
        ADVANCE(29);
      if (lookahead == '.')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_hex_integer_literal);
      if (lookahead == '.')
        ADVANCE(37);
      if (lookahead == '_')
        ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(39);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      if (('A' <= lookahead && lookahead <= 'C') ||
          ('a' <= lookahead && lookahead <= 'c'))
        ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == '_')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f'))
        ADVANCE(36);
      END_STATE();
    case 42:
      if (lookahead == '_')
        ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_decimal_integer_literal);
      if (lookahead == '.')
        ADVANCE(20);
      if (lookahead == '_')
        ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(9);
      if (('D' <= lookahead && lookahead <= 'F') ||
          ('d' <= lookahead && lookahead <= 'f'))
        ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 45:
      if (lookahead == '\n')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH);
      END_STATE();
    case 48:
      if (lookahead == 'a')
        ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == 'l')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 's')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'e')
        ADVANCE(52);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 53:
      if (lookahead == 'u')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'l')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'l')
        ADVANCE(56);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 57:
      if (lookahead == 'r')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'u')
        ADVANCE(59);
      END_STATE();
    case 59:
      if (lookahead == 'e')
        ADVANCE(60);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 61:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '.')
        ADVANCE(6);
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == '0')
        ADVANCE(19);
      if (lookahead == 'f')
        ADVANCE(48);
      if (lookahead == 'n')
        ADVANCE(53);
      if (lookahead == 't')
        ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(61);
      if (('1' <= lookahead && lookahead <= '9'))
        ADVANCE(43);
      END_STATE();
    case 62:
      if (lookahead == '/')
        ADVANCE(14);
      if (lookahead == ';')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(62);
      END_STATE();
    case 63:
      if (lookahead == '\n')
        SKIP(63);
      if (lookahead == '\'')
        ADVANCE(5);
      if (lookahead == '/')
        ADVANCE(64);
      if (lookahead == '\\')
        ADVANCE(65);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(66);
      if (lookahead != 0)
        ADVANCE(66);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '*')
        ADVANCE(15);
      if (lookahead == '/')
        ADVANCE(18);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      if (lookahead == '\n')
        ADVANCE(46);
      if (lookahead != 0)
        ADVANCE(47);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 61},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 63},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 61},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 63},
  [13] = {.lex_state = 63},
  [14] = {.lex_state = 61},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 63},
  [18] = {.lex_state = 61},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [sym_decimal_integer_literal] = ACTIONS(3),
    [sym_hex_integer_literal] = ACTIONS(3),
    [sym_octal_integer_literal] = ACTIONS(3),
    [sym_binary_integer_literal] = ACTIONS(3),
    [sym_decimal_floating_point_literal] = ACTIONS(3),
    [sym_hex_floating_point_literal] = ACTIONS(5),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [sym_comment] = ACTIONS(7),
  },
  [1] = {
    [sym_program] = STATE(7),
    [sym__statement] = STATE(8),
    [sym__literal] = STATE(9),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [aux_sym_program_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(10),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [2] = {
    [anon_sym_SEMI] = ACTIONS(26),
    [sym_comment] = ACTIONS(24),
  },
  [3] = {
    [anon_sym_SEMI] = ACTIONS(28),
    [sym_comment] = ACTIONS(24),
  },
  [4] = {
    [anon_sym_SEMI] = ACTIONS(30),
    [sym_comment] = ACTIONS(24),
  },
  [5] = {
    [aux_sym_character_literal_repeat1] = STATE(13),
    [anon_sym_SQUOTE] = ACTIONS(32),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(34),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(34),
    [sym_comment] = ACTIONS(36),
  },
  [6] = {
    [anon_sym_SEMI] = ACTIONS(38),
    [sym_comment] = ACTIONS(24),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(40),
    [sym_comment] = ACTIONS(24),
  },
  [8] = {
    [anon_sym_SEMI] = ACTIONS(42),
    [sym_comment] = ACTIONS(24),
  },
  [9] = {
    [anon_sym_SEMI] = ACTIONS(44),
    [sym_comment] = ACTIONS(24),
  },
  [10] = {
    [sym__statement] = STATE(15),
    [sym__literal] = STATE(9),
    [sym_integer_literal] = STATE(6),
    [sym_floating_point_literal] = STATE(6),
    [sym_boolean_literal] = STATE(6),
    [sym_character_literal] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(46),
    [sym_decimal_integer_literal] = ACTIONS(12),
    [sym_hex_integer_literal] = ACTIONS(12),
    [sym_octal_integer_literal] = ACTIONS(12),
    [sym_binary_integer_literal] = ACTIONS(12),
    [sym_decimal_floating_point_literal] = ACTIONS(14),
    [sym_hex_floating_point_literal] = ACTIONS(16),
    [anon_sym_true] = ACTIONS(18),
    [anon_sym_false] = ACTIONS(18),
    [anon_sym_SQUOTE] = ACTIONS(20),
    [sym_string_literal] = ACTIONS(22),
    [sym_null_literal] = ACTIONS(22),
    [sym_comment] = ACTIONS(24),
  },
  [11] = {
    [anon_sym_SEMI] = ACTIONS(48),
    [sym_comment] = ACTIONS(24),
  },
  [12] = {
    [anon_sym_SQUOTE] = ACTIONS(50),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(50),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(50),
    [sym_comment] = ACTIONS(36),
  },
  [13] = {
    [anon_sym_SQUOTE] = ACTIONS(52),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(54),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(54),
    [sym_comment] = ACTIONS(36),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(56),
    [sym_decimal_integer_literal] = ACTIONS(58),
    [sym_hex_integer_literal] = ACTIONS(58),
    [sym_octal_integer_literal] = ACTIONS(58),
    [sym_binary_integer_literal] = ACTIONS(58),
    [sym_decimal_floating_point_literal] = ACTIONS(58),
    [sym_hex_floating_point_literal] = ACTIONS(60),
    [anon_sym_true] = ACTIONS(56),
    [anon_sym_false] = ACTIONS(56),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [sym_string_literal] = ACTIONS(56),
    [sym_null_literal] = ACTIONS(56),
    [sym_comment] = ACTIONS(24),
  },
  [15] = {
    [anon_sym_SEMI] = ACTIONS(62),
    [sym_comment] = ACTIONS(24),
  },
  [16] = {
    [anon_sym_SEMI] = ACTIONS(64),
    [sym_comment] = ACTIONS(24),
  },
  [17] = {
    [anon_sym_SQUOTE] = ACTIONS(66),
    [aux_sym_SLASH_LBRACK_CARET_BSLASH_SQUOTE_BSLASHn_RBRACK_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_BSLASH_BSLASH_DOT_SLASH] = ACTIONS(66),
    [aux_sym_SLASH_BSLASH_BSLASH_BSLASHn_SLASH] = ACTIONS(66),
    [sym_comment] = ACTIONS(36),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_decimal_integer_literal] = ACTIONS(70),
    [sym_hex_integer_literal] = ACTIONS(70),
    [sym_octal_integer_literal] = ACTIONS(70),
    [sym_binary_integer_literal] = ACTIONS(70),
    [sym_decimal_floating_point_literal] = ACTIONS(70),
    [sym_hex_floating_point_literal] = ACTIONS(72),
    [anon_sym_true] = ACTIONS(68),
    [anon_sym_false] = ACTIONS(68),
    [anon_sym_SQUOTE] = ACTIONS(68),
    [sym_string_literal] = ACTIONS(68),
    [sym_null_literal] = ACTIONS(68),
    [sym_comment] = ACTIONS(24),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false, .depends_on_lookahead = false},
  [1] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, RECOVER(),
  [5] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, RECOVER(),
  [7] = {.count = 2, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(), RECOVER(),
  [10] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 0),
  [12] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(2),
  [14] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT(3),
  [16] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(3),
  [18] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(4),
  [20] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(5),
  [22] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(6),
  [24] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, SHIFT_EXTRA(),
  [26] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_integer_literal, 1),
  [28] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_floating_point_literal, 1),
  [30] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_boolean_literal, 1),
  [32] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(11),
  [34] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(12),
  [36] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT_EXTRA(),
  [38] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__literal, 1),
  [40] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, ACCEPT_INPUT(),
  [42] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(14),
  [44] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym__statement, 1),
  [46] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_program, 1),
  [48] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 2),
  [50] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 1),
  [52] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(16),
  [54] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, SHIFT(17),
  [56] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [58] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 2),
  [60] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 2),
  [62] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, SHIFT(18),
  [64] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(sym_character_literal, 3),
  [66] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_character_literal_repeat1, 2),
  [68] = {.count = 1, .reusable = true, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
  [70] = {.count = 1, .reusable = true, .depends_on_lookahead = true}, REDUCE(aux_sym_program_repeat1, 3),
  [72] = {.count = 1, .reusable = false, .depends_on_lookahead = false}, REDUCE(aux_sym_program_repeat1, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_java() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}