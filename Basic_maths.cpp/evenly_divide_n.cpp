// Input:
// N = 12
// Output:
// 2
// Explanation:
// 1, 2 both divide 12 evenly

#include<bits/stdc++.h>

using namespace std;

void evenly_divide(int n){

    int count = 0;
    while (n>0){

        int last_digit = n%10;

        if(n%last_digit==0){

            count = count + 1;



        }
        n=n/10;

    }
    cout << count;
}


int main(){

    int n ;

    cout << "Enter value of n :" ;

    cin >> n ;

    evenly_divide(n);

}