#pragma once

#include <map>
#include <string>

using namespace std;

class Runtime{

public:

map<
string,
string
> vars;

void set(
string k,
string v
){

vars[k]=v;

}

string get(
string k
){

if(
vars.count(k)
)

return vars[k];

return "";

}

};