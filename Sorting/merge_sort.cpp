#include <iostream>
using namespace std;

void merge(int* A, int p, int q, int r) {
	int n1, n2, i, j;
	n1 = q - p + 1;
	n2 = r - q;
	int L[n1 + 1], R[n2 + 1];
	for(i = 0; i < n1; i++) {
		L[i] = A[p + i -1];
	}
	for(j = 0; j < n2; j++) {
		R[j] = A[q + j];
	}
	L[n1 + 1] = 0;
	R[n2 + 1] = 0;
	i = 0;
	j = 0;
	for(int k = p; k < r; k++) {
		if(L[i] <= R[j]) {
			A[k] = L[i];
			i = i + 1;
		} else {
			A[k] = R[j];
			j = j + 1;
		}
	}
}

void merge_sort(int* A, int p, int r) {
	int q;
	if(p < r) {
		q = (p + r) / 2;
		merge_sort(A, p, q);
		merge_sort(A, q+1, r);
		merge(A, p, q, r);
	}
}

int main() {
	int n;
	cin >> n;
	int A[n];
	for(int i = 0; i < n; i++) {
		cin >> A[i];
	}
	merge_sort(A, 0, n);
	for(int i = 0; i < n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;
}