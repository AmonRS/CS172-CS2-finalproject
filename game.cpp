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
	for (int i = 0; i < len; i++) {
		w += '*';
	}

	srand((unsigned int)std::time(0));

	int count = 0;
	while (count < 6) {
		cout << "\n";
		if (w == word) {
			cout << "CONGRATULAITONS!\n";
			return;
		}
		char choice;
		cout << "Word: " << w << endl;
		cout << "Guesses remaining: " << 5 - count << endl;
		cout << "Enter a letter: ";
		cin >> choice;

		int check = 0;

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
	fin.open("dict.txt");

	vector <string> list;
	string line;

	while (getline(fin, line))
		list.push_back(line);

	return list[int(rand()) % list.size()];
}