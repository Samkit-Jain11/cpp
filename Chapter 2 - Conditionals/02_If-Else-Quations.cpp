/*
// Take input from user and tell if the number is even or odd -

#include <iostream>
using namespace std;

int main() {
    int n ;

    cout << "Enter a number : " ;
    cin >> n ;

    if (n%2==0) {
        cout << "Number is even. " ;
    }
    else {
        cout << "Number is odd. " ;
    }

    return 0;
}
*/

/*
// Take input from users and tell if it is divisible by 5 or not 

#include <iostream>
using namespace std;

int main () {
    int x ;
    cin >> x ;

    if (x % 5 == 0){
        cout << "Number is divisible by 5 " ;
    }
    else {
        cout << "Number is not divisible by 5 " ;
    }

    return 0 ; 
}

*/

/*
//Take integer input and print its absolute value 

#include <iostream>
using namespace std ;

int main () {
    int x ;
    cin >> x ;

    if (x>=0){
        cout << "Absolute value is " << x ;
    }
    else{
        cout << "Absolute value is " << -x ;
    }

    return 0;
}

*/

// take length and breadth of a rectangle and findd out wheter the area of recttangle is greaten its paramater 

#include <iostream>
using namespace std ;

int main() {
    float l ;
    cin >> l ;

    float b ;
    cin >> b ;

    float area ;
    area = l * b ;

    float parameter ;
    parameter = 2*(l+b) ;

    if ( parameter > area ){
        cout << "paramter is bigger " ;
    }
    else if (parameter == area ) {
        cout << "Both are equal " ;
    }
    else {
        cout << "Area is bigger " ;
    }

    return 0 ;
}