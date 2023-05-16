#include<bits/stdc++.h>

using namespace std;

void pattern_14(int n){

    for (int i =0 ; i <n ; i++){

        for (char ch ='A'; ch <= 'A'+ n-(i+1); ch ++){

            cout << ch << " ";
        }

        cout << endl ;
    }
}


int main(){

    int t ;

    cout << "Enter the number of test cases: ";

    cin >> t ;


    for (int i = 0 ; i < t ; i++){

        int n ;

        cout << "Enter value of n : ";

        cin >> n ;

        pattern_14(n);
    }
}