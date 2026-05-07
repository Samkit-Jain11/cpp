/*
// Check wheter the entred number is 3 digit or not

#include <iostream>
using namespace std;

int main() {
    int x ;
    cin >> x ;

    if (x > 99 and x < 1000 ) {  // here in place of 'and' we can use use '&&' 
        cout << "Number is 3 digit . " ;
    }
    else {
        cout << "Number is not 3 digit . " ;
    }

    // the use of 'and' here is it will check that if both condition is true , then only it will run the if block or else block will run 

    return 0;
}
*/

/*
// Check wheter the number is divisible by 5 or 3 

#include <iostream>
using namespace std ;

int main () {
    int x ;
    cin >> x ;

    if ( x % 5 == 0 or x % 3 == 0){ // here in place of 'or' we can use '||'
        cout << "The number is either divisible by 3 or 5 " ;
    }
    else { 
        cout << "The number is not divisible by 3 and 5 both " ;
    }

    // the use of 'or' here is it will check that even one condtion satisfies it will run the if block if both does not satisfy then only else block will get run 

    return 0 ;
}
*/
/*
// Take input of three numbers and print the greates numbers 

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
        cout << "Greatest number is: " << a;
    else if (b >= a && b >= c)
        cout << "Greatest number is: " << b;
    else
        cout << "Greatest number is: " << c;

    return 0;
}
 */
/*
// Take input of three nnumberss and pprint least of them 

#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a <= b && a <= c)
        cout << "Least number is: " << a;
    else if (b <= a && b <= c)
        cout << "Least number is: " << b;
    else
        cout << "Least number is: " << c;

    return 0;
}
*/
/*
// Take a positive integer and check if it divisible by 3 or 5 but not by 15 

#include <iostream>
using namespace std ;

int main () {
    int x ;
    cin >> x ;

    if ( (x % 5 == 0 or x % 3 == 0) and x % 15 != 0  ){
        cout << "Our give condition satisfies which is it is divisible by 3 or 5 but not by 15 " ;
    }
    else {
        cout << "The condition does not satisfy " ;
    }

    return 0; 
}
*/