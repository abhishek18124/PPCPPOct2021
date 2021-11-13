#include<iostream>

using namespace std;

int main() {

	int A[] = {50, 40, 30, 20, 10};
	int n = sizeof(A) / sizeof(int);

	for(int i=1; i<n; i++) {
		// in the ith phase of the bubble sort algorithm we place the largest
		// element in the unsorted part of the array to its correct position. How ?

		// we compare the value at the jth idx with the value at the (j+1)th idx
		// such that 0<=j<n-i where n-i is the number of comparision that you perform
		// in the ith phase

		for(int j=0; j<n-i; j++) {
			if(A[j] > A[j+1]) {
				swap(A[j], A[j+1]);
			}
		}
	}

	for(int i=0; i<n; i++) {
		cout << A[i] << " ";
	}

	cout << endl;

	return 0;
}