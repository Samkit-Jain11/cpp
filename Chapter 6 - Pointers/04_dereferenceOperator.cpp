#include <iostream>
using namespace std ;

int main () {
    int x = 10 ;
    int* ptr = &x ;
    cout << *ptr << endl;

    // we can update value of x in two ways - one directly x = 18 or what so ever
    // other method using dereference operator 

    *ptr = 67 ; // this update the value of x . *ptr is used to access coontent on the prt address 
    cout << x ;

}