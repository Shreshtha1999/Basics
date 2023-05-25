#include<bits/stdc++.h>

using namespace std;

void decimalBinary(int n){

    int ans = 0 ;

    int i;

    while (n!=0){

        int bit = n & 1;

        ans = (bit * pow(10,i) )+ ans;

        n = n >> 1 ;


    }

    cout << ans;
}

int main (){

    int n ;

    cout << "Enter value of n: ";

    cin >> n ;

    decimalBinary(n);
}