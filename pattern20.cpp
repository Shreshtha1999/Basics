#include <bits/stdc++.h>

using namespace std;

void pattern_20(int n){


    //outer loop , since n =4 & need to print for 7 times so, 2*n-1

    //n=4

    for (int i =0 ; i < 2*n -1; i++){


        //inner loop, need to take the minimal and then every time need to minus the current value from n 

        for (int j=0 ; j < 2*n-1; j++){

            int top =i ;

            int left =j;

            int right = (2*n-2)-j;

            int bottom = (2*n-2)-i;

            cout << n -min(min(top, right) , min (left,bottom)) << " ";
        }

        cout << endl ;
    }
}

int main(){

    int t ;

    cout << "Enter no. of testcases :";

    cin >> t;

    for (int i =0; i <t; i++){

        int n ;

        cout << "Enter value of n: ";

        cin >> n ;

        pattern_20(n);

    }
}