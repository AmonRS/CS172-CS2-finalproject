#pragma once

#ifndef alphabeta_h



	#include "game.h"
	#include "win_lose.h"

	class AlphaBeta: public Game
	{
	public:
		AlphaBeta() : Game() {
			//constructor
		}
		~AlphaBeta();

		void show_game_menu();
		void playgame();
		void instructions();
		void won_lost();



	private:

	};




#endif // !alphabeta_h

