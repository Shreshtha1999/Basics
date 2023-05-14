//check it later also critical one 


#include <bits/stdc++.h>

using namespace std;

void pattern_10(int n){

    for (int i =1 ; i <=2*n-1 ; i++){

        int stars = i;

        //checking for condition when after certain range line starts decreasing , and here we can't combine patterns basically bcoz one common point ie. symmetry betn both patterns

        if (i > n) stars = 2*n-i ;

        for (int j =1 ; j <= stars; j++){

            cout << "*";
        }

        cout << endl;
    }
}

int main(){

    int t ; 

    cout <<"Enter the no. of testcases: ";

    cin >> t ;

    for (int i = 0 ; i < t ; i++){

        int n ;

        cout <<"Enter value of n: ";

        cin >> n ;

        pattern_10(n);
    }
}