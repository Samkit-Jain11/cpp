/*
// Take input of 3 integers and print greatest of them without using mulltiple conditions 

#include <iostream>
using namespace std ;

int main () {
    int x , y , z ;
    cin >> x >> y >> z ;

    if (x>y){ // y can not be greatest
        if(x>z){
            cout << x << " is greatest." ;
        }
        else { // x < z this means z > x > y
            cout << z << " is greatest." ; 
        }

    }
    else { // y > x
        if (y>z) {
            cout << y << " is greatest.";
        }
        else { // y < z this means z > y > x
            cout << z << " is greatest." ;
        }
    }

    return 0 ;
}
*/
/*
// Take input of three integers and print smallest numbers 

#include <iostream>
using namespace std;

int main() {
    int x , y , z ;
    cin >> x >> y >> z ;

    if (x<y){ // y cannot be smallest 
        if (x<z){
            // x < z < y 
            cout << x << " is smallest " ;
        }
        else {
            // z < x < y 
            cout << z << " is smallest " ;
        }
    }
    else { // x > y this means x can not be smallest 
        if (y<z){
            // y < z < x
            cout << y << " is smallest " ;
        }
        else {
            // z < y < x 
            cout << z << " is smallest " ;
        }
    }

    return 0 ;
}
*/

