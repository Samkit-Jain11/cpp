/*
// First basic problem , this will print hello world for the given number 
#include <iostream>
using namespace std ;

int main () {
    for (int i = 1 ;i <= 10 ; i ++ ){
        cout << "Hello World!" << endl ;
    }
    
    return 0 ; 
}
*/
/*
// Print hello world 'n' number of times , take n from user 

#include <iostream>
using namespace std ;

int main () {
    int n ;
    cin >> n ;

    for (int i = 1 ; i <=n ; i ++ ){
        cout << "Hello World" << endl ; 
    }

    return 0 ;
}
*/
/*
// Print number from 1 to 100 
#include <iostream>
using namespace std;

int main () {
    for (int i = 1 ; i <=100 ; i++ ){
        cout << i << endl ;
    }
    return 0 ;
}
*/
/*
// Print all evem numbers from 1 to 100 
#include <iostream>
using namespace std ;

int main () {
    // Method 1 ) This will require more time and memory , since the loop here is running 100 time - 
    // for (int i = 1 ; i <= 100 ; i++){
    //     if (i%2==0){
    //         cout << i << endl ;
    //     }
    // }

    // Method 2 - require less time and memory , since the loop here is running 50 times 
    // for ( int i = 2 ; i <=100 ; i = i + 2 ){
    //     cout << i << " " ;
    // }
    return 0 ; 
}
*/
/*
// Print all odd numbers from 1 to 100 
#include <iostream>
using namespace std ;

int main () {
    // Method 1 - This will require more time and memory -
    // for (int i = 1 ; i <= 100 ; i++){
    //     if (i%2!=0){
    //         cout << i << endl ;
    //     }
    // }
    // Method 2 - This will require less time and memory 
    for (int i = 1 ; i <=99 ; i = i + 2 ){
        cout << i << " " ;
    }
    return 0 ; 
}
*/
/*
//Print the table of 19 

#include <iostream>
using namespace std ;

int main () {
    for (int i = 1 ; i <= 10 ; i ++){
        cout << "19*"<<i<<" = " << (19*i) << endl ;
    }
    return 0 ; 
}
*/
/*
// Display this AP - 1 , 3 , 5 , 7 , ..... , upto n . n should be input from user 

#include <iostream>
using namespace std ;

int main () {
    int n ;
    cin >> n ;

    int a = 1 ;
    for (int i = 1 ; i <= n ; i ++){
        cout << a << endl ;
        a = a + 2 ; 
    }

    return 0 ; 
}
*/
/*
// Print this GP - 1 , 2 , 4 , 8 , 16 , ...... , n . n is input from user 

#include <iostream>
using namespace std ;

int main () {
    int n ;
    cin >> n ;

    int a = 1 ;

    for (int i = 1 ; i <= n ; i++){
        cout << a << endl ;
        a*=2 ;
    }

    return 0 ;
}
*/
/*
// Find highest factor of a number n , other than n itself

#include <iostream>
using namespace std ;

int main () {
    int n ;
    cin >> n ;

    int v = 1 ; // it will store factor 

    //Method 1 - It will require more memory and time (not good way to solve problem) -
    // for (int i = 1 ; i < n ; i ++ ){
    //     if (n%i==0){
    //         v = i ;
    //     }
    // }
    
    // Method 2 - 
    for (int i = n/2 ; i>=1 ; i --){
        if(n%i==0){
            cout<< i << " " ;
            break ; // break will stop the loop imediately 
        }
        // break ; why no break here , it will break the loop in first iteration only so if you are not able to find the factor in first attempt then the loop will not work 
    }
    // cout << v ;
    return 0 ;
}
*/
/*
//Check if the number is composite or not {composite numbers - numbers which can be divided my number itself , 1 and other }

#include <iostream>
using namespace std ;
int main () {
    int n ;
    cin >> n ;

    for ( int i = n/2 ; i > 1 ; i -- ){
        if (n%i==0){
            cout << "Number is compostite ." ;
            break ;
        }
    }
    return 0 ;
}
*/
/*
// Check if the number is prime or composite 

#include <iostream>
using namespace std ;

int main () {
    int x ; 
    cin >> x ;

    bool flag = true ; // assume number is prime 

    for (int i = x/2 ; i >1 ; i-- ){
        if(x%i==0){
            flag = false ; // number becomes comosite 
            break;
        }
    }
    if(x==1) cout <<"Neither prime nor composite " ;
    else if(flag == true ) cout << "Prime" ;
    else cout << "Composite" ;

    return 0 ;
}
*/
/*
// Print odd number from 1 to 100 using continue 

#include <iostream>
using namespace std ;

int main () {
    for (int i = 1 ; i <=100 ; i++){
        if(i%2==0){
            continue;
        }
        else cout << i << " " ;
    }
    return 0 ;
}
*/