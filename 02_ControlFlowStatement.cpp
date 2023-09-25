#include <bits/stdc++.h>

using namespace std ;

int main(){
    
    //  if statement
    if(true){
        cout << "This condition is true " << endl ;
    }

    int number = 1 ;
		int a = 1 ;
		int b = 2 ;
		
		//	if-else statement
		//______________________________
		
		if(number == a) {
			cout << ("number is equals to a.") << endl;
		}
		else {
			cout << ("number is not euqals to a.") << endl ;
		}
		
		//	if - else if - else statement
		//______________________________
		
		if(number == a) {
			cout << ("number is equals to a.") << endl;
		}
		else if(number == b) {
			cout << ("number is equals to b.") << endl;
		}
		else {
			cout << ("number is neither equals to a nor equals to b.") << endl;
		}
		
		//	switch statement
		//______________________________
		
		switch(number) {
		case 1 : 
			cout << ("number is equals to a.") << endl;
			break;
		case 2 : 
			cout << ("number is equals to b.") << endl;
			break;
		default:
			cout << ("number is neither equals to a nor equals to b.") << endl;
			break;
		}
		
		//	for statement
		//______________________________
		
		int numbers[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9} ;
		
		for(int i=0; i < (sizeof(numbers)/sizeof(int)); i++) {
			cout << (i);
		}
		
        cout << endl ;
		
		//	while statement
		//______________________________
		
		int i = 0; 
		while(i < (sizeof(numbers)/sizeof(int))) {
			cout << (i);
            i++ ;
		}
        cout << endl ;
		
		//	do-while statement
		//______________________________
			
		int j = 0; 
		do{
			cout << (j) ;
            j++ ;
		}
		while(j < (sizeof(numbers)/sizeof(int))) ;
		
        cout << endl ;
		
		//	for each loop
		//______________________________
		
		for(int numb : numbers) {
			cout << (numb) ;
		}
        cout << endl ;
    
    return 0 ;
}