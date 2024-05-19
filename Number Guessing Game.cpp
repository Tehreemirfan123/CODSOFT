
//"------------------------       NUMBER GUESSING GAME!       -------------------------" 
//                             Intern Name : TEHREEM IRFAN

#include<iostream>
#include<ctime>
#include<cstdlib>    // Includes pseudo-random number generation functions (rand() and srand()) 
using namespace std ;


// Generating random number by program :
int RandomNo () {
	
	int random ;
	// Random Number :
	srand ( time (0) ) ;
	random = 1 + rand () % 100 ;             // Any number from 1 - 100
	
	return random ;	
}


// Taking input as user guess :
int UserGuess () {
	
	int choice ;
	
	cout << " Guess any number from 1 - 100 : " ;
	cin >> choice ;

	while ( choice < 1 || choice > 100 ) {
		cout << " Please enter your choice from 1 - 100 only : " ;
		cin >> choice ;
	}
	
	return choice ;
}


// Function declarations  :
void NewgamePlayer () ;
void NewgameContinue ( char newgame ) ;

// Function comparing user guess and program random number :
void JudgeFunction ( int userchoice , int compchoice ) {
	
	/*  Let If user guess is 25 % higher than program random number , then it will
	                     will be considered too high */
    double tooHigh = compchoice * 1.25 ;
    
    
    /*  Let If user guess is 25 % lower than program random number , then it will
	                     will be considered too low */
    double tooLow = compchoice * 0.75 ;
    
    
	if ( compchoice < userchoice) {
		if ( userchoice > tooHigh ) {
			cout << " \n\t Your guess is too high ! " ;
		}
		
		else {
	cout << " \n\t Your guess is higher ! You may try again " ; 
	}
	}
	
	else if ( compchoice > userchoice ) {
		if ( userchoice < tooLow ) {
			cout << "\n\t Your choice is too low! " ;
		} 
		
		else {
		cout << " \n\t Your choice is lower ! You may try again " ;
	}
	}
	
	else {
		cout << " \n\t Congratulations! You guessed it correct!! " ;
	}
	
	cout << endl ;
	
	char newgame ;
	cout << " \n\n Do you wanna play again ?? \n Enter (Y/y) for Yes or (N/n) for No : " ;
	cin >> newgame ;

    NewgameContinue ( newgame ) ;
    
	return ;
}


// A function to continue or exit the game :
void NewgameContinue ( char option ) {
	
	if ( option == 'y' || option == 'Y' ) {
    	NewgamePlayer () ;
	}
    
    else if ( option == 'n' || option == 'N' ){
    	return ;
	}
	
	else {
		
		cout << " You can only enter Y/y or N/n : " ;
	    cin >> option;
		
		NewgameContinue ( option ) ;
	}
	
	return ;
}


// Function plays a new game if user wants to :
void NewgamePlayer () {
	
	cout << endl ;
	int CompChoice = RandomNo () ;
	int UserChoice = UserGuess () ;
	
	cout << " \n\t Program generates :   " << CompChoice << endl ;
	cout << " \t You guessed : " << UserChoice << endl ;
	
	JudgeFunction ( UserChoice , CompChoice ) ;
	
	return ;
}


int main () {
	
	cout << "------------------------------------------       NUMBER GUESSING GAME!       -------------------------------------------" ;
	cout << endl ;
	
	int CompChoice = RandomNo () ;
	int UserChoice = UserGuess () ;
	
	cout << " \n\t Program generates :   " << CompChoice << endl ;
	cout << " \t You guessed : " << UserChoice << endl ;
	
	JudgeFunction ( UserChoice , CompChoice ) ;
	
	return 0 ;
}
