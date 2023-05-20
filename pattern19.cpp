//Square Printing 

// * * * *
// *      *
// *      *
// * * *  *

//determine the boundary conditions like where stars needed to be printed like here star is printed when i =0 & when i = n -1 . 
// Similarly , stars is also printed when j = 0 & when j = n-1 as, to make a square stars needed to be printed in the boundary only

# include <bits/stdc++.h>

using namespace std ;

void pattern19(int n ){

    for (int i =0 ; i <n; i++){

        for (int j =0 ; j <n; j++){

            if (i ==0 || i ==n-1 || j ==0 || j==n-1)

            cout << "*";

            else 

            cout << " ";
        }

        cout << endl ;
    }
}


int main(){

    int t ;

    cout << "Enter the no. of testcases :";

    cin >> t;

    for (int i =0 ; i <t ; i++){

        int n ;

        cout << "Enter the value of n : ";

        cin >> n ;

        pattern19(n);
    }
}