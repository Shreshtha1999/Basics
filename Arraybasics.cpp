// when to use array ?
// storing similar kind of data in contigious manner

// for eg: when we need to store similar kind of data multiple times like storing integers 100 times not feasible way to store them each time as int x = 1 .........int z = 100

// Array is always stored as indexed , ist index starts with 0 so, if array size or length is 5 then, then indexing will be array - 1 or length - 1

// Array elements are stored in consecutive memory address but I am not sure where the first one will be .It can be stored at any randomised location .
// 1D Array
#include<bits/stdc++.h>

using namespace std;

int main(){

    // storing 5 integers in an array 

    int arr[5] ; 

    cin >> arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];

    // cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4];

    // cout << arr[3];

// modifying array

//    arr[2] += 5 ;

//     cout << arr[2];
 
    // arr[1] -= 2;

    // cout << arr[1];


    arr[3] = 17;

    arr[3] += 10;
    
    cout << arr[3];
    
    return 0;

}