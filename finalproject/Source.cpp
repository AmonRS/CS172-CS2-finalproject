#include "hangman.h"
#include "alphabeta.h"
#include "win_lose.h"

int main() {
	//login
	login();

	//menu
	show_menu();
	int choice;

	switch (choice)
	{
	case 1:
		play_alpha_beta();
		break;
	case 2:
		play_hangman();
		break;
	case 3:
		play_other_game();
		break;
	case 4:
		change_player();
		break;
	case 5:
		byebye();
		break;
	default:
		break;
	}
}

void login() {
	//ask player name
}

void change_player() {
	login();
}

void show_menu() {
	//show menu
	//1. alphabeta
	//2. hangman
	//3. other game
	//4. change player
	//5. exit
}