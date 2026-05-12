/*
// Method 1 - 
#include <iostream>
using namespace std ;

int fact(int r) {
    int f = 1 ;
    for (int k = 1 ; k <= r ; k++){
        f *= k ;
        
    }
    return f ;
}

int main () {
    int n ;
    cin >> n ;
    
    for (int i = 0 ; i <= n ; i ++ ){
        for (int j = 0 ; j <= i ; j ++ ){

            int a = fact(i) ;
            int b = fact(j) ;
            int c = fact (i - j) ;

            int comb = a / (b*c) ;
            cout << comb << " " ;
        }
        cout << endl ;
    }
}
*/

// Method 2 - 

#include <iostream>
using namespace std ; 

int fact (int x ) {
    int f = 1 ;
    for (int k = 1 ; k <= x ; k ++ ){
        f*=k ;
    }
    return f ;
}

int ncr (int n , int r ){
    int a = fact (n) ;
    int b = fact (r) ;
    int c = fact (n - r) ;
    
    return a / (b*c) ;
}

int main () {
    int n ;
    cin >> n ;

    for (int i = 0 ; i <= n ; i ++ ) {
        for (int j =0  ; j <= i ; j ++ ) {
            cout << ncr(i,j) << " " ;
        }
        cout << endl ;
    }
}