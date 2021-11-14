#include<iostream>
#include<bitset>

using namespace std;

int main() {

	int A[] = {3, 2, 1};
	int n = sizeof(A) / sizeof(int);

	// iterate over 2^n numbers from 0 to 2^n-1
	for(int no=0; no<(1<<n); no++) {

		cout << no << " : " << bitset<3>(no) << " : ";
		// iterate over n-bit representation of the given no. from 
		// right to left starting from the 0th bit
		for(int k=0; k<n; k++) {
			// include the element at the kth index of the given arrray
			// to the subsequence in case the kth bit of given no. is set.
			if((no>>k)&1) {
				cout << A[k] << " ";
			}
		}

		cout << endl;

	}


	return 0;
}