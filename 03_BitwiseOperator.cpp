/*
    There are  types of Bitwise Operators -
    1. AND &
    2. OR  | 
    3. NOT ~
    4. XOR ^
    5. Left Shift <<
    6. Right Shift >>

    Using these operator, we can perform operations on bits.
*/

#include <bits/stdc++.h>

using namespace std ;

int main(){
    int a = 2 ;     //  0010 in bits
    int b = 3 ;     //  0011 in bits
    
    cout <<a << " & " << b << " = " << (a & b) << endl ;   //  This will perform AND operation on individual bits of a , b.

    cout <<a << " | " << b << " = " << (a | b) << endl ;   //  This will perform OR operation on individual bits of a , b.
    
    /*
        NOT operator just convert the 0 to 1 in bits.
        For Example, size of int is 4 bytes, that is 4x8 = 32 bits.
        
        so, value 3 in bits =   0000 0000 0000 0000 0000 0000 0000 0011

        so, ~3 value is     =   1111 1111 1111 1111 1111 1111 1111 1100

        but, since, 1st digit in above value is 1, which is used to represent -ve numbers.
        So, when we try to print ~3, it will 
        follow the following steps-
        Step - 1: Bit inversion (replacing 1 with 0 and vice versa)
        Step - 2: Taking 1's Complement of above received bits.
        Step - 3: Taking 2's Complement by adding 1 in above 1's Complement bits.

        So, to print ~3, 
        3 in bits is  0000 0000 0000 0000 0000 0000 0000 0011
        
        Step 1 : 1111 1111 1111 1111 1111 1111 1111 1100
        Step 2 : 0000 0000 0000 0000 0000 0000 0000 0011 ( with -ve)
        Step 3 : 0000 0000 0000 0000 0000 0000 0000 0011 + 1 = 0000 0000 0000 0000 0000 0000 0000 0100 ( with -ve)

        NOTE :- ~ just interchange the 1 with 0 and 0 with 1, the above Steps are performed just to print the value of ~.
    */

    cout << "~ 3 = " <<  (~3) << endl ;

    cout << a << " ^ " << b << " = " << (a^b) << endl ; 


    /*
        Left Shift Operator just shift the bit towards left direction.
        For Example,
        1 in bits   =   0000 0000 0000 0000 0000 0000 0000 0001
        1 << 1      =   0000 0000 0000 0000 0000 0000 0000 0010
        1 << 2      =   0000 0000 0000 0000 0000 0000 0000 0100     ie., shifting 1 towards left by 2 places.
    */

    cout << "1 << 1 = " << (1<<1) << endl ;
    cout << "1 << 2 = " << (1<<2) << endl ;

    /*
        RIght Shift Operator just shift the bit towards right direction.
        For Example,
        4 in bits   =   0000 0000 0000 0000 0000 0000 0000 0100
        4 >> 1      =   0000 0000 0000 0000 0000 0000 0000 0010
        4 >> 2      =   0000 0000 0000 0000 0000 0000 0000 0001     ie., shifting 1 towards right by 2 places.
    */

    cout << "4 >> 1 = " << (4>>1) << endl ;
    cout << "4 >> 2 = " << (4>>2) << endl ;

    return 0 ;
}