#include <bits/stdc++.h>

using namespace std;

void count_no_of_extracts(int N){
        
        
        int temp = N;
        
        // N=2446
           int count =0 ;
        
        while(N>0){
            
          int last_digit = N%10;//6//7//8//7
            
            
             
            
            if(last_digit !=0 && temp%last_digit == 0){
                
                count = count +1;
                
            }
                 N=N/10;
                
        }
        
        cout << count;
        
        
    }

int main(){

    int N ;

    cout << "Enter the value of n: ";

    cin >> N;

    count_no_of_extracts(N);
}