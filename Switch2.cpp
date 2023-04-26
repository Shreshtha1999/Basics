// Take the day number and print the corresponding day
// for 1 -> print Monday 
// for 2 -> print Tuesday and so on ....
// for 7 -> print Sunday

// if we use break and suppose condition gets matched in the ist time only then it will not check for the other cases/conditions.
// here break is working similar as the else statement 

#include <bits/stdc++.h>

using namespace std ;

int main (){

    int day ;

    cout << "Enter day : " ;

    cin >> day ;

    switch(day){
        case 1:
        cout <<"Monday" ;
        break ;

        case 2:
        cout <<"Tuesday" ;
        break;

        case 3:
        cout <<"Wednesday" ;
        break;

        case 4:
        cout <<"Thursday" ;
        break;

        case 5:
        cout <<"Friday" ;
        break;

        case 6:
        cout <<"Saturday" ;
        break;

        case 7:
        cout <<"Sunday" ;
        break;
// here "lets check" is not printed , as using break means it will entirely come out of the cases , and print "check"
        cout <<"lets check" ;
        
    }
    cout <<"check" ;
    return 0;
    
}
