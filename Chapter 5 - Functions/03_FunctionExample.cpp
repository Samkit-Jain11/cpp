#include <iostream>
using namespace std ;

void usa () {
    cout << "You are in usa" << endl ;
    return ;
}

void india () {
    cout <<"You are in india" << endl ;
    usa () ; // we can call one function in another function just make sure the called function should be above this
    return ;
}

int main () {
    cout << "You are in main " << endl ;
    india () ;
    return 0; 
}