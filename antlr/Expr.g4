grammar Expr;

// Lexer rules
NUMBER: [0-9]+;
PLUS: '+';
MINUS: '-';
MUL: '*';
DIV: '/';
LPAREN: '(';
RPAREN: ')';
WS: [ \t\r\n]+ -> skip;

// Parser rules
expr: expr (PLUS | MINUS) expr   # AddSub
    | expr (MUL | DIV) expr      # MulDiv
    | LPAREN expr RPAREN         # Parens
    | NUMBER                     # Number
    ;

