#include "hangman.h"
#include "alphabeta.h"
#include "player.h"


//global variables
Player *player1;

//prototypes
void welcome_screen();
void login();
void logout();
void change_player();
void show_menu();



int main() {
	//welcome screen
	welcome_screen();

	//login
	login();

	bool keep_playing = true;
	while (keep_playing==true)
	{
		//menu
		show_menu();
		int choice;
		cin >> choice;

		switch (choice)
		{
		case 1:
			//play alphabeta
			player1->set_current_game("AlphaBeta");
			AlphaBeta *alphabeta1 = new AlphaBeta;
			alphabeta1->show_game_menu();
			break;
		case 2:
			//play hangman
			player1->set_current_game("Hangman");
			Hangman *hangman1 = new Hangman;
			hangman1->show_game_menu();
			break;
		case 3:
			///play_other_game();
			break;
		case 4:
			change_player();
			break;
		case 5:
			keep_playing = false;
			///byebye();
			break;
		default:
			cout << "what ???" << endl;
			break;
		}
	}
}



void login() {
	/*new player object*/
	player1 = new Player;
	
	cout << "Player name : ";
	cin >> player1->name;
}

void logout() {
	/*delete player object*/
	(*player1).~Player();
	delete player1;
	player1 = NULL;
}

void change_player() {
	/*change current player*/
	logout();
	login();
}

void show_menu() {
	/*show menu*/
	system("cls"); //clearing screen

	cout << "~ menu ~" << endl;
	cout << "1. Play AlphaBeta" << endl;
	cout << "2. Play Hangman" << endl;
	cout << "3. Play some other game" << endl;
	cout << "4. Change Player" << endl;
	cout << "5. Exit" << endl;
}

void welcome_screen() {
	/*welcome screen*/
	system("cls"); //clearing screen

	cout << "Enter Coin To Start" << endl;
}