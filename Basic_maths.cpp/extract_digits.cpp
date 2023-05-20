// #Extract all numbers individually from a given number for eg: N = 1234 , then extraction will be 1 , 2 ie. individually

// Extraction always occurs from backwards like first 4 will be extracted then 3 followed by 2 & then 1

// modulo operator means it will give remainder for eg: N = 36 , 36 % 10 = 6 (always returns the last integer)


#include <bits/stdc++.h>

using namespace std;


void extract_digits(int n){

    // n = 7896

    while(n > 0){

        //extracting last digit

       int  last_digit = n%10;

       cout << last_digit ;

       //for next number extraction take only integer part

       n= n/10 ;
    }

    cout << endl;
}

int main(){

    int n ;

    cout << "Enter value of n: ";

    cin >> n;

    extract_digits(n);
}