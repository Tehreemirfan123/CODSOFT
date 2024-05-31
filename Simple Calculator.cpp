
//"--------------------------       SIMPLE CALCULATOR!       ---------------------------" 
//                              Intern Name : TEHREEM IRFAN

#include<iostream>
#include <string.h>
using namespace std ;


void FetchInput ( int &x , int &y ) {
	    
	cout << " \n\t Enter first number : " ;
	cin >> x ;
	
	cout << " \n\t Now enter second number : " ;
	cin >> y ;

	return ; 
}


void OperationFunc ( int op , int &x , int &y ) {
	
	double result = 0 ;
		
	switch ( op ) {
		
		case 1 :                                      // Addition case 
			result = ( x + y ) ; 
			break ;
		
		case 2 :                                     // Subtraction case
		    result = ( x - y ) ;
		    break ;
		
		case 3 :                                     // Multiplication case 
			result = ( x * y ) ; 
			break ;
			
		case 4 :     
		    if (y != 0 ) {                          // Division case
			    result = (1.0 * x ) / y ;
			}
			
			else {
				cout << " \n\t ERROR : Division by zero! " << endl ;
				return ;
			}
			
			break ;
			
		default :
			cout << " \n\t Not a valid choice" ;
			break ;
			
	}
	
	cout << " \n\t The result of your calculation is : " << result ;
	
	return ;
}


int main () {
	
	cout << "-------------------------------------------       SIMPLE CALCULATOR!       --------------------------------------------" ;
	cout << endl ;
	
	const char* Arr [ 5 ][ 2 ] = { 
	{ " Number " , " Operation " } , 
	{ " 1 " , " Addition " } ,
	{ " 2 " , " Subtraction " } , 
	{ " 3 " , " Multiplication " } ,
	{ " 4 " , " Division " } 
} ;
	
	int choice ;
	cout << " \n\n\t Enter one of the following numbers ( 1 - 4 ) to chose operations you want to perform :  " << endl ;
	cout << endl ;
	
	// Displays a table for user to chose from :
	for ( int i = 0 ; i < 5 ; ++ i ) {
		
		for ( int j = 0 ; j < 2 ; ++ j ) {
			
			cout << " \t\t\t " << Arr [i] [j] << "  " ;
		}
		
		cout << endl ;
	}
	
	cout << endl << " \t Enter here : " ;
	cin >> choice ;
	
	int x = 0 ;
	int y = 0 ;
	
	if( choice >= 1 && choice <= 4 ){
		
		FetchInput ( x , y ) ;
	}
	
	else {
		
		do {
		    cout << "You can only chose from 1 - 4 : " ;
		    cin >> choice ;
		    
	    } while ( choice < 1 || choice > 4 ) ;
	    
	    FetchInput ( x , y ) ;
	    
	}
	
	double result = 0 ; 
	if ( result == 0 ) {
		
	}
	else {
		
	}
	
	OperationFunc ( choice , x , y ) ;
		
	return 0 ;
}
