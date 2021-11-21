#include<iostream>

using namespace std;

// This will run in n^2 steps
int countPairs(int* A, int n, int t) {
	int count = 0;
	// iterate over all the starting indices of pairs
	for(int i=0; i<n-1; i++) {
		// iterate over all the ending indices of pairs
		for(int j=i+1; j<n; j++) {
			if((A[i]+A[j]) == t) {
				cout << "(" << A[i] << ", " << A[j] << ")" << endl;
				count++;
			}
		}
	}
	return count;
}

// This will run in n steps
int countPairsEfficient(int* A, int n, int t) {
	int count = 0;
	int i = 0;
	int j = n-1;

	while(i < j) {
		int sum = A[i] + A[j];
		if(sum > t) {
			j--;
		} else if(sum < t) {
			i++;
		} else {
			count++;
			i++;
			j--;
		}
	}

	return count;
}



int main() {

	int A[] = {1, 2, 3, 4, 5};
	int n = sizeof(A) / sizeof(int);
	int t = 6;

	cout << countPairs(A, n, t) << endl;

	return 0;
}