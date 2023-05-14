// 1
// 2 2
// 3 3 3
// 4 4 4 4

#include<iostream>
using namespace std;

// n = 5 suppose

void pattern_4(int n){

    for (int i = 1 ; i <= n ; i++){


    for (int j = 1 ; j <= i ; j++){


        cout << i << " ";

    }
    cout << endl ;
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

        pattern_4(n);
    }
    
}

