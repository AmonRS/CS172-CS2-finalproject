#pragma once

#ifndef game

class Game
{
public:
	Game();

	virtual void won_lost();
	virtual void playgame();
	virtual void instructions();

private:
	bool won;
};

#endif // !game
