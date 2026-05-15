#include <iostream>
using namespace std ;

void swap(int* a , int* b){ // this takes input of address and stores in int* a and int* b
    int temp = *a ; // in temp a we stored *a , this means it will print the value of the stored pointer address 
    *a = *b ;
    *b = temp ;
}

int main () {
    int x = 10 , y = 67 ;
    cout << x << " " << y << endl ;
    swap(&x,&y) ; /// this sahred the address 
    cout << x << " " << y << endl ;
}