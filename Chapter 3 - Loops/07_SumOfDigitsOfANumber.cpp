// Sum of a digits of a number 

#include <iostream>
using namespace std ;

int main () {
    int n , a , sum = 0 ;
    cin >> n ;

    while(n!=0){
        a = n % 10 ;
        n = n/10 ; // also written as n/=10 
        sum = sum + a ;
    }
    cout << sum ;
}