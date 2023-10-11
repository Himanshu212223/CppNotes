#include <bits/stdc++.h>

using namespace std ;

int main(){
    int decimal = 876 ;

    //  Decimal to Hexa
    string hexa = "" ;
    while(decimal > 0){
        int remainder = decimal % 16 ;
        if(remainder >= 10){
            char ch = 'A' + (remainder - 10);
            hexa = ch + hexa ;
        }
        else{
            char ch = '0' + remainder ;
            hexa = ch + hexa ;
        }
        decimal = decimal / 16 ;
    }
    cout << "Hexa Decimal " << hexa << endl ;

    // Hexa to Decimal Conversion
    int count = 0 ;
    // int decimal = 0 ;
    int multiplier = pow(16, hexa.length()-1) ;
    while(count < hexa.length()){
        char ch = hexa[count] ;
        if(ch >= '0' && ch <= '9'){
            decimal = decimal + (multiplier * (int)(ch - '0')) ;
        }
        else{
            int value = ch - 'A' + 10 ;
            decimal = decimal + multiplier * value ;
        }
        multiplier /= 16 ;
        count ++ ;
    }
    cout << "Decimal " << decimal << endl ;
    return 0;
}