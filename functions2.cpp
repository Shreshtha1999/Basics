// Return function

// Take two numbers & print its sum

#include <bits/stdc++.h>

using namespace std ;

int printSum(int n1, int n2){

    int n3 = n1 + n2 ;
    return n3 ;
}

int main(){

    int n1 , n2 ;

    cin >> n1 ;
    cin >> n2 ;

    int result = printSum(n1,n2);

    cout << result ;

    return 0;

}
