// Using default case : when someone gives invalid input , it will print the default output 
// optimised method

// Take the day number and print the corresponding day
// for 1 -> print Monday 
// for 2 -> print Tuesday and so on ....
// for 7 -> print Sunday


#include <bits/stdc++.h>

using namespace std;

int main(){

    int day ;

    cout << "Enter day : ";

    cin >> day ;

    switch(day){
        case 1:
        cout << "Monday";
        break ;

        case 2:
        cout<< "Tuesday" ;
        break;

        case 3:
        cout<< "Wednesday" ;
        break;

        case 4:
        cout << "Thursday" ;
        break;

        case 5:
        cout << "Friday" ;
        break;

        case 6:
        cout<<"Saturday" ;
        break;

        case 7:
        cout<< "Sunday" ;
        break;

        default:
        cout<< "Invalid Input"<<endl ;
        break;

        // here "Don't print" is not printed , as using break means it will entirely come out of the cases , and print "print"

        cout<<"Don't print";

    }

    cout << "Print";
    return 0 ;
}