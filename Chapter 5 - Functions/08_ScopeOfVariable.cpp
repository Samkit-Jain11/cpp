#include <iostream>
using namespace std ;

int main () {
    int i ;
    for (i = 1 ; i <= 5 ; i++){
        cout << i << endl ; 
    }
    cout << i ; // if i dont declare i in main functon and if it only declared 
    // in for loop then the scope of i is till for loop we cant access it after the loop
}