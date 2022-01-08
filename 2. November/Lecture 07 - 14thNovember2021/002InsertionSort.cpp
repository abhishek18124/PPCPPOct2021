#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 10, 30, 20};
	int n = sizeof(A) / sizeof(int);

	for(int i=1; i<n; i++) {
		// in the ith phase of the insertion sort we insert the first element
		// in the unsorted part of the array which is at the ith index to its
		// correct position in the sorted part of the array

		int key = A[i];

		// iterate over the sorted part of the array from right to left starting
		// from the (i-1)th index such that in the jth iteration we shift the value
		// at jth index to the (j+1)th index as long as A[j] > key and j >= 0;

		int j = i-1;
		while(j >= 0 && A[j] > key) {
			A[j+1] = A[j];
			j--;
		}

		// insert the key to the right of the jth element
		A[j+1] = key;
	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}