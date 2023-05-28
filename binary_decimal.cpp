// for ex- 101 we know that it is binary but computer is seeing it as a int value & storing it in another binary form so, we need to find the last digit instead of finding bit 

#include<bits/stdc++.h>

using namespace std ;

void binaryDecimal(int n){

    int ans = 0;
    int i = 0;

    while (n!=0){

        //finding last digit

        int digit = n % 10;

        //no need to check for o , as multiplying with this will give 0 only

        if(digit == 1){

            ans = ans + pow(2,i);

        // In order to go to the next digit
            // cout << ans ;
        
        }

        n = n/10;

        i++;

    cout << ans ;
        
    }
}

int main(){

    int t ;

    cout << "Enter no. of testcases: ";

    cin >> t ;

    for (int i =0 ; i < t ; i++){


        int n ;

        cout << "Enter value of n: ";

        cin >> n ;

        binaryDecimal(n);
    }
}