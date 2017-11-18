#include "alphabeta.h"
#include <iostream>
#include <string>
using namespace std;



void AlphaBeta::show_game_menu() {
	//main menu														// x = user choice
	cout << "\t1: Play " << endl;
	cout << "\t2: High Scores " << endl;
	cout << "\t3: How To Play " << endl;
	cout << "\t4: Exit " << endl;
	cout << "Select Option 1,2,3 or 4: ";
	
	string x = " ";
	cin >> x; //input

	while (!(x == "1" || x == "2" || x == "3" || x == "4"))
	{
		cout << "Option Invalid, Please Enter Valid Option: ";   //invalid input
		cin >> x;
	}

	if (x == "1") {
		playgame();
	}
	else if (x == "2") {
		//show_high_scores();
	}
	else if (x == "3") {
		instructions();
	}
	else {
		//gameover();
		cout << "~ bye ~" << endl;
	}
}



void AlphaBeta::playgame() {

}

void AlphaBeta::instructions() {
	/*alphabeta instructions*/
	cout << endl << endl;

	cout << "\t\t\tHow to play" << endl;
	cout << "1. You choose the length of the number(3 - 9)." << endl;
	cout << "2. A random number of that length is generated with unique digits." << endl;
	cout << "3. You try to guess that number." << endl;
	cout << "4. You get 'alpha's for every digit that you guess correctly - that is in the number and in that specific place." << endl;
	cout << "5. You get 'beta's for every digit that you guess correctly - that is in the number but in a different place." << endl;
	cout << "6. You win when you correctly guess the entire number." << endl;
	cout << "7. Simple as that." << endl;

	cout << endl << endl;
}

void AlphaBeta::won_lost() {

}