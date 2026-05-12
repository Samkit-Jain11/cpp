/*
// Method 1 - 
#include <iostream>
using namespace std ;

int main () {
    int x = 2 ;
    int y = 5 ;

    cout << x << " " << y << endl ;

    int temp ;
    temp = x ;
    x = y ;
    y = temp ;

    cout << x << " "  << y ;
}
*/
/*
// Method 2 - 

#include <iostream>
using namespace std ;

int main () {
    int x = 5 , y = 2 ;
    cout << x << " " << y << endl;

    x = x+y ;
    y = x-y ;
    x = x-y ;

    cout << x << " " << y ;
} 
*/

//Method 3 - 

#include <iostream>
using namespace std ;

// void swap (int x , int y ) { // if i write this it is taking value of int x and int y 
//     // it will swap the value of int x and int y . not int x and int y
//     int temp = x;
//     x = y ;
//     y = temp ;

// }
// int main () {
//     int x = 15 , y = 45 ;
//     cout << x << " " << y << endl ;

//     swap (x , y) ;

//     cout << x << " " << y ; // so we will get the original value , to swap just use "&" after int in swap function
// }
// so the code becomes 

void swap (int& x , int& y) { // now the whole int x and int y will get here 
    int temp = x ;
    x = y ;
    y = temp ;
}

int main () {
    int x = 15 , y = 45 ;
    cout << x << " " << y << endl ;

    swap(x , y) ;
    cout << x << " " << y ;
}