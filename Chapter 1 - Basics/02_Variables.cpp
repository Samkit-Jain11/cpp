#include <iostream>
using namespace std ;

int main () {
    int x ; // declaration
    x = 5 ; // initialization

    int y = 10 ; // both declaration and initialization 

    cout << x*y ;

    // this part can be used to update the value of variable 
    x = x + 6 ; // this will update the old value of x by x + 6 
    
    // we can also do this 
    x = 7 ; // this part will set the value of x to 7

    // another method 
    x+= 2; // this means increase value of x by 2 ( x = x+2 )
    x-=2;
    x++ ; // this will simply add value of x with 1  
    --x ; // this will remove one from the x

    // difference between ++x and x++ are -
    // x++ is post increment = this means it will make us use x then it will increase the value 
    // ++x is pre increment = it will increase the value first then will do the task    

    return 0;
}