#include <bits/stdc++.h>
#include <string.h>

using namespace std ;

int main(){

    cout << "Size of char is    - " << sizeof(char) <<" bytes." << endl ;
    cout << "Size of short is   - " << sizeof(short) <<" bytes." << endl ;
    cout << "Size of int is     - " << sizeof(int) <<" bytes." << endl ;
    cout << "Size of long is    - " << sizeof(long) <<" bytes." << endl ;
    cout << "Size of float is   - " << sizeof(float) <<" bytes." << endl ;
    cout << "Size of double is  - " << sizeof(double) <<" bytes." << endl ;
    cout << "Size of string is  - " << sizeof(string) <<" bytes." << endl ;

    //  Converting char 
    char c1 = 'A' ;
    short s1 = (short) c1 ;
    int i1 = (int) c1 ;
    long l1 = (long) c1 ;
    float f1 = (float) c1 ;
    double d1 = (double) c1 ;
    string str1 = to_string(c1);

    //  Coverting short
    short s2 = 65 ;
    char c2 = (char) s2 ;
    int i2 = (int) s2 ;
    long l2 = (long) s2 ;
    float f2 = (float) s2 ;
    double d2 = (double) s2 ;
    string str2 = to_string(s2) ;
 
    // Converting int 
    int i3 = 65 ;
    short s3 = (short) i3 ;
    char c3 = (char) i3 ;
    long l3 = (long) i3 ;
    float f3 = (float) i3 ;
    double d3 = (double) i3 ;
    string str3 = to_string(i3) ;

    // Coverting long
    long l4 = 65 ;
    char c4 = (char) l4 ;
    short s4 = (short) l4 ;
    int i4 = (int) l4 ;
    float f4 = (float) l4 ;
    double d4 = (double) l4 ;
    string str4 = to_string(l4) ;

    // Converting float
    float f5 = 65 ;
    char c5 =(char) f5 ;
    short s5 = (short) f5 ;
    int i5 = (int) f5 ;
    long l5 = (long) f5 ;
    double d5 = (double) f5 ;
    string str5 = to_string(f5) ;

    // Converting double
    double d6 = 65 ;
    char c6 = (char) d6 ;
    short s6 = (short) d6 ;
    int i6 = (int) d6 ;
    long l6 = (long) d6 ;
    float f6 = (float) d6 ;
    string str6 = to_string(d6) ;

    // Converting string
    string str7 = "65" ;
    char c7 = (char) stoi(str7) ;
    short s7 = (short) stoi(str7) ;
    int i7 = (int) stoi(str7) ;
    long l7 = (int) stoi(str7) ;
    float f7 = (float) stoi(str7) ;
    double d7 = (double) stoi(str7) ;

    return 0;
}