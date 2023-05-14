//pass by reference is used when I want to pass a copy, ie. I want my function to do changes in the original one .

#include<bits/stdc++.h>

using namespace std;

void doSomething(string &s){// taking address, got the original value
    s[0] = 'G';

    cout << s <<endl;

}

int main(){

    string s = "saurabh";

    doSomething(s);

    cout<<s;

    return 0;
}







