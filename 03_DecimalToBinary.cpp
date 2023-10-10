#include <bits/stdc++.h>

using namespace std ;

int main(){
    int decimal = 9 ;

    //  Decimal to Octal
    int octal = 0 ;
    int multiple10 = 1 ;
    while(decimal > 0){
        int remainder = decimal % 8 ;
        octal = remainder * multiple10 + octal ;
        multiple10 *= 10 ;
        decimal = decimal / 8 ;
    }   
    cout << "Octal is " << octal << endl ;

    //  Octal to Decimal
    int multiple8 = 1 ;
    while(octal > 0){
        int lastDigit = octal % 10 ;
        decimal = lastDigit * multiple8 + decimal ;
        multiple8 *= 8 ;
        octal = octal / 10 ;
    }
    cout << "Decimal is " << decimal << endl ;
    return 0 ;
}