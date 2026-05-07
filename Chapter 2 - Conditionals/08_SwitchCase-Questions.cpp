// Take input of 2 integers from user and 1 character (+ , - , / , *) abd solve the problem using swithc statements 

#include <iostream>
using namespace std ;

int main() {
    int n1 , n2 ;
    char op ; // here , op is operator 
    cin >> n1 >> n2 >> op ;

    switch(op){
        case '+':
            cout<<n1+n2 << endl ;
            break ; 
        case '-':
            cout<<n1-n2 << endl ;
            break ; 
        case '*':
            cout<<n1*n2 << endl ;
            break ; 
        case '/':
            cout<<n1/n2 << endl ;
            break ; 
        default:
            cout<<"Invalid Operator";
    }
}