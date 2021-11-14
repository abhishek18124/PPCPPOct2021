#include<iostream>
#include<bitset>

using namespace std;

int main() {

	int A[] = {10, 20, 30, 40, 50};
	int n = sizeof(A) / sizeof(int);

	// iterate over all the possible starting indices i
	for(int i=0; i<n; i++) {
		// iterate over all the possible endices j
		for(int j=i; j<n; j++) {
			// at this point you have starting index i and an ending index j
			// therefore you can uniquely idenify a subarray
			// cout << i << " " << j << endl;
			for(int k=i; k<=j; k++) {
				cout << A[k] << " ";
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}