#include<bits/stdc++.h>

using namespace std;


void pattern_9 (int n){


    for (int i = 0 ; i < n ; i++){

        for (int j = 0 ; j < n-i-1 ; j++ ){

            cout << " ";
        }

        for (int j = 0 ; j < 2 * i + 1; j++){

            cout <<"*";
        }

        for ( int j = 0 ; j < n-i-1 ; j++){

            cout << " ";
        }

        cout << endl ;

    }
}

void pattern_10(int n){

    for(int i =0 ; i < n ; i++){

    for (int j = 0 ; j < i ; j++){
             
             cout << " ";
        }

        for ( int j = 0 ; j < 2*n -(2*i+1); j++){

            cout << "*";
        }

        for (int j = 0 ; j < i ; j++){
             
             cout << " ";
        }

        cout << endl ;

    }

}

    


int main(){

    int t ;

    cout << "Enter the no. of test cases: ";

    cin >> t ;

    for (int i =0 ; i <t; i++){

        int n ;

        cout << "Enter value of n: ";

        cin >> n ;

        pattern_9(n);
        pattern_10(n);
    }


}