// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2 
// 1

#include<bits/stdc++.h>

using namespace std;
void pattern_6(int n){

    // n = 5 suppose;

for (int i =n ; i >= 1 ; i--){

    for (int j = 1 ; j <= i ; j++){

        cout << j ;

    }

    cout << endl;
}

}

int main(){

    int t ;
    cout << "Enter no. of testcases: ";

    cin >> t;

    for (int i = 0 ; i < t ; i++){

        int n ;

        cout << "Enter value of n: ";

        cin >> n ;

        pattern_6(n);

    }
}
