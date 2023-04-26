// 2D ARRAY
// int arr [2][3] - first one for row & second one for column
 
 #include<bits/stdc++.h>
 using namespace std;

 int main(){

    int arr[3][6];

    // cin >> arr[3][6];
    // -> need to verify the below one
    arr[1][7] = 89; 

    // for the location, that we have not defined will be assigning a garbage value

    // cout << arr[2][6];

    cout << arr[1][7];
    return 0;
 }

