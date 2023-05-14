#include<bits/stdc++.h>

using namespace std;

void doSomething(int num ){

    cout << num << endl ;

    num = num + 10;

    cout << num << endl ;

    num = num + 15 ;

    cout << num << endl ;
}

int main(){

    int num = 10 ;

    doSomething(num); //sending a copy , not doing anything with the original. so, only the copy got chnaged. The original is still the same.

    cout << num << endl ;

    return 0;
}