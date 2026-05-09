//Count digits of a number -

#include <iostream>
using namespace std ;

int main () {
    int n , count = 0 ;
    cin >> n ;

    while(n!=0){ // we use while loop because we dont know the nunmber of iteration 
        n = n / 10 ; // n = n/10 means we will remove the last digit every time 
        count ++ ;
    }   

    cout << count ;

}