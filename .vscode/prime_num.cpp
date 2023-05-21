#include<bits/stdc++.h>

using namespace std ;

void isPrime (int n){

   bool isPrime = 1;

   for(int i = 2 ; i < n ; i++){

        if (n % i == 0){

            isPrime = 0 ;//false

            break;
        }
   }

   if( isPrime == 0){

        cout << "Not Prime ";
   }

   else{

    cout << "Prime ";
   }



}

int main(){

    int n ;

    cout << "Enter value of n: ";

    cin >> n ;

    isPrime(n);
}