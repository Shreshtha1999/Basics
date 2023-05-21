#include<bits/stdc++.h>

using namespace std ;

int main(){

int n ;

cout << "Enter value of n: ";


cin >> n ;


int a = 0 ;

int b = 1;

cout << a<< b;

int nextNum;

for (int i =0 ; i <=n ; i++){

     nextNum = a + b ;

      cout << nextNum;

     a = b;

     b = nextNum;
}

   
}



