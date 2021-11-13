#include<iostream>

using namespace std;

int main() {

	int A[] = {10, 0, 20, 1, 20, 2, 30};
	int n = sizeof(A) / sizeof(int);

	int target = 100;
	bool isFound = false; // I am assuming target is not present inside the array

	int i;

	for(i=0; i<n; i++) {
		if(A[i] == target) {
			// you've found the target at the ith index
			cout << target << " is found at index " << i << endl;
			isFound = true;
		}
	}

	if(isFound == false) {
		// you've not found the target in the given 
		cout << target << " is not found" << endl;
	}

	return 0;
}