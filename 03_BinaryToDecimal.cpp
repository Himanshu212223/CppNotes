#include <bits/stdc++.h>

using namespace std ;

int main(){
    int binary = 101 ;
    int decimal = 0 ;
    int power = 0 ;
    
    while(binary > 0){
        int lastDigit = binary % 10 ;
        decimal = decimal + pow(2, power) * lastDigit ;
        power += 1 ;
        binary = binary / 10 ;
    }

    cout << "Decimal is " << decimal << endl ;
    return 0 ;
}