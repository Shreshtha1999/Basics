// WAP that takes an input of age & prints if you are adult or not 
// I can also check for age < 18 & then do print "You are not an adult "
// but that is optional , even we can write direct cout under else without checking for another if condition
#include<bits/stdc++.h>

using namespace std;

int main(){

    int age ;

    cout << "Enter age: ";

    cin >> age ;

    if(age >= 18){

        cout <<"You are an adult";
    }
    // else {
    //     cout << "You are not an adult ";
    // }
    return 0 ;
}

// suppose I don't write the else condition , and I provided input as '9' , and obviously 9 is less than 18 that means the condition becomes false at the ist end only and since there is no else consition , the program will not produce any kind of output 