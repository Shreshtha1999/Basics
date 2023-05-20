#include<bits/stdc++.h>

using namespace std ;

void reverse_number(int n){


    int reverse_num = 0 ;

    while (n >0){

        int last_number = n%10;

        reverse_num = (reverse_num * 10) + last_number;

        // cout << reverse_num;

        n=n/10;

    }

    cout << reverse_num;


}


int main(){

    int n ;

    cout <<"Enter value of n: ";

    cin >> n ;

    reverse_number(n);
}