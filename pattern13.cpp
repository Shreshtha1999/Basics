#include<bits/stdc++.h>

using namespace std ;

void pattern_13(int n){

    for(int i =0 ; i < n ; i++){

        for(char ch = 'A'; ch <= 'A' + i ; ch++){

            cout << ch<< " " ;
        }

        cout << endl ;
    }
}

int main(){

    int t ; 

    cout << "Enter the number of testcases: ";

    cin >> t ;

    for (int i =0 ; i < t ; i++){

        int n ;

        cout << "Enter value of n: ";

        cin >> n ;

        pattern_13(n);
    }
}