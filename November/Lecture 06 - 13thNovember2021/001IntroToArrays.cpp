#include<iostream>

using namespace std;

int main() {

	int A[5];

	// cout << sizeof(A) << endl;

	int n = sizeof(A) / sizeof(int); // or sizeof(A) / sizeof(A[0]);

	// cout << n << endl;

	// read values inside the array

	for(int i=0; i<n; i++) {
		cin >> A[i];
	}

	// print values inside the array

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	// print values inside the array in reverse

	for(int i=n-1; i>=0; i--) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}