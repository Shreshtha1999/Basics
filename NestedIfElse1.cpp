// Take the age from the user and then decide accordingly :
// 1. If age < 18 ,
// print -> "Not eligible for job"
// 2. If age >= 18 ,
// print -> "Eligible for job"
// 3. If age >= 55 and age <= 57 ,
// print -> "Eligible for job, but retirement soon"
// 4. If age > 57 ,
// print -> "Retirement time"

// Traditional approach

#include <bits/stdc++.h>

using namespace std ;

int main(){

    int age ;

    cout << "Enter age " ;

    cin >> age ;

    if (age < 18){

        cout << "Not eligible for job" ;
    }
    else if (age <= 54){

        cout << "Eligible for job" ;
    }
    else if (age >= 55 && age <= 57){
        cout << "Eligible for job, but retirement soon" ;
    }

    else if (age > 57){
        cout << "Retirement time " ;
    }

    return 0 ;
}