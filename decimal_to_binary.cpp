#include<bits/stdc++.h>

using namespace std;

void decimalBinary(int n){

    int ans = 0 ;

    int i = 0;

    while (n!=0){

        int bit = n & 1;

        ans = (bit * pow(10,i) )+ ans;

        n = n >> 1 ;

        i++;


    }

    cout << ans;
}

int main (){

    int t ;


    cout << "Enter no. of testcases: ";

    cin >> t;

    for (int i = 0 ; i < t ; i++){

    int n ;

    cout << "Enter value of n: " << endl;

    cin >> n ;

    decimalBinary(n);
}


    }

    

    