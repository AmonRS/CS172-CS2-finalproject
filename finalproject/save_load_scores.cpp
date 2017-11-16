/*
for saving and loading scores from text file.
*/

#include "save_load_scores.h"

void save_score() {
	//write new high-score to file
	///string path = "\\\\cs1\\students\\2021\\asthapit21\\CS171-1\\CS171_FINAL_PROJECT\\code\\alphabeta\\alphabeta\\highscores.txt";
	ofstream myfilewrite;

	myfilewrite.open(path, ios::out | ios::app);  //open file

												  //myfilewrite << "high-score....\n";  //write score to file
	myfilewrite << name << " - " << p1.player_number_of_moves << "\n";   //write

	myfilewrite.close();   //close file
}

void load_score() {
	//show high-scores in file
	cout << endl << endl;

	///string path = "\\\\cs1\\students\\2021\\asthapit21\\CS171-1\\CS171_FINAL_PROJECT\\code\\alphabeta\\alphabeta\\highscores.txt";
	string var = "";
	ifstream myfileread;

	myfileread.open(path, ios::in);			//open file

	while (getline(myfileread, var)) {
		cout << var << endl;			//output scores stored in file
	}

	myfileread.close();			//close file

	cout << endl << endl;
}