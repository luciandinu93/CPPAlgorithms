#include <iostream>
using namespace std;

int main() {
	char string[6] = "CABBA";
	char key;
	bool found = false;
	int pos = 6;
	for(int i = 0; i < 5; i++) {
		key = string[i];
		for(int j = i + 1; j < 5; j++) {
			if(key == string[j]) {
				found = true;
				if(j < pos)
					pos = j;
			}
		}
	}
	if(!found)
		cout << "NULL" << endl;
	else
		cout << string[pos] << endl;
}