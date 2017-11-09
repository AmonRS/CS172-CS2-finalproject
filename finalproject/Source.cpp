#include "hangman.h"
#include "alphabeta.h"
#include "win_lose.h"

int main() {
	//login
	login();

	//menu
	int choice;

	switch (choice)
	{
	case 1:
		play_alphabeta();
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

}

void change_player() {
	login();
}