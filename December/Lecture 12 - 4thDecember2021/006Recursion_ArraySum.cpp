#include<iostream>

using namespace std;

int f1(int* A, int n, int i) {

	// base case
	if(i == n) {
		// here, you're trying to compute the sum of the subarray 
		// that starts from the nth index i.e. A[n.....n-1] which
		// can be thought of as an empty subarray
		return 0;
	}

	// recursive case

	// ask your friend to compute the sum of the subarray that 
	// starts from the (i+1)th index i.e. A[i+1....n-1]

	int X = f1(A, n, i+1);
	return A[i] + X;

}

int f2(int* A, int i) {

	// base case
	if(i == -1) {
		// here, you're trying to compute the sum of the subarray 
		// that ends at the -1th index i.e. A[0.....-1] which
		// can be thought of as an empty subarray
		return 0;
	}

	// recursive case

	// ask your friend to compute the sum of the subarray that 
	// ends at the (i-1)th index i.e. A[0.....i-1]

	int X = f2(A, i-1);
	return A[i] + X;
	
}

int f3(int* A, int s, int e) {
	// base case
	if(s > e) {
		// here, you're trying to compute the sum of an empty subarray 
		return 0;
	}

	if(s == e) {
		// here, you're trying to compute the sum of an subarray A[s...s]
		// or A[e...e] i.e. a subarray composed of a single element A[s]
		// A[e]
		return A[s]; // or A[e]
	}

	// recursive case

	int m = (s+e)/2; //  or use m = s+(e-s)/2 to avoid integer overflows

	// ask your friend to compute the sum of the subarray A[s....m]
	int X = f3(A, s, m);

	// ask your friend to compute the sum of the subarray A[m+1....e]
	int Y = f3(A, m+1, e);

	return X+Y;

}


int main() {

	int A[] = {1, 2, 3, 4, 5};
	int n = sizeof(A) / sizeof(int);

	cout << f1(A, n, 0) << endl;
	cout << f2(A, n-1) << endl;
	cout << f3(A, 0, n-1) << endl;

	return 0;
}