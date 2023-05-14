// *
// * *
// * * *
// * * * *
// * * * * *

#include<bits/stdc++.h>

using namespace std;

void pattern_2(int n){

    // n=3 suppose;
 for (int i =0 ; i < n ; i++){

    for (int j =0 ; j<=i ; j++){
        cout << "*";

    }
    cout << endl;
 }

}

int main(){

    int t ;

    cout << "Enter the number of test cases: ";

    cin >> t;

    for (int i = 0; i < t ; i++ ){


    int n ;

    cout << "Enter the value of n: ";

    cin >> n ;

    pattern_2(n);

    }

}

