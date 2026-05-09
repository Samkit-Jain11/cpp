// in 'do while loop' the work will run atleast for a while 

#include <iostream>
using namespace std ;

int main () {
    int i = 11 ;
    do{
        cout << i << endl; // this block will run once , after that it will check the condition 
        i++ ;
    }while(i<=10);
    
    return 0 ;
}