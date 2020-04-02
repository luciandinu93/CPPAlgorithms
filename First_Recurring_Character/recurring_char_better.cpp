// better code for reccuring_char.cpp
#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <utility>
using namespace std;

char recurring_char(const string& s) {
	map<const char, int> stored_chars;
	for(const auto& c : s) {
		if(stored_chars.find(c)->second == 1)
			return c;
		else 
			stored_chars.insert(pair<const char, int>(c, 1));
	}
	return '0';
}

int main() {
	string line;
	ifstream fs("input.txt");
	
	if(fs.is_open()) {
		while(getline(fs, line)) {
			char first = recurring_char(line);
			cout << "First recurring char from \"" << line << "\" is: " << first << endl;
		}
	} else {
		cerr << "Could not open the file" << endl;
	}
}