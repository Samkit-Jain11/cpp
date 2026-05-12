/*
// Combination -

#include <iostream>
using namespace std ;

int factorial(int x) {
    int f = 1 ;
    for (int i = 1 ; i <= x ; i++){
        f*=i;
    }
    return f ;
}

int main () {
    int n , r ;
    cin >> n >> r ;

    int a = factorial(n) ;
    int b = factorial(r) ;
    int c = factorial(n-r) ;

    cout << a/(b*c) ;
    return 0;
}
*/
/*
// Permutations -

#include <iostream>
using namespace std ;

int fact(int x){
    int f = 1 ;
    for (int i =1 ; i <= x ; i ++ ){
        f*=i ;
    }
    return f ;
}

int main () {
    int n , r ;
    cin >> n >> r ;

    int a = fact(n);
    int b = fact(n-r);

    cout << a/b ; 

}
*/
