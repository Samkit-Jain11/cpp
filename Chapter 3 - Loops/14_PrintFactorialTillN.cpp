// Print factorial till n - lets say the n is 5 so print factorial of 1 , 2 , 3 , 4 , 5

#include <iostream>
using namespace std ;

int main () {
    int n , fact= 1 ; 
    cin >> n ; 
    for (int i = 1 ; i <= n ; i++) {
        fact = fact*i ;
        cout << i << "! = " << fact << endl ;
    }
}