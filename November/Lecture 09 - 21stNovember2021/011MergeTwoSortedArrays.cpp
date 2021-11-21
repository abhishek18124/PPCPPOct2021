#include<iostream>

using namespace std;

int main() {

	int A[] = {1, 3, 5};
	int n = sizeof(A) / sizeof(int);

	int B[] = {2, 4, 6, 7};
	int m = sizeof(B) / sizeof(int);

	int C[200]; // based on constraints, declare array size

	int i = 0; // iterate over array A
	int j = 0; // iterate over array B
	int k = 0; // iterate over array C

	while(i < n && j < m) {
		if(A[i] < B[j]) {
			C[k] = A[i];
			i++;
			k++;
		} else {
			C[k] = B[j];
			j++;
			k++;
		}
	}

	// will run only when B is exhausted
	while(i < n) {
		C[k] = A[i];
		i++;
		k++;
	}


	// will run only when A is exhausted
	while(j < m) {
		C[k] = B[j];
		j++;
		k++;
	}


	for(int i=0; i<m+n; i++) {
		cout << C[i] << " ";
	}

	cout << endl;



}