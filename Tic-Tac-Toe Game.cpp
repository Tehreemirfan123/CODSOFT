
//"------------------------       TIC - TAC - TOE GAME!       -------------------------" 
//                            Intern Name : TEHREEM IRFAN

#include <iostream>
using namespace std ;

const int size = 3 ;
// Initializes array with spaces for displaying grid
char Board[size][size] = { {' ' , ' ' , ' '} , {' ' , ' ' , ' '}, {' ' , ' ' , ' '} } ;


void DisplayBoard() {
	
    for ( int i = 0 ; i < size ; ++i ) {
        for ( int j = 0 ; j < size ; ++j ) {
            cout << Board[i][j] ;
            
            if ( j < size - 1 ) {
            	cout << " | " ;
			}
            
        }
        cout << endl ;
        
        if ( i < size - 1 ) {
            cout << "--+---+--" << endl ;
		}	     
    }
    
    return ;
}


bool isValidMove( int row , int col ) {
	
    return row >= 0 && row < size && col >= 0 && col < size && Board[row][col] == ' ' ;
}


void UserInput( char player ) {
    int row , col ;
    
    while ( true ) {
        cout << " Player " << player << ", Please enter your move (enter the row and then column from 0 - 1 ): " ;
        cin >> row >> col ;
        
        if ( isValidMove ( row , col ) ) {
            Board[row][col] = player ;
            break ;
        } 
        
		else {
            cout << "Invalid move. Try again." << endl ;
        }
    }
}


bool CheckWinner( char player ) {
	
    // Check rows and columns
    for ( int i = 0 ; i < size ; ++i ) {
        if ( ( Board[i][0] == player && Board[i][1] == player && Board[i][2] == player ) ||
            ( Board[0][i] == player && Board[1][i] == player && Board[2][i] == player ) ) {
            	
            return true ;
        }
    }
    
    // Check diagonals of grid
    if ( ( Board[0][0] == player && Board[1][1] == player && Board[2][2] == player ) ||
        ( Board[0][2] == player && Board[1][1] == player && Board[2][0] == player ) ) {
        	
        return true ;
    }
    
    return false ;
}


bool isDraw() {
    for ( int i = 0 ; i < size ; ++i ) {
        for ( int j = 0 ; j < size ; ++j ) {
        	
            if ( Board[i][j] == ' ' ) {
            	return false ;
			}  
        }
    }
    
    return true ;
}


int main() {
	
	cout << "-----------------------------------------       TIC - TAC- TOE GAME!       ------------------------------------------" ;
	cout << endl ;
	
	
    char player = 'X' ;
    
    while ( true ) {
    	
    	cout << endl ;
    	cout << endl ;        // For space purpose
    	
        DisplayBoard() ;
        UserInput( player ) ;
        
        if ( CheckWinner( player ) ) {
            DisplayBoard () ;
            cout << "Player " << player << " wins!" << endl ;
            break ;
        }
        
        if ( isDraw() ) {
            DisplayBoard() ;
            cout << "The game is a draw!" << endl ;
            break ;
        }
        
        // Switch player for turn 
        player = ( player == 'X' ) ? 'O' : 'X' ;
    }
    
    return 0 ;
}
