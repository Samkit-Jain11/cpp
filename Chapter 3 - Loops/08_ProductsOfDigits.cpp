// Product of digits of a given number 

#include <iostream>
using namespace std ;

int main () {
    int n , product = 1 , a ;
    cin >> n ;

    while (n!=0){
        a = n%10 ; // will give us the last digit 
        n = n/10 ; // this will reduce the size of number which here is n 
        product*=a ;
    }
    cout << product ;
}