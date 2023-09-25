#include <bits/stdc++.h>

using namespace std ;

int main(){
    string str ;

    //  Below mething wouldn't be able to take space as input.
    cout << "Enter something : " ;
    cin >> str ;
    cout << str ;

    cout << endl ;

    //  Below mething would be able to take space as input.
    cout << "Enter something new : " ; 
    getline(cin, str) ;
    cout << str ;
    return 0 ;
}