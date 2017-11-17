/*
main game class
inherited by alphabeta and hangman
*/
#pragma once

#ifndef game

	#include <iostream>
	using namespace std;



	class Game
	{
	public:
		Game();
		~Game();

		virtual void won_lost();
		virtual void playgame();
		virtual void instructions();

	};



#endif // !game
