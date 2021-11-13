#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {-1, 0, 3, 2, 1, 5};
	int n = sizeof(A) / sizeof(int);

	int firstLargest  = INT_MIN;
	int secondLargest = INT_MIN;
	int thirdLargest  = INT_MIN;

	for(int i=0; i<n; i++) {
		if(A[i] > firstLargest) {
			thirdLargest = secondLargest;
			secondLargest = firstLargest;
			firstLargest = A[i];
		} else if(A[i] > secondLargest) {
			thirdLargest = secondLargest;
			secondLargest = A[i];
		} else if(A[i] > thirdLargest) {
			thirdLargest = A[i];
		} 
	}

	cout << "1st largest = " << firstLargest  << endl;
	cout << "2nd largest = " << secondLargest << endl;
	cout << "3rd largest = " << thirdLargest  << endl;


	return 0;
}