/*
    It will reverse positive number and even reverse the negative number.
    -   If number is positive, then, it follow the simple reverse algorithm.
    -   If number is negative, then, convert it into positive by multiplying it with -1, then, apply the same algorithm
        of positive reverse algorithm, also, maintain a boolean which will store the status as the number is positive 
        or negative, since its negative, we can multiply the resersed number by -1 after checking the boolean status.
    
*/

#include <bits/stdc++.h>

using namespace std ;

int main(){
    int number = -1234 ;
    int reverse = 0 ;
    bool negative = false ;

    if(number < 0){
        number = number * -1 ;
        negative = true ;
    }

    while(number > 0){
        int lastDigit = number % 10 ;
        reverse = reverse*10 + lastDigit ;
        number = number / 10 ;
    }
    if(negative){
        reverse = reverse * -1 ;
    }
    cout << "Reverse is: " << reverse << endl ;
    return 0;
}