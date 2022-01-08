#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 0, 20, 1, 20, 2, 30};
	int n = sizeof(A) / sizeof(int);

	int target = 20;

	int ans = -1; // initally, we are assuming target is not present in the given array

	int i;

	for(i=0; i<n; i++) {
		if(A[i] == target) {
			// you've found the target at the ith index
			ans = i;
		}
	}

	cout << ans << endl;

	return 0;
}