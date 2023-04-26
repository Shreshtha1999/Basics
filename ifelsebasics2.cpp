// A school has following rules for grading system :

// a. Below 25 -> F
// b. 25 to 44 -> E
// C. 45 tO 49 -> D
// d. 50 to 59 -> C
// e. 60 to 79 -> B
// f. 80 to 100 -> A

// Ask user to enter marks and print the corresponding grade .

// Below approach is the traditional one , not recommended as it is not the optimised one .

// Here, we have shown example of IF else statements - 

// for eg : suppose input is given as 23 -> so it should print "F" as it is becoming true in the ist condition check only , and since there is else statement after the ist codition so, the rest lines of code will not get executed

// But if I execute the same program with "if" statements only without any else then, the program will run but it will take more time & space so, not recommended - for eg: suppose input is given as 23 -> so it should print "F" as it is becoming true in the ist condition check only but then, also it will keep on executing the next lines of code as there is no else statements used .

#include<bits/stdc++.h>

using namespace std ;

int main(){

    int marks ;

    cout <<"Enter marks: " ; 

    cin >> marks ;

    if (marks < 25){

        cout << "F";
    }
    else if (marks >= 25 && marks <= 44){

        cout << "E" ;
    }
    else if (marks >= 45 && marks <= 49){

        cout << "D" ;
    }
    else if (marks >= 50 && marks <= 59){

        cout << "C" ;
    }
    else if(marks >= 60 && marks <= 79){

        cout << "B" ;
    }
    else if(marks >= 80 && marks <= 100){

        cout << "A" ;
    }

    
}