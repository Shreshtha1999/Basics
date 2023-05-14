//need to revise again

#include<bits/stdc++.h>

using namespace std;

void pattern_11(int n){

    for (int i =0 ; i <n ; i++){
            
        int start = 1;
            
            if (i %2 ==0) start = 1;
            
            else
            
            start = 0;
            
            for ( int j = 0 ; j <= i ; j++){
                
                cout << start <<" ";
                
                start = 1 - start ;
            }
            
        cout << endl ;
    }
}

int main(){


    int t ;

    cout << "Enter the no. of testcases: ";

    cin >> t ;

    for (int i = 0 ; i < t ; i++){

        int n ;

        cout << "Enter value of n: ";

        cin >> n;

        pattern_11(n);
    }
}