#pragma once

#ifndef hangman

#include "game.h"

class Hangman: public Game
{
public:
	Hangman: public Game();
	~Hangman: public Game();

	void playgame();
	void instructions();
	void won();



private:
	int length;
	char character;
};


#endif // !hangman


