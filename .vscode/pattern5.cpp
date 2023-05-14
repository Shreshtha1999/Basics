// * * * * *
// * * * *
// * * *
// * *
// *

#include<bits/stdc++.h>

using namespace std;

// n = 5 suppose

void pattern_5(int n){

    for (int i = n ; i > 0; i--){

    for (int j = 0 ; j < i ; j++ ){

        cout << "* " ;
    }

    cout << endl;
}
}

int main(){

    int t ;
    cout << "Enter number of testcases: ";
    cin >> t ;

    for (int i =0 ; i< t ; i++){

        int n ;

        cout << "Enter value of n : ";

        cin >>n ;

        pattern_5(n);
    }
    
}
