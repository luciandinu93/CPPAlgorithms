#include <iostream>
using namespace std;

int search(int* a, int n, int v) {
	for(int i = 0; i < n; i++)
		if(a[i] == v)
			return i;
	return -1;
}

int main() {
	int a[6] = {31, 41, 59, 26, 41, 58};
	cout << "Index of value 26 is " << search(a, 6, 26) << endl;
} 