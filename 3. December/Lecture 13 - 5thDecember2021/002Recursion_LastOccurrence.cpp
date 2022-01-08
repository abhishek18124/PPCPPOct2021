#include<iostream>

using namespace std;

int f(int* A, int t, int i) {
	// base case
	if(i == -1) {
		// you are trying to search for the index of the last occ. of the target
		// in the subarray that ends at the -1th index i.e A[0...-1],
		// and this can be treated like an empty subarray
		return -1;
	}
	
	// recursive case

	if(A[i] == t) {
		// you've found the target at the ith index, so you are done
		return i;
	}
	
	// Ask your friend to search for the 't' in A[0....i-1]
	return f(A, t, i-1);
	
}

int main() {

	int A[] = {10, 20, 30, 40, 10, 10, 50};
	int n = sizeof(A) / sizeof(int);
	int t = 100;

	cout << f(A, t, n-1) << endl;

	return 0;
}