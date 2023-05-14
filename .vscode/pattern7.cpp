#include<bits/stdc++.h>

using namespace std;

void pattern_7(int n){

        for (int i =0 ; i < n ; i++){
             
            //space
            
            for (int j = 0 ; j < n-i-1; j ++){
                
                cout <<" ";
            }
            
            //stars
            
            for (int j = 0 ; j < 2*i+1 ; j++){
                
                cout <<"*";
            }

            //space

            
            for (int j = 0 ; j < n-i-1; j ++){
                
                cout <<" ";
            }
            
            cout << endl;
        }
    }

int main(){

    int t ;

    cout << "Enter no. of test cases: ";

    cin >> t ;

    for (int i =0 ; i < t ; i++){

        int n ;

        cout <<"Enter value of n:";

        cin >> n;

        pattern_7(n);
    }
}
