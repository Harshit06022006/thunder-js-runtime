#include "lexer.h"

#include <cctype>

using namespace std;

vector<Token> tokenize(
string code
){

vector<Token> tokens;

string current;

for(
char c:code
){

if(
isalnum(c)
){

current+=c;

}

else{

if(
!current.empty()
){

TokenType t=
IDENTIFIER;

bool number=true;

for(
char x:current
)

if(
!isdigit(x)
)

number=false;

if(number)

t=
NUMBER;

tokens.push_back({
t,
current
});

current.clear();

}

if(
!isspace(c)
){

tokens.push_back({
SYMBOL,
string(
1,
c
)
});

}

}

}

tokens.push_back({
END,
""
});

return tokens;

}