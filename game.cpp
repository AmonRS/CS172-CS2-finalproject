#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>

using namespace std;

void hangman();
string getWord();

int main() {
	hangman();
}

void hangman() {
	string word = getWord();
	int len = word.length();
	string w = "";
	//creating word full of '*' of length of the original word
	for (int i = 0; i < len; i++) {
		w += '*';
	}

	srand((unsigned int)std::time(0));

	int count = 0;
	while (count < 6) {
		cout << "\n";
		//check to see if user won
		if (w == word) {
			cout << "CONGRATULAITONS!\n";
			return;
		}
		char choice;
		//asking for choice
		cout << "Word: " << w << endl;
		cout << "Guesses remaining: " << 5 - count << endl;
		cout << "Enter a letter: ";
		cin >> choice;

		int check = 0;
		
		//check to see if the letter entered is in the word
		for (int i = 0; i < len; i++) {
			if (word[i] == choice) {
				check++;
				w[i] = choice;
			}
		}
		if (check == 0){
			cout << "Sorry, not in the word.\n";
			//evil because the life decreases randomly
			int c = int(rand()) % 4;
			count+=c;
		}
		else
			cout << "Great!\n";
	}
	cout << "You did not win, sorry!\n";
}

string getWord() {
	ifstream fin;
	//opening the text file full of words
	fin.open("dict.txt");

	//list to store all words
	vector <string> list;
	string line;
	
	//storing every word to list
	while (getline(fin, line))
		list.push_back(line);
	
	//randomly choosing a word from that list
	return list[int(rand()) % list.size()];
}