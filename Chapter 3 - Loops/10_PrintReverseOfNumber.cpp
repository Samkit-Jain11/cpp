// Print reverse of a given number 

#include <iostream>
using namespace std ;

int main () {
    int n , ld , reverse = 0 ;
    cin >> n;
    while(n!=0){
        ld = n % 10 ;
        reverse = reverse * 10 + ld ;
        n = n/10 ;
    }
    cout << reverse ;
}
