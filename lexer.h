#pragma once

#include <string>
#include <vector>

using namespace std;

enum TokenType{

KEYWORD,

IDENTIFIER,

NUMBER,

STRING,

SYMBOL,

END

};

struct Token{

TokenType type;

string value;

};

vector<Token> tokenize(
string code
);