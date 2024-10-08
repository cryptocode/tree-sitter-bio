const COMMENT = token(/;.*/);

const STRING = token(
  seq('"', repeat(choice(/[^"\\]/, seq("\\", /(.|\n)/))), '"')
);

// Symbols can contain any character when escaped
const SYMBOL = token(
  /([^ \n\s\f()'`,\\";]|\\.)([^ \n\s\f()'`,\\";]|\\.)*/
);

const INTEGER_BASE10 = token(/[+-]?[0-9]+\.?/);
const FLOAT_WITH_DEC_POINT = token(/[+-]?[0-9]*\.[0-9]+/);
const FLOAT_WITH_EXPONENT = token(/[+-]?[0-9]+[eE][0-9]+/);
const FLOAT_WITH_BOTH = token(/[+-]?[0-9]*\.[0-9]+[eE][0-9]+/);
const FLOAT_INF = token(/-?1.0[eE]\+INF/);
const FLOAT_NAN = token(/-?0.0[eE]\+NaN/);

const CHAR = token(/\?(\\.|.)/);
const UNICODE_NAME_CHAR = token(/\?\\N\{[^}]+\}/);
const LOWER_CODE_POINT_CHAR = token(/\?\\u[0-9a-fA-F]{4}/);
const UPPER_CODE_POINT_CHAR = token(/\?\\U[0-9a-fA-F]{8}/);
const HEX_CHAR = token(/\?\\x[0-9a-fA-F]+/);
const OCTAL_CHAR = token(/\?\\[0-7]{1,3}/);

// E.g. ?\C-o or ?\^o or ?\C-\S-o
// const KEY_CHAR = token(/\?(\\(([CMSHsA]-)|\^))+(\\;|.)/);
// E.g. ?\M-\123
// const META_OCTAL_CHAR = token(/\?\\M-\\[0-9]{1,3}/);
// const BYTE_COMPILED_FILE_NAME = token("#$");

module.exports = grammar({
  name: "bio",

  extras: ($) => [/(\s|\f)/, $.comment],

  rules: {
    source_file: ($) => repeat($._sexp),

    _sexp: ($) =>
      choice(
        $.special_form,
        $.function_definition,
        $.macro_definition,
        $.list,
        // $.vector,
        // $.hash_table,
        // $.bytecode,
        // $.string_text_properties,
        $._atom,
        $.quote,
        $.unquote_splice,
        $.unquote
      ),

    special_form: ($) =>
      seq(
        "(",
        choice(
          "and",
          "catch",
          "cond",
          "condition-case",
          "fun",
          "if",
          "interactive",
          "lambda",
          "let",
          "let*",
          "macro",
          "or",
          "prog1",
          "prog2",
          "progn",
          "quote",
          "save-current-buffer",
          "save-excursion",
          "save-restriction",
          "set!",
          "type",
          "unwind-protect",
          "var",
          "while"
        ),
        repeat($._sexp),
        ")"
      ),

    function_definition: ($) =>
      prec(
        1,
        seq(
          "(",
          choice("defun", "defsubst"),
          field("name", $.symbol),
          optional(field("parameters", $._sexp)),
          optional(field("docstring", $.string)),
          repeat($._sexp),
          ")"
        )
      ),

    macro_definition: ($) =>
      prec(
        1,
        seq(
          "(",
          "defmacro",
          field("name", $.symbol),
          optional(field("parameters", $._sexp)),
          optional(field("docstring", $.string)),
          repeat($._sexp),
          ")"
        )
      ),

    _atom: ($) =>
      choice(
        $.float,
        $.integer,
        $.char,
        $.string,
        $.symbol
      ),
    float: ($) =>
      choice(
        FLOAT_WITH_DEC_POINT,
        FLOAT_WITH_EXPONENT,
        FLOAT_WITH_BOTH,
        FLOAT_INF,
        FLOAT_NAN
      ),
    integer: ($) => choice(INTEGER_BASE10 ),
    char: ($) =>
      choice(
        CHAR,
        UNICODE_NAME_CHAR,
        LOWER_CODE_POINT_CHAR,
        UPPER_CODE_POINT_CHAR,
        HEX_CHAR,
        OCTAL_CHAR,
        // KEY_CHAR,
        // META_OCTAL_CHAR
      ),
    string: ($) => STRING,
    symbol: ($) =>
      choice(
        // Match nil and t separately so we can highlight them.
        "nil",
        "#t",
        "#f",
        // We need to define these as separate tokens so we can handle
        // e.g '(defun) as a sexp. Without these, we just try
        // function_definition and produce a parse failure.
        "defun",
        "defsubst",
        "defmacro",
        SYMBOL,
      ),

    quote: ($) => seq(choice("'", "`"), $._sexp),
    unquote_splice: ($) => seq(",@", $._sexp),
    unquote: ($) => seq(",", $._sexp),
    list: ($) => seq("(", choice(repeat($._sexp)), ")"),

    // dot: ($) => token("."),
    // vector: ($) => seq("[", repeat($._sexp), "]"),
    // bytecode: ($) => seq("#[", repeat($._sexp), "]"),
    // string_text_properties: ($) => seq("#(", $.string, repeat($._sexp), ")"),
    // hash_table: ($) => seq("#s(hash-table", repeat($._sexp), ")"),

    comment: ($) => COMMENT,
  },
});
