#include <iostream>
using namespace std ;

void greet () {
    cout << "Good Morning" << endl ;
    cout << "How are you?" << endl ;
}
void india () {
    cout << "You are in India . " << endl ;
}
void usa () {
    cout << "you are in USA . " << endl ;
}
int main () { // it can only be called once 
    // greet() ; // This is knows as function call or call
    // cout << "hello \n" ;
    // greet () ;

    // return is used in function if worked it will immediately close the function 

    cout << "You are in main . " << endl ;

    usa () ;
    india () ;
    return 0 ;
}