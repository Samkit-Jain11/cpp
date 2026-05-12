/*
// Method 1 - 
#include <iostream>
using namespace std ;

void sum(int a , int b ){
    // here , int a and int b are formal parameters 
    cout << a+b;
}

int main () {
    sum(7,90) ; // here , 7 and 90 are actual parameters 
}
// this concept is called pass by value , here the value are passed to a function 
*/
/*
// Method 2 - 

// Important - If a function is void type , then it can only be called 
// Important - Any function except void , that value can be stored , print etc . 
#include <iostream>
using namespace std ;

int sum(int a , int b ){
    return a+b; // here first a+b is calculated . when the function do its work it has to return a value
    // the function has two return something , so here the function will return the value 
}

int main () {
    cout<<sum(67,76) ; // here sum(67,76) is an integer 
}

// here sum(67,76) called itself . 67 passed in int a and 76 passed in int b 
*/