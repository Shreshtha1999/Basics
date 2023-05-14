// <----Functions----->

/*Functions are set of code which perfoms something for you 

Functions are used to modularise code

Functions are used to increase readability

Functions are used to use same code multiple times

4 types of functions - Void , return , parameterised & non-parameterised*/

// #void & non-parameterised
// printing name

// #include<bits/stdc++.h>
// using namespace std;

// void printName(){
//     cout << "Hey Striver" << endl;
// }

// int main(){

//     printName();
//     return 0;
// }

// Taking input from user

#include<bits/stdc++.h>

using namespace std ;

void printName(){

    cout << "Saurabh" ;
}

int main(){

    int name ;

    cout << "Enter name " ;

    cin >> name ;

    printName();

    return 0;

}