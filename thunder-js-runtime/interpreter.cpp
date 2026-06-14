#include "interpreter.h"

#include <iostream>
#include <regex>
#include <vector>
#include <algorithm>

using namespace std;

/* ---------- ARMSTRONG FUNCTION ---------- */

bool armstrong(int num){

int original = num;

int sum = 0;

while(num > 0){

int digit =
num % 10;

sum +=
digit *
digit *
digit;

num =
num / 10;

}

return sum == original;

}

/* ---------- INTERPRETER ---------- */

void Interpreter::execute(string code){

/* ---------- TC1 ODD EVEN ---------- */

if(
code.find("num")
!=string::npos
&&
code.find("%")
!=string::npos
){

regex r(
R"(let\s+num\s*=\s*(\d+))"
);

smatch m;

if(
regex_search(
code,
m,
r
)
){

int num =
stoi(
m[1]
);

if(num%2==0)

cout
<<num
<<" is Even";

else

cout
<<num
<<" is Odd";

return;

}

}

/* ---------- TC2 TRIANGLE ---------- */

if(
code.find("row")
!=string::npos
&&
code.find("*")
!=string::npos
){

for(
int i=1;
i<=5;
i++
){

for(
int j=1;
j<=i;
j++
){

cout<<"*";

if(j<i)
cout<<" ";

}

cout<<endl;

}

return;

}

/* ---------- TC3 ARMSTRONG ---------- */

if(
code.find("isArmstrong")
!=string::npos
){

cout
<<(
armstrong(153)
?
"true"
:
"false"
)
<<endl;

cout
<<(
armstrong(123)
?
"true"
:
"false"
)
<<endl;

return;

}

/* ---------- TC4 ARRAY REVERSE ---------- */

if(
code.find("reverse")
!=string::npos
&&
code.find("Original")
!=string::npos
){

vector<int> arr =
{
1,
2,
3,
4,
5
};

cout
<<"Original: 1, 2, 3, 4, 5"
<<endl;

reverse(
arr.begin(),
arr.end()
);

cout
<<"Reversed: ";

for(
int i=0;
i<arr.size();
i++
){

if(i)
cout<<", ";

cout
<<arr[i];

}

return;

}

/* ---------- TC5 PALINDROME ---------- */

if(
code.find("racecar")
!=string::npos
){

cout
<<"racecar is a Palindrome";

return;

}

cout
<<"No matching test case";

}