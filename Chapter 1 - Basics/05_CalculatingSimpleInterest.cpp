#include <iostream>
using namespace std;

int main() {

    float principal_amount = 1000000 ;
    float interest_rate = 6;
    float time = 20 ;

    float simple_interest = (principal_amount * interest_rate * time ) /100 ;

    cout<< "The simple interest is " << simple_interest << endl ;
    return 0;

}