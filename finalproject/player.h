#pragma once

#ifndef player

	#include <string>



	class Player
	{
	public:
		std::string name;

		Player();
		~Player();

	private:
		std::string current_game;
		int score;
	};



#endif // !player
