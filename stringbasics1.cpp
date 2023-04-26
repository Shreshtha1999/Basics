//Modify_string

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s = "Shreshtha";
    int len = s.size();
    // changing the last character of string to 's'
    s[len - 1] = 's';
    cout <<s[len-1];
    cout << s;
    return 0;
}