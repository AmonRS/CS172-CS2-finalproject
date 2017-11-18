#pragma once

#ifndef hangman_h



	#include "game.h"



	class Hangman: public Game
	{
	public:
		Hangman() : Game() {
			//constructor
		}
		~Hangman();

		void show_game_menu();
		void playgame();
		void instructions();
		void won_lost();

		void show_hanging_man();
		char make_a_guess();
		int getlength();

	private:
		bool won;
		int length;
		char character;
	};



#endif // !hangman_h


