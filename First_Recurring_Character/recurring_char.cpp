#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;

int main() {
	string s, temp_s;
	ifstream fs("input.txt");
	bool found = false;
	if(fs.is_open()) {
		while(getline(fs, s)) {
			temp_s = "";
			found = false;
			for(const auto& c : s) {
				if(temp_s.find(c) != string::npos) {
					cout << "First reccuring char is: " << c << endl;
					found = true;
					break;
				} else {
					temp_s.push_back(c);
				}
			}
			if(!found) {
				cout << "NULL" << endl;
			}
		}
	} else {
		cerr << "Could not open the file!" << endl;
	}
}