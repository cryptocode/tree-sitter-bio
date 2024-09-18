#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 57
#define LARGE_STATE_COUNT 27
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 52
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_and = 2,
  anon_sym_catch = 3,
  anon_sym_cond = 4,
  anon_sym_condition_DASHcase = 5,
  anon_sym_fun = 6,
  anon_sym_if = 7,
  anon_sym_interactive = 8,
  anon_sym_lambda = 9,
  anon_sym_let = 10,
  anon_sym_let_STAR = 11,
  anon_sym_macro = 12,
  anon_sym_or = 13,
  anon_sym_prog1 = 14,
  anon_sym_prog2 = 15,
  anon_sym_progn = 16,
  anon_sym_quote = 17,
  anon_sym_save_DASHcurrent_DASHbuffer = 18,
  anon_sym_save_DASHexcursion = 19,
  anon_sym_save_DASHrestriction = 20,
  anon_sym_set_BANG = 21,
  anon_sym_type = 22,
  anon_sym_unwind_DASHprotect = 23,
  anon_sym_var = 24,
  anon_sym_while = 25,
  anon_sym_RPAREN = 26,
  anon_sym_defun = 27,
  anon_sym_defsubst = 28,
  anon_sym_defmacro = 29,
  aux_sym_float_token1 = 30,
  aux_sym_float_token2 = 31,
  aux_sym_float_token3 = 32,
  aux_sym_float_token4 = 33,
  aux_sym_float_token5 = 34,
  aux_sym_integer_token1 = 35,
  aux_sym_char_token1 = 36,
  aux_sym_char_token2 = 37,
  aux_sym_char_token3 = 38,
  aux_sym_char_token4 = 39,
  aux_sym_char_token5 = 40,
  aux_sym_char_token6 = 41,
  sym_string = 42,
  anon_sym_nil = 43,
  anon_sym_POUNDt = 44,
  anon_sym_POUNDf = 45,
  aux_sym_symbol_token1 = 46,
  anon_sym_SQUOTE = 47,
  anon_sym_BQUOTE = 48,
  anon_sym_COMMA_AT = 49,
  anon_sym_COMMA = 50,
  sym_comment = 51,
  sym_source_file = 52,
  sym__sexp = 53,
  sym_special_form = 54,
  sym_function_definition = 55,
  sym_macro_definition = 56,
  sym__atom = 57,
  sym_float = 58,
  sym_integer = 59,
  sym_char = 60,
  sym_symbol = 61,
  sym_quote = 62,
  sym_unquote_splice = 63,
  sym_unquote = 64,
  sym_list = 65,
  aux_sym_source_file_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_and] = "and",
  [anon_sym_catch] = "catch",
  [anon_sym_cond] = "cond",
  [anon_sym_condition_DASHcase] = "condition-case",
  [anon_sym_fun] = "fun",
  [anon_sym_if] = "if",
  [anon_sym_interactive] = "interactive",
  [anon_sym_lambda] = "lambda",
  [anon_sym_let] = "let",
  [anon_sym_let_STAR] = "let*",
  [anon_sym_macro] = "macro",
  [anon_sym_or] = "or",
  [anon_sym_prog1] = "prog1",
  [anon_sym_prog2] = "prog2",
  [anon_sym_progn] = "progn",
  [anon_sym_quote] = "quote",
  [anon_sym_save_DASHcurrent_DASHbuffer] = "save-current-buffer",
  [anon_sym_save_DASHexcursion] = "save-excursion",
  [anon_sym_save_DASHrestriction] = "save-restriction",
  [anon_sym_set_BANG] = "set!",
  [anon_sym_type] = "type",
  [anon_sym_unwind_DASHprotect] = "unwind-protect",
  [anon_sym_var] = "var",
  [anon_sym_while] = "while",
  [anon_sym_RPAREN] = ")",
  [anon_sym_defun] = "defun",
  [anon_sym_defsubst] = "defsubst",
  [anon_sym_defmacro] = "defmacro",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [aux_sym_float_token3] = "float_token3",
  [aux_sym_float_token4] = "float_token4",
  [aux_sym_float_token5] = "float_token5",
  [aux_sym_integer_token1] = "integer_token1",
  [aux_sym_char_token1] = "char_token1",
  [aux_sym_char_token2] = "char_token2",
  [aux_sym_char_token3] = "char_token3",
  [aux_sym_char_token4] = "char_token4",
  [aux_sym_char_token5] = "char_token5",
  [aux_sym_char_token6] = "char_token6",
  [sym_string] = "string",
  [anon_sym_nil] = "nil",
  [anon_sym_POUNDt] = "#t",
  [anon_sym_POUNDf] = "#f",
  [aux_sym_symbol_token1] = "symbol_token1",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_COMMA_AT] = ",@",
  [anon_sym_COMMA] = ",",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__sexp] = "_sexp",
  [sym_special_form] = "special_form",
  [sym_function_definition] = "function_definition",
  [sym_macro_definition] = "macro_definition",
  [sym__atom] = "_atom",
  [sym_float] = "float",
  [sym_integer] = "integer",
  [sym_char] = "char",
  [sym_symbol] = "symbol",
  [sym_quote] = "quote",
  [sym_unquote_splice] = "unquote_splice",
  [sym_unquote] = "unquote",
  [sym_list] = "list",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_catch] = anon_sym_catch,
  [anon_sym_cond] = anon_sym_cond,
  [anon_sym_condition_DASHcase] = anon_sym_condition_DASHcase,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_interactive] = anon_sym_interactive,
  [anon_sym_lambda] = anon_sym_lambda,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_let_STAR] = anon_sym_let_STAR,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_prog1] = anon_sym_prog1,
  [anon_sym_prog2] = anon_sym_prog2,
  [anon_sym_progn] = anon_sym_progn,
  [anon_sym_quote] = anon_sym_quote,
  [anon_sym_save_DASHcurrent_DASHbuffer] = anon_sym_save_DASHcurrent_DASHbuffer,
  [anon_sym_save_DASHexcursion] = anon_sym_save_DASHexcursion,
  [anon_sym_save_DASHrestriction] = anon_sym_save_DASHrestriction,
  [anon_sym_set_BANG] = anon_sym_set_BANG,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_unwind_DASHprotect] = anon_sym_unwind_DASHprotect,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_defun] = anon_sym_defun,
  [anon_sym_defsubst] = anon_sym_defsubst,
  [anon_sym_defmacro] = anon_sym_defmacro,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [aux_sym_float_token4] = aux_sym_float_token4,
  [aux_sym_float_token5] = aux_sym_float_token5,
  [aux_sym_integer_token1] = aux_sym_integer_token1,
  [aux_sym_char_token1] = aux_sym_char_token1,
  [aux_sym_char_token2] = aux_sym_char_token2,
  [aux_sym_char_token3] = aux_sym_char_token3,
  [aux_sym_char_token4] = aux_sym_char_token4,
  [aux_sym_char_token5] = aux_sym_char_token5,
  [aux_sym_char_token6] = aux_sym_char_token6,
  [sym_string] = sym_string,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_POUNDt] = anon_sym_POUNDt,
  [anon_sym_POUNDf] = anon_sym_POUNDf,
  [aux_sym_symbol_token1] = aux_sym_symbol_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_COMMA_AT] = anon_sym_COMMA_AT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__sexp] = sym__sexp,
  [sym_special_form] = sym_special_form,
  [sym_function_definition] = sym_function_definition,
  [sym_macro_definition] = sym_macro_definition,
  [sym__atom] = sym__atom,
  [sym_float] = sym_float,
  [sym_integer] = sym_integer,
  [sym_char] = sym_char,
  [sym_symbol] = sym_symbol,
  [sym_quote] = sym_quote,
  [sym_unquote_splice] = sym_unquote_splice,
  [sym_unquote] = sym_unquote,
  [sym_list] = sym_list,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_catch] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cond] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_condition_DASHcase] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interactive] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lambda] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prog1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_prog2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_progn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_quote] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHcurrent_DASHbuffer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHexcursion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_save_DASHrestriction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unwind_DASHprotect] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defsubst] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_defmacro] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_integer_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_char_token6] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDf] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__sexp] = {
    .visible = false,
    .named = true,
  },
  [sym_special_form] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_macro_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__atom] = {
    .visible = false,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_char] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote_splice] = {
    .visible = true,
    .named = true,
  },
  [sym_unquote] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_docstring = 1,
  field_name = 2,
  field_parameters = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_docstring] = "docstring",
  [field_name] = "name",
  [field_parameters] = "parameters",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 2},
  [1] =
    {field_docstring, 3},
    {field_name, 2},
  [3] =
    {field_name, 2},
    {field_parameters, 3},
  [5] =
    {field_docstring, 4},
    {field_name, 2},
    {field_parameters, 3},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      ADVANCE_MAP(
        '"', 2,
        '#', 152,
        '\'', 251,
        '(', 22,
        ')', 47,
        '+', 103,
        ',', 254,
        '-', 102,
        '.', 234,
        '0', 62,
        '1', 68,
        ';', 255,
        '?', 248,
        '\\', 18,
        '`', 252,
        'a', 172,
        'c', 114,
        'd', 140,
        'f', 224,
        'i', 153,
        'l', 115,
        'm', 116,
        'n', 160,
        'o', 192,
        'p', 193,
        'q', 222,
        's', 117,
        't', 231,
        'u', 173,
        'v', 119,
        'w', 159,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == '}') ADVANCE(81);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(87);
      if (lookahead == '\\') ADVANCE(19);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '+') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == '+') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(232);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(16);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(17);
      END_STATE();
    case 9:
      if (lookahead == 'F') ADVANCE(58);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(12);
      END_STATE();
    case 11:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(60);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(80);
      if (lookahead != 0) ADVANCE(15);
      END_STATE();
    case 16:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(3);
      END_STATE();
    case 17:
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(4);
      END_STATE();
    case 18:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(247);
      END_STATE();
    case 19:
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      ADVANCE_MAP(
        '"', 2,
        '#', 152,
        '\'', 251,
        '(', 22,
        ')', 47,
        '+', 103,
        ',', 254,
        '-', 102,
        '.', 234,
        '0', 62,
        '1', 68,
        ';', 255,
        '?', 248,
        '\\', 18,
        '`', 252,
        'd', 140,
        'n', 160,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(20);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0) ADVANCE(247);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_and);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_catch);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_cond);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(214);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_condition_DASHcase);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_fun);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_if);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_interactive);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_lambda);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_let);
      if (lookahead == '*') ADVANCE(32);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || '*' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_let_STAR);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_macro);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_or);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_prog1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_prog2);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_progn);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_quote);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_save_DASHcurrent_DASHbuffer);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_save_DASHexcursion);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_save_DASHrestriction);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_set_BANG);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_type);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_unwind_DASHprotect);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_var);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_while);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_defun);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_defsubst);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_defmacro);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_float_token4);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_float_token5);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_float_token5);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '\\') ADVANCE(5);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '`') ADVANCE(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(104);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '0') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(7);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '`') ADVANCE(8);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(106);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '\\') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_integer_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_char_token1);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == 'N') ADVANCE(74);
      if (lookahead == 'U') ADVANCE(76);
      if (lookahead == 'u') ADVANCE(78);
      if (lookahead == 'x') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == '{') ADVANCE(249);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(85);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_char_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_char_token2);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_char_token2);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_char_token3);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_char_token4);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_char_token5);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_char_token6);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_char_token6);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_POUNDt);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_POUNDf);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          (lookahead < ' ' || '"' < lookahead) &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '+') ADVANCE(110);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != '+' &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '-') ADVANCE(128);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '-') ADVANCE(191);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '-') ADVANCE(126);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '-') ADVANCE(130);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != '-' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '0') ADVANCE(62);
      if (lookahead == '1') ADVANCE(68);
      if (lookahead == '\\') ADVANCE(18);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '.') ADVANCE(234);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(232);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(54);
      if (lookahead == '\\') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(233);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(18);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '1') ADVANCE(35);
      if (lookahead == '2') ADVANCE(36);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'F') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'I') ADVANCE(111);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N') ADVANCE(109);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(213);
      if (lookahead == 'o') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(170);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(129);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(227);
      if (lookahead == 'e') ADVANCE(209);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(194);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(132);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(112);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(206);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(131);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`' &&
          lookahead != 'a') ADVANCE(247);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(204);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'b') ADVANCE(221);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(158);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'r') ADVANCE(150);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(197);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(122);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(199);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(211);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(226);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'c') ADVANCE(220);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(23);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(99);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(154);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(98);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(43);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(46);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(195);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(205);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == 't') ADVANCE(89);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == 'n') ADVANCE(212);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(171);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(156);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'g') ADVANCE(108);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'h') ADVANCE(161);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(168);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(185);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(228);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(135);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(187);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(180);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(188);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(88);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'l') ADVANCE(144);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(125);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'm') ADVANCE(123);
      if (lookahead == 's') ADVANCE(223);
      if (lookahead == 'u') ADVANCE(175);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(229);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(27);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(40);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(41);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(137);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(101);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(138);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(216);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(157);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(33);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(179);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(217);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(176);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(177);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(142);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'p') ADVANCE(203);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(207);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(183);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(164);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(184);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(148);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(200);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(120);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(189);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 's') ADVANCE(210);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 's') ADVANCE(219);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 's') ADVANCE(146);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 's') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(91);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(44);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(147);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(127);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(162);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(100);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(143);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(151);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(198);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 't') ADVANCE(167);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(186);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(124);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(174);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(201);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(141);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'v') ADVANCE(145);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'w') ADVANCE(166);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'x') ADVANCE(134);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'y') ADVANCE(190);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(94);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          (lookahead < '`' || 'f' < lookahead)) ADVANCE(247);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(18);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ',' &&
          lookahead != ';' &&
          lookahead != '`') ADVANCE(247);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(73);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '`') ADVANCE(72);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(79);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '}') ADVANCE(247);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '`') ADVANCE(15);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_symbol_token1);
      if (lookahead == '\\') ADVANCE(1);
      if (lookahead == '}') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"' ||
          ('\'' <= lookahead && lookahead <= ')') ||
          lookahead == ',' ||
          lookahead == ';' ||
          lookahead == '`') ADVANCE(15);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_COMMA_AT);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead == '@') ADVANCE(253);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(255);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 20},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 20},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 20},
  [10] = {.lex_state = 20},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 20},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 20},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 20},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 20},
  [29] = {.lex_state = 20},
  [30] = {.lex_state = 20},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 20},
  [37] = {.lex_state = 20},
  [38] = {.lex_state = 20},
  [39] = {.lex_state = 20},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 20},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 20},
  [46] = {.lex_state = 20},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 20},
  [50] = {.lex_state = 20},
  [51] = {.lex_state = 20},
  [52] = {.lex_state = 20},
  [53] = {.lex_state = 20},
  [54] = {.lex_state = 20},
  [55] = {.lex_state = 20},
  [56] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_catch] = ACTIONS(1),
    [anon_sym_cond] = ACTIONS(1),
    [anon_sym_condition_DASHcase] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_interactive] = ACTIONS(1),
    [anon_sym_lambda] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_let_STAR] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_prog1] = ACTIONS(1),
    [anon_sym_prog2] = ACTIONS(1),
    [anon_sym_progn] = ACTIONS(1),
    [anon_sym_quote] = ACTIONS(1),
    [anon_sym_save_DASHcurrent_DASHbuffer] = ACTIONS(1),
    [anon_sym_save_DASHexcursion] = ACTIONS(1),
    [anon_sym_save_DASHrestriction] = ACTIONS(1),
    [anon_sym_set_BANG] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_unwind_DASHprotect] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_defun] = ACTIONS(1),
    [anon_sym_defsubst] = ACTIONS(1),
    [anon_sym_defmacro] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [aux_sym_float_token4] = ACTIONS(1),
    [aux_sym_float_token5] = ACTIONS(1),
    [aux_sym_integer_token1] = ACTIONS(1),
    [aux_sym_char_token1] = ACTIONS(1),
    [aux_sym_char_token2] = ACTIONS(1),
    [aux_sym_char_token3] = ACTIONS(1),
    [aux_sym_char_token4] = ACTIONS(1),
    [aux_sym_char_token5] = ACTIONS(1),
    [aux_sym_char_token6] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_POUNDt] = ACTIONS(1),
    [anon_sym_POUNDf] = ACTIONS(1),
    [aux_sym_symbol_token1] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_COMMA_AT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym__sexp] = STATE(11),
    [sym_special_form] = STATE(11),
    [sym_function_definition] = STATE(11),
    [sym_macro_definition] = STATE(11),
    [sym__atom] = STATE(11),
    [sym_float] = STATE(11),
    [sym_integer] = STATE(11),
    [sym_char] = STATE(11),
    [sym_symbol] = STATE(11),
    [sym_quote] = STATE(11),
    [sym_unquote_splice] = STATE(11),
    [sym_unquote] = STATE(11),
    [sym_list] = STATE(11),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__sexp] = STATE(16),
    [sym_special_form] = STATE(16),
    [sym_function_definition] = STATE(16),
    [sym_macro_definition] = STATE(16),
    [sym__atom] = STATE(16),
    [sym_float] = STATE(16),
    [sym_integer] = STATE(16),
    [sym_char] = STATE(16),
    [sym_symbol] = STATE(16),
    [sym_quote] = STATE(16),
    [sym_unquote_splice] = STATE(16),
    [sym_unquote] = STATE(16),
    [sym_list] = STATE(16),
    [aux_sym_source_file_repeat1] = STATE(16),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_and] = ACTIONS(25),
    [anon_sym_catch] = ACTIONS(25),
    [anon_sym_cond] = ACTIONS(25),
    [anon_sym_condition_DASHcase] = ACTIONS(25),
    [anon_sym_fun] = ACTIONS(25),
    [anon_sym_if] = ACTIONS(25),
    [anon_sym_interactive] = ACTIONS(25),
    [anon_sym_lambda] = ACTIONS(25),
    [anon_sym_let] = ACTIONS(25),
    [anon_sym_let_STAR] = ACTIONS(25),
    [anon_sym_macro] = ACTIONS(25),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_prog1] = ACTIONS(25),
    [anon_sym_prog2] = ACTIONS(25),
    [anon_sym_progn] = ACTIONS(25),
    [anon_sym_quote] = ACTIONS(25),
    [anon_sym_save_DASHcurrent_DASHbuffer] = ACTIONS(25),
    [anon_sym_save_DASHexcursion] = ACTIONS(25),
    [anon_sym_save_DASHrestriction] = ACTIONS(25),
    [anon_sym_set_BANG] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(25),
    [anon_sym_unwind_DASHprotect] = ACTIONS(25),
    [anon_sym_var] = ACTIONS(25),
    [anon_sym_while] = ACTIONS(25),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_defun] = ACTIONS(29),
    [anon_sym_defsubst] = ACTIONS(29),
    [anon_sym_defmacro] = ACTIONS(31),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(33),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(35),
    [anon_sym_LPAREN] = ACTIONS(37),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_defun] = ACTIONS(40),
    [anon_sym_defsubst] = ACTIONS(40),
    [anon_sym_defmacro] = ACTIONS(40),
    [aux_sym_float_token1] = ACTIONS(43),
    [aux_sym_float_token2] = ACTIONS(43),
    [aux_sym_float_token3] = ACTIONS(43),
    [aux_sym_float_token4] = ACTIONS(43),
    [aux_sym_float_token5] = ACTIONS(43),
    [aux_sym_integer_token1] = ACTIONS(46),
    [aux_sym_char_token1] = ACTIONS(49),
    [aux_sym_char_token2] = ACTIONS(49),
    [aux_sym_char_token3] = ACTIONS(49),
    [aux_sym_char_token4] = ACTIONS(49),
    [aux_sym_char_token5] = ACTIONS(49),
    [aux_sym_char_token6] = ACTIONS(49),
    [sym_string] = ACTIONS(52),
    [anon_sym_nil] = ACTIONS(40),
    [anon_sym_POUNDt] = ACTIONS(40),
    [anon_sym_POUNDf] = ACTIONS(40),
    [aux_sym_symbol_token1] = ACTIONS(40),
    [anon_sym_SQUOTE] = ACTIONS(55),
    [anon_sym_BQUOTE] = ACTIONS(55),
    [anon_sym_COMMA_AT] = ACTIONS(58),
    [anon_sym_COMMA] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__sexp] = STATE(22),
    [sym_special_form] = STATE(22),
    [sym_function_definition] = STATE(22),
    [sym_macro_definition] = STATE(22),
    [sym__atom] = STATE(22),
    [sym_float] = STATE(22),
    [sym_integer] = STATE(22),
    [sym_char] = STATE(22),
    [sym_symbol] = STATE(22),
    [sym_quote] = STATE(22),
    [sym_unquote_splice] = STATE(22),
    [sym_unquote] = STATE(22),
    [sym_list] = STATE(22),
    [aux_sym_source_file_repeat1] = STATE(22),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(64),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(66),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__sexp] = STATE(20),
    [sym_special_form] = STATE(20),
    [sym_function_definition] = STATE(20),
    [sym_macro_definition] = STATE(20),
    [sym__atom] = STATE(20),
    [sym_float] = STATE(20),
    [sym_integer] = STATE(20),
    [sym_char] = STATE(20),
    [sym_symbol] = STATE(20),
    [sym_quote] = STATE(20),
    [sym_unquote_splice] = STATE(20),
    [sym_unquote] = STATE(20),
    [sym_list] = STATE(20),
    [aux_sym_source_file_repeat1] = STATE(20),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(68),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(70),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__sexp] = STATE(14),
    [sym_special_form] = STATE(14),
    [sym_function_definition] = STATE(14),
    [sym_macro_definition] = STATE(14),
    [sym__atom] = STATE(14),
    [sym_float] = STATE(14),
    [sym_integer] = STATE(14),
    [sym_char] = STATE(14),
    [sym_symbol] = STATE(14),
    [sym_quote] = STATE(14),
    [sym_unquote_splice] = STATE(14),
    [sym_unquote] = STATE(14),
    [sym_list] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(72),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(74),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__sexp] = STATE(13),
    [sym_special_form] = STATE(13),
    [sym_function_definition] = STATE(13),
    [sym_macro_definition] = STATE(13),
    [sym__atom] = STATE(13),
    [sym_float] = STATE(13),
    [sym_integer] = STATE(13),
    [sym_char] = STATE(13),
    [sym_symbol] = STATE(13),
    [sym_quote] = STATE(13),
    [sym_unquote_splice] = STATE(13),
    [sym_unquote] = STATE(13),
    [sym_list] = STATE(13),
    [aux_sym_source_file_repeat1] = STATE(13),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(78),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__sexp] = STATE(19),
    [sym_special_form] = STATE(19),
    [sym_function_definition] = STATE(19),
    [sym_macro_definition] = STATE(19),
    [sym__atom] = STATE(19),
    [sym_float] = STATE(19),
    [sym_integer] = STATE(19),
    [sym_char] = STATE(19),
    [sym_symbol] = STATE(19),
    [sym_quote] = STATE(19),
    [sym_unquote_splice] = STATE(19),
    [sym_unquote] = STATE(19),
    [sym_list] = STATE(19),
    [aux_sym_source_file_repeat1] = STATE(18),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(86),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [12] = {
    [sym__sexp] = STATE(17),
    [sym_special_form] = STATE(17),
    [sym_function_definition] = STATE(17),
    [sym_macro_definition] = STATE(17),
    [sym__atom] = STATE(17),
    [sym_float] = STATE(17),
    [sym_integer] = STATE(17),
    [sym_char] = STATE(17),
    [sym_symbol] = STATE(17),
    [sym_quote] = STATE(17),
    [sym_unquote_splice] = STATE(17),
    [sym_unquote] = STATE(17),
    [sym_list] = STATE(17),
    [aux_sym_source_file_repeat1] = STATE(17),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(94),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [13] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [14] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(98),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [15] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [16] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(102),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [17] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [18] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(106),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [19] = {
    [sym__sexp] = STATE(15),
    [sym_special_form] = STATE(15),
    [sym_function_definition] = STATE(15),
    [sym_macro_definition] = STATE(15),
    [sym__atom] = STATE(15),
    [sym_float] = STATE(15),
    [sym_integer] = STATE(15),
    [sym_char] = STATE(15),
    [sym_symbol] = STATE(15),
    [sym_quote] = STATE(15),
    [sym_unquote_splice] = STATE(15),
    [sym_unquote] = STATE(15),
    [sym_list] = STATE(15),
    [aux_sym_source_file_repeat1] = STATE(15),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(110),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [20] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [21] = {
    [sym__sexp] = STATE(10),
    [sym_special_form] = STATE(10),
    [sym_function_definition] = STATE(10),
    [sym_macro_definition] = STATE(10),
    [sym__atom] = STATE(10),
    [sym_float] = STATE(10),
    [sym_integer] = STATE(10),
    [sym_char] = STATE(10),
    [sym_symbol] = STATE(10),
    [sym_quote] = STATE(10),
    [sym_unquote_splice] = STATE(10),
    [sym_unquote] = STATE(10),
    [sym_list] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(10),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(114),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(116),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [22] = {
    [sym__sexp] = STATE(3),
    [sym_special_form] = STATE(3),
    [sym_function_definition] = STATE(3),
    [sym_macro_definition] = STATE(3),
    [sym__atom] = STATE(3),
    [sym_float] = STATE(3),
    [sym_integer] = STATE(3),
    [sym_char] = STATE(3),
    [sym_symbol] = STATE(3),
    [sym_quote] = STATE(3),
    [sym_unquote_splice] = STATE(3),
    [sym_unquote] = STATE(3),
    [sym_list] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(118),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(82),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [23] = {
    [sym__sexp] = STATE(7),
    [sym_special_form] = STATE(7),
    [sym_function_definition] = STATE(7),
    [sym_macro_definition] = STATE(7),
    [sym__atom] = STATE(7),
    [sym_float] = STATE(7),
    [sym_integer] = STATE(7),
    [sym_char] = STATE(7),
    [sym_symbol] = STATE(7),
    [sym_quote] = STATE(7),
    [sym_unquote_splice] = STATE(7),
    [sym_unquote] = STATE(7),
    [sym_list] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(8),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(122),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [24] = {
    [sym__sexp] = STATE(34),
    [sym_special_form] = STATE(34),
    [sym_function_definition] = STATE(34),
    [sym_macro_definition] = STATE(34),
    [sym__atom] = STATE(34),
    [sym_float] = STATE(34),
    [sym_integer] = STATE(34),
    [sym_char] = STATE(34),
    [sym_symbol] = STATE(34),
    [sym_quote] = STATE(34),
    [sym_unquote_splice] = STATE(34),
    [sym_unquote] = STATE(34),
    [sym_list] = STATE(34),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(124),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [25] = {
    [sym__sexp] = STATE(36),
    [sym_special_form] = STATE(36),
    [sym_function_definition] = STATE(36),
    [sym_macro_definition] = STATE(36),
    [sym__atom] = STATE(36),
    [sym_float] = STATE(36),
    [sym_integer] = STATE(36),
    [sym_char] = STATE(36),
    [sym_symbol] = STATE(36),
    [sym_quote] = STATE(36),
    [sym_unquote_splice] = STATE(36),
    [sym_unquote] = STATE(36),
    [sym_list] = STATE(36),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(126),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
  [26] = {
    [sym__sexp] = STATE(38),
    [sym_special_form] = STATE(38),
    [sym_function_definition] = STATE(38),
    [sym_macro_definition] = STATE(38),
    [sym__atom] = STATE(38),
    [sym_float] = STATE(38),
    [sym_integer] = STATE(38),
    [sym_char] = STATE(38),
    [sym_symbol] = STATE(38),
    [sym_quote] = STATE(38),
    [sym_unquote_splice] = STATE(38),
    [sym_unquote] = STATE(38),
    [sym_list] = STATE(38),
    [anon_sym_LPAREN] = ACTIONS(7),
    [anon_sym_defun] = ACTIONS(9),
    [anon_sym_defsubst] = ACTIONS(9),
    [anon_sym_defmacro] = ACTIONS(9),
    [aux_sym_float_token1] = ACTIONS(11),
    [aux_sym_float_token2] = ACTIONS(11),
    [aux_sym_float_token3] = ACTIONS(11),
    [aux_sym_float_token4] = ACTIONS(11),
    [aux_sym_float_token5] = ACTIONS(11),
    [aux_sym_integer_token1] = ACTIONS(13),
    [aux_sym_char_token1] = ACTIONS(15),
    [aux_sym_char_token2] = ACTIONS(15),
    [aux_sym_char_token3] = ACTIONS(15),
    [aux_sym_char_token4] = ACTIONS(15),
    [aux_sym_char_token5] = ACTIONS(15),
    [aux_sym_char_token6] = ACTIONS(15),
    [sym_string] = ACTIONS(128),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_POUNDt] = ACTIONS(9),
    [anon_sym_POUNDf] = ACTIONS(9),
    [aux_sym_symbol_token1] = ACTIONS(9),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [anon_sym_BQUOTE] = ACTIONS(19),
    [anon_sym_COMMA_AT] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(23), 1,
      sym_symbol,
    ACTIONS(130), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(9), 7,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
    ACTIONS(132), 13,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_COMMA,
  [39] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(136), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [74] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(140), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [109] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(144), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [144] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(148), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [179] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(152), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [214] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(156), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [249] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(160), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [284] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(164), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [319] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(168), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(172), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [389] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(176), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [424] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(9), 1,
      sym_symbol,
    ACTIONS(130), 6,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(9), 7,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
    ACTIONS(132), 13,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_COMMA,
  [463] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(180), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [498] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(182), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(184), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [533] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(132), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [568] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(188), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(192), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(196), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [673] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(200), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [708] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(204), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [743] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(208), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [778] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(212), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(216), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [848] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(220), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [883] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(224), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [918] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(228), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [953] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(232), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [988] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(234), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_string,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      anon_sym_COMMA_AT,
    ACTIONS(236), 20,
      anon_sym_defun,
      anon_sym_defsubst,
      anon_sym_defmacro,
      aux_sym_float_token1,
      aux_sym_float_token2,
      aux_sym_float_token3,
      aux_sym_float_token4,
      aux_sym_float_token5,
      aux_sym_integer_token1,
      aux_sym_char_token1,
      aux_sym_char_token2,
      aux_sym_char_token3,
      aux_sym_char_token4,
      aux_sym_char_token5,
      aux_sym_char_token6,
      anon_sym_nil,
      anon_sym_POUNDt,
      anon_sym_POUNDf,
      aux_sym_symbol_token1,
      anon_sym_COMMA,
  [1023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(27)] = 0,
  [SMALL_STATE(28)] = 39,
  [SMALL_STATE(29)] = 74,
  [SMALL_STATE(30)] = 109,
  [SMALL_STATE(31)] = 144,
  [SMALL_STATE(32)] = 179,
  [SMALL_STATE(33)] = 214,
  [SMALL_STATE(34)] = 249,
  [SMALL_STATE(35)] = 284,
  [SMALL_STATE(36)] = 319,
  [SMALL_STATE(37)] = 354,
  [SMALL_STATE(38)] = 389,
  [SMALL_STATE(39)] = 424,
  [SMALL_STATE(40)] = 463,
  [SMALL_STATE(41)] = 498,
  [SMALL_STATE(42)] = 533,
  [SMALL_STATE(43)] = 568,
  [SMALL_STATE(44)] = 603,
  [SMALL_STATE(45)] = 638,
  [SMALL_STATE(46)] = 673,
  [SMALL_STATE(47)] = 708,
  [SMALL_STATE(48)] = 743,
  [SMALL_STATE(49)] = 778,
  [SMALL_STATE(50)] = 813,
  [SMALL_STATE(51)] = 848,
  [SMALL_STATE(52)] = 883,
  [SMALL_STATE(53)] = 918,
  [SMALL_STATE(54)] = 953,
  [SMALL_STATE(55)] = 988,
  [SMALL_STATE(56)] = 1023,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 4, 0, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 4, 0, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 4, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 4, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 4, 0, 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 4, 0, 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special_form, 3, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_special_form, 3, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote, 2, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote, 2, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 2),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unquote_splice, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unquote_splice, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 3),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 3),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 5, 0, 1),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 5, 0, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 3),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 3),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 7, 0, 4),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 7, 0, 4),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_char, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_char, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 5, 0, 1),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 5, 0, 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 4),
  [208] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 4),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_integer, 1, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_integer, 1, 0, 0),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, 0, 3),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 6, 0, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 6, 0, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 6, 0, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 6, 0, 4),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 6, 0, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_float, 1, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro_definition, 6, 0, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro_definition, 6, 0, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 7, 0, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_definition, 7, 0, 4),
  [238] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_bio(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
