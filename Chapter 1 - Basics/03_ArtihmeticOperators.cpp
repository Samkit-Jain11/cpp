#include <iostream>
using namespace std ;

int main () {
    // int cannot store numebrs with decimal numbers 
    // to store numbers with decimal we can use float  
    int x = 7 , y = 2 ;

    cout<< x+y<< endl;
    cout<< x-y<< endl;
    cout<< x*y<< endl;
    cout<< x/y<< endl; // issue , since the current both numbers are integer and 2 cant divide 7 therefore we will get the integer part of the number rather then the decimal part

    // here we can use % this it is called modulus operator this will give remainder , if two numbers are dicvided then modulus will give remainder
    
    return 0 ;
}