%{
#include "scanner.h"
%}

%%
:                       return COLON;
"fn"                    return FUNCTION;
"class"                 return CLASS;
"int"                   return INTEGER;
"float"                 return FLOAT;
"str"                   return STRING;
"uni"                   return UNI;
"arr"                   return ARRAY;
"sub"                   return SUB;

[a-zA-Z][_a-zA-Z0-9]*   return IDENTIFIER;