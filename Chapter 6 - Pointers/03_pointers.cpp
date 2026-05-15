/*
// To store address of ay data type we use pointers 

#include <iostream>
using namespace std ;

int main () {
    int x = 45 ;
    int* p ; // int* is a pointer and the name is p . this will sotore address 
    p = &x ; // &x means address of x 

    int y = 10 ;
    int* q = &y ; // alternate ways to write 

    cout << q ;
}
*/

// using derefernce operator we can access the value of the variable whose address is in the pointers 
// to print value in pointer address we can use *ptr , here ptr is the variable name 

#include <iostream>
using namespace std ;

int  main () {
    int x = 10 ;
    int* ptr = &x ; // this will store the address of pointer , we got address using &x and stored using int* ptr 

    int y = 13 ;
    int* abc = &y ;

    cout << *ptr << endl ; // this will print the value in pointer address
    cout << abc << endl ;
    cout << *abc ; // also known as star operator 
}