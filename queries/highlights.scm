;; Special forms
[
  "and"
  "catch"
  "cond"
  "condition-case"
  "fun"
  "if"
  "interactive"
  "lambda"
  "let"
  "let*"
  "macro"
  "or"
  "prog1"
  "prog2"
  "progn"
  "quote"
  "save-current-buffer"
  "save-excursion"
  "save-restriction"
  "set!"
  "type"
  "unwind-protect"
  "var"
  "while"
] @keyword

;; Function definitions
[
 "defun"
 "defsubst"
 ] @keyword
(function_definition name: (symbol) @function)
(function_definition parameters: (list (symbol) @variable.parameter))
(function_definition docstring: (string) @comment)

;; Highlight macro definitions the same way as function definitions.
"defmacro" @keyword
(macro_definition name: (symbol) @function)
(macro_definition parameters: (list (symbol) @variable.parameter))
(macro_definition docstring: (string) @comment)

(comment) @comment

(integer) @number
(float) @number
(char) @number

(string) @string

[
  "("
  ")"
] @punctuation.bracket

[
  "`"
  "'"
  ","
  ",@"
] @operator

;; Highlight nil and t as constants, unlike other symbols
[
  "nil"
  "#t"
  "#f"
] @constant.builtin
