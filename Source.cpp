#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
//prototypes
vector<string> generate();
void printVector(vector<string> nums);
pair<string, vector<string>> getAlphaBeta(vector<string> numbers, string guess);

int main() {
	vector<string> allNums;
	allNums = generate();
	//printVector(allNums);
	cout << "test" << endl;
	string guess = "";
	int tries = 0;
	pair<string, vector<string>> pp;
	while (tries <= 20) {
		cout << "make a guess: ";
		cin >> guess;
		pp = getAlphaBeta(allNums, guess);
		cout << "Alpha: " << pp.first[0] << " Beta:" << pp.first[1] << endl;
		printVector(allNums);
		cout << endl;

		allNums = pp.second;

		if (pp.first == "40") { //4alpha 0 beta 
			break;
		}
	}

}

vector<string> generate() {
	vector<string> nums;
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				for (int l = 0; l < 10; l++) {
					if (i != j && i != k && i != l && j != k && j != l && k != l) {
						string num = to_string(i * 1000 + j * 100 + k * 10 + l);
						nums.push_back(num);
					}
				}
			}
		}
	}
	return nums;
}

void printVector(vector<string> nums) {
	cout << nums.size();
	for (int i = 0; i < nums.size(); i++) {
		cout << nums.at(i) << " ";
	}
}

pair<string, vector<string>> getAlphaBeta(vector<string> numbers, string guess) {
	map <string, vector<string>> report;
	for (int index = 0; index < numbers.size(); index++) {
		string i = numbers.at(index);
		int position = 0, alpha = 0, beta = 0;
		for (int k = 0; k < 4; k++) { // find all alphas and betas of all  numbers generated
			char j = guess.at(k);
			if (i.find(j) != string::npos && i.at(position) == j) //if found and correct position
			{
				alpha++;
			}
			else if (i.find(j) != string::npos) { // if wrong  position  but found
				beta++;
			}
			position++;
		}
		string temp = to_string(alpha) + to_string(beta); //key
		if (report.count(temp)) {  //if key in the map
			vector<string> arr;
			arr = report.at(temp);
			arr.push_back(i);
			report[temp] = arr;
		}
		else {                        //make new key and push_back
			vector<string> diff_arr;
			diff_arr.push_back(i);
			report[temp] = diff_arr;
		}
	}

	string maxKey = "";
	int maxCount = 0;
	for (const auto &myPair : report) {
		maxCount = max(maxCount, static_cast<int>(myPair.second.size()));
	}
	for (const auto &myPair : report) {
		if (myPair.second.size() == maxCount) {
			maxKey = myPair.first;    //myPair contains both key and value
		}
	}
	return make_pair(maxKey, report[maxKey]);
}