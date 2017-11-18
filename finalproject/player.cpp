#include "player.h"



Player::Player() {
	/*constructor*/
	name = "";
	current_game = "";
	score = 0;
}

void Player::set_current_game(string str) {
	current_game = str;
}

void Player::increase_score(int i) {
	score += i;
}