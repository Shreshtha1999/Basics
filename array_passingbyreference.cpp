#include<bits/stdc++.h>

using namespace std;

void doSomething(int arr[], int n){
    arr[4] += 20;
    cout << arr[4];

}

int main(){

    int n = 5 ;

    int arr[n];

    for (int i =0 ; i<=4; i++){

        cin>>arr[i];
    }

    doSomething(arr , n);
    
}