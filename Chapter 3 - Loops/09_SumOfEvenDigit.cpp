// Sum of only even digit of a number 

#include <iostream>
using namespace std ;

int main () {
    int n , ld , sum = 0 ;
    cin >> n ;
    while (n!=0){
        ld = n%10 ;
        n = n /10 ;
        if(ld%2==0){
            sum += ld ;
        }
    }
    cout << sum ;
}