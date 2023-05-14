// * * * *
// * * * *
// * * * *
// * * * *

#include<bits/stdc++.h>

using namespace std;

void pattern_1 (int n){

    for(int i = 0; i < n; i++ ){

        for (int j = 0 ; j <n; j++){

            cout << "*" ;
        }
        cout<<endl;
    }

}

// normal one

// int main(){

//     int n ;
//     cout<< "Enter the value of n: ";
//     cin>>n;

//     pattern_1(n);

// }
// But in online compiler it will not work because there are some hidden test cases like here we have taken or test for only 1 input but in online compiler they can check for multiple test cases.
// so, we need to modify the int main() section in our code

int main(){
    int t;
    // take no. of test cases like for how many test cases you want to check the code

    cout << "Enter the no. of test cases that you want to check for : " ;
    cin >> t ;

    for (int i = 0 ; i < t ; i++ ){

        // suppose t= 2 ie will be taking two testcases
        // so , for ist one lets say n = 5 , it will print 5 times next 4 then it will print for 4 times 

        cout << "Enter the value of n: " ;
        int n ;

        cin >> n;

        pattern_1(n);

    }
    
}
