#include <bits/stdc++.h>

using namespace std;

void count_no_of_extracts(int n){

    int counter = 0;
    while(n >0){

        int last_digit = n%10;

        counter = counter + 1;

        cout << counter << " ";

        cout << last_digit;
                

        cout << endl;

        n=n/10;



        
    }

   


}

int main(){

    int n ;

    cout << "Enter the value of n: ";

    cin >> n;

    count_no_of_extracts(n);
}