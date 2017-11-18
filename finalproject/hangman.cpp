/*
hangman
*/
#include "hangman.h"
#include "win_lose.h"



void show_game_menu() {
	cout << "\t1: Play " << endl;
	cout << "\t2: High Scores " << endl;
	cout << "\t3: How To Play " << endl;
	cout << "\t4: Exit " << endl;
	cout << "Select Option 1,2,3 or 4: ";
}

void Hangman::playgame() {
	length = getlength();

	while (won == false)
	{
		character = make_a_guess();

		evil_check();

		show_hanging_man();

		check_won_lost();
	}


}



void instructions() {
	/*hangman instructions*/
	cout << endl << endl;

	cout << "\t\t\tHow to play" << endl;
	cout << "1. You choose the length of the word(3 - 9)." << endl;
	cout << "2. You guess it." << endl;
}

int getlength() {
	//between 3 and 5
}

char make_a_guess() {
	//get a character
}

void evil_check() {
	//using vectors
}

void check_won_lost() {
	//win ?
	won();

	//lost?
	game_over();
}


void show_hanging_man() {
	//cout
}

