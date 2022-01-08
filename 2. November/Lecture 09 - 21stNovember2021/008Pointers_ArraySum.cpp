#include<iostream>

using namespace std;

int arraySum(int* A, int n) {
	int sum = 0;
	for(int i=0; i<n; i++) {
		sum += A[i];
	}
	return sum;
}


int main() {

	int A[] = {1, 2, 3, 4, 5};
	int n = sizeof(A) / sizeof(int);

	cout << arraySum(A, n) << endl;

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}