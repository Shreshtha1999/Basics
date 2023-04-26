
// Take the day number and print the corresponding day
// for 1 -> print Monday 
// for 2 -> print Tuesday and so on ....
// for 7 -> print Sunday

// If we are not putting any break statement then for eg: if we enter 3 then it should give only wednesday as output but it will print wednesday along with the other corresponding days 

#include <bits/stdc++.h>

using namespace std ;

int main (){

    int day ;

    cout << "Enter day : " ;

    cin >> day ;

    switch(day){
        case 1:
        cout <<"Monday" ;

        case 2:
        cout <<"Tuesday" ;

        case 3:
        cout <<"Wednesday" ;

        case 4:
        cout <<"Thursday" ;

        case 5:
        cout <<"Friday" ;

        case 6:
        cout <<"Saturday" ;

        case 7:
        cout <<"Sunday" ;
        
    }

    return 0;
    
}
