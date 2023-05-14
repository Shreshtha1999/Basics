// pass by value example with strings 

#include<bits/stdc++.h>

using namespace std;

void doSomething(string s){

    s[4] = 'z';
    cout << s;
}

int main(){

    string s = "shreya";

    doSomething(s);
    cout << s;
    return 0;
}