// Print sum on real number and its reverse ( not the digit but the number )

#include <iostream>
using namespace std ;

int main () {
    int n , reverse = 0 , ld ;
    cin >> n ;
    int a_num = n ;
    while (n!=0){
        ld = n % 10 ;
        reverse = reverse*10 + ld ;
        n = n/10 ;
    }
    cout << a_num + reverse ;

}