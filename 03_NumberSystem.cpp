#include <bits/stdc++.h>

using namespace std ;

int main(){
    /*
        Conversion of decimal to binary :-

        Ex - 
                    reminder
          _______
        2 | 12  |   0
          |_____|  
        2 | 6   |   0
          |_____|
        2 | 3   |   1
          |_____|
        2 | 1   |   1


        so, the required binary of 12 is reverse of reminder - ie, 1100

    */
    int numb = 15 ;
    int bits = 0 ;
    int counter = 1 ;
    
    while(numb > 0){
        int bit = numb % 2 ;
        bits = bit*counter + bits ;
        numb = numb / 2 ;
        counter *= 10 ;
    }

    cout << "Answer is : " << bits << endl ;
    return 0 ;
}