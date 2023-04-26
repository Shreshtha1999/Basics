// //strings also stores every character in terms of indexing

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     string S = "Striver";
//     cout << S[4];
//     return 0;
// }

//find length

#include<bits/stdc++.h>
using namespace std;

int main(){

    string S = "Shreshtha";
    int len = S.size();
    // for finding the last character of string in case the string is too long and we don't know the size
    cout << S[len-1] ;
    return 0 ;

}