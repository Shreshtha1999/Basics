//maximum number using return function

#include<bits/stdc++.h>
using namespace std ;

int maximizeNum(int num1, int num2){

    if(num1 >= num2){
        return num1;
    }
    else{
        return num2 ;
    }
}

int main(){

    int num1 , num2 ;

    cin>>num1>>num2 ;

    int res = (num1 , num2);

    cout << res ;

    return 0;


}