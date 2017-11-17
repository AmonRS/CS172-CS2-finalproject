#pragma once

#ifndef hangman

#include "game.h"

class Hangman: public Game
{
public:
	Hangman: Game();
	~Hangman: Game();

	void playgame();
	void instructions();
	void won();



private:
	int length;
	char character;
};


#endif // !hangman


