#include<iostream>

#include<fstream>

#include<sstream>

#include "interpreter.h"

using namespace std;

int main(
int argc,
char* argv[]
){

ifstream file(
argv[1]
);

stringstream buffer;

buffer
<<file.rdbuf();

string code=
buffer.str();

Interpreter js;

js.execute(
code
);

}