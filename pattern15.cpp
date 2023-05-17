#include<bits/stdc++.h>

using namespace std;

void pattern_15(int n){

    for (int i =0 ; i <n; i ++){

        char ch = 'A' + i;

        for (int j =0 ; j <=i ; j ++){

            cout << ch ;
        }

        cout << endl ;
    }
}

int main(){

    int t ;

    cout << "Enter the number of test cases: ";

    cin >> t ;

    for (int i =0 ; i < t; i++){

        int n ;

        cout << "Enter value of n :";

        cin >> n ;

        pattern_15(n);
    }


}