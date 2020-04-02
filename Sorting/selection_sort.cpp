#include <iostream>
using namespace std;

void selection_sort(int *A, int n) {
	int temp, min = 0;
	for(int i = 0; i < n-1; i++) {
		min = i;
		for(int j = i + 1; j < n; j++) {
			if(A[min] > A[j]) 
				min = j;
		}
		temp = A[i];
		A[i] = A[min];
		A[min] = temp;
	}
}

int main() {
	int n;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
	selection_sort(A, n);
	for(int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}