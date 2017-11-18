#pragma once

#ifndef player_h



	#include <string>
	#include <iostream>
	using namespace std;



	class Player
	{
	public:
		std::string name;

		Player();
		~Player();

		void set_current_game(string str);
		void increase_score(int i);

	private:
		std::string current_game;
		int score;
	};



#endif // !player_h
