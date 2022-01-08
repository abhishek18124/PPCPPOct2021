#include<iostream>

using namespace std;

int G[3]; // arrays declared in global scope have default values

int main() {

	int L[3]; // arrays declared in local scope have garbage values

	for(int i=0; i<3; i++) {
		cout << L[i] << " ";
	}

	cout << endl;

	for(int i=0; i<3; i++) {
		cout << G[i] << " ";
	}

	cout << endl;

	int A[5] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	int B[5] = {};
	int m = sizeof(B) / sizeof(int);

	for(int i=0; i<m; i++) {
		cout << B[i] << " ";
	}

	cout << endl;

	int C[] = {1, 2, 3, 4, 5}; // size during initialisation for arrays is optional
	int x = sizeof(C) / sizeof(int);

	cout << x << endl;

	for(int i=0; i<x; i++) {
		cout << C[i] << " ";
	}

	cout << endl;

	return 0;
}