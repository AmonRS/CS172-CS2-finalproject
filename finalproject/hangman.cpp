/*
hangman
*/
#include "hangman.h"
#include "win_lose.h"




void play_hangman() {
	length = getlength();

	while (win == false)
	{
		character = make_a_guess();

		evil_check();

		show_hanging_man();

		check_won_lost();
	}


}



void how_to() {
	//instructions
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

