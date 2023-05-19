#include<bits/stdc++.h>

using namespace std;

void pattern_17(int n){

    for (int i =0 ; i <n ; i++){

        for (char ch = 'E' -i ; ch <= 'E'; ch ++){

            cout << ch;
        }

        cout << endl;
    }
}

int main (){

    int t ;

    cout <<"Enter the no. of testcases: ";

    cin >> t ;

    for(int i =0; i< t; i++){

        int n ;

        cout << "Enter value of n: ";

        cin >> n ;

        pattern_17(n);
    }
}