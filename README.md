# ocelot2
Second version of a self-compiling compiler written in a non-trivial subset of C.  
This is just a side project I'm doing for fun, so progress will be unsteady as I'm only working on this project when I got time.

## Status
Part currently working on: scanner

## Aiming for the following features
* LL(1) (although in some cases a lookahead will be used to keep the code more readable/reusable)
* Emulator (to execute the binary, RISC without any additional commands)
* Separate compilation (Linker)
* Preprocessor (sort of)
* Arrays
* Records
* Arithmetic expressions
* Conditionals/Boolean expressions
* Procedures/Functions
* Bit operations
* File I/O
* Type checking
* Some optimization techniques (e.g. constant folding, lazy evaluation, ...)

# Grammar

~~~
digit                 =	"0" | "1" | "2" | "3" | "4" | "5" | "6" | "7" | "8" | "9" .
letter                =	"A" | "B" | "C" | "D" | "E" | "F" | "G" | "H" | "I" | "J" |
                        "K" | "L" | "M" | "N" | "O" | "P" | "Q" | "R" | "S" | "T" |
                        "U" | "V" | "W" | "X" | "Y" | "Z" | "a" | "b" | "c" | "d" |
                        "e" | "f" | "g" | "h" | "i" | "j" | "k" | "l" | "m" | "n" |
                        "o" | "p" | "q" | "r" | "s" | "t" | "u" | "v" | "w" | "x" |
                        "y" | "z" .
ascii                 = "^" | "!" | """ | "%" | "&" | "/" | "(" | ")" | "{" | "}" |
                        "[" | "]" | "=" | "?" | "#" | "*" | "-" | "+" | "~" | "|" |
                        "<" | ">" | ":" | ";" | "," | "." | "_" .
integer               =	digit { digit } .
identifier            =	( letter | "_" ) { letter | digit | "_" } .
string                =	""" { character } """ .
comment               =	"//" { character } | "/*" { character } "*/" .
literal               = integer | "'" ( digit | letter | ascii )  "'" .
value                 = literal | string | [ "*" ] identifier selector | sizeof | function_call .
function_call         = identifier "(" [ expression { "," expression } ] ")" ";" .
arithmetic_factor     = [ "~" ] ( [ "*" ] ( identifier | "(" expression ")" | function_call ) ) .
arithmetic_term       = arithmetic_factor { ( "*" | "/" | "%" | "&" | "^" ) arithmetic_factor } .
arithmetic_expression = [ "-" ] arithmetic_term { ( "+" | "-" | "|" | "<<" | ">>" ) arithmetic_term } .
comparison            = arithmetic_expression [ ( "<" | "<=" | ">" | ">=" | "==" | "!=" ) arithmetic_expression ] .
factor                = [ "!" ] comparison .
term                  = factor { "&&" factor } .
expression            = term { "||" term } .
selector              = ( ( "->" | "." ) identifier [ selector ] ) | "[" expression "]" .
type                  = ( "int" | "char" | "void" ) [ "*" ] .
struct_type           = "struct" identifier [ "*" ] .
sizeof                = "sizeof" "(" ( type | struct_type ) ")" .
return_statement      = "return" [ expression ] ";" .
assign_statement      = [ "*" ] identifier [ selector ] "=" expression ";" .
if_statement          = "if" "(" expression ")" function_block [ "else" "if" "(" expression ")" function_block ] [ "else" function_block ] .
while_statement       = "while" "(" expression ")" function_block .
function_block        = "{" { variable_declaration } { statement } "}" .
statement             = assign_statement | if_statement | while_statement | return_statement | function_statement .
arguments             = ( type | struct_type ) identifier { "," ( type | struct_type ) identifier } .
typedef               =	"typedef" ( type | struct_type ) identifier ";" .
struct_declaration    =	"struct" identifier "{" variable_or_function { variable_or_function } "}" ";" .
variable_or_function  =	( type | struct_type ) identifier ( [ "[" integer "]" ] ";" | "(" [ arguments ] ")" ( ";" | function_block ) ) .
include               = "#" "include" ( "<" string ".h" ">" | """ string ".h" """ ) .
ocelot                =	{ include | variable_or_function | struct_declaration | typedef } .
~~~
