#include<iostream>
#include<climits>

using namespace std;

int main() {

	int A[] = {-1, -2, 10, 20, 30};
	int n = sizeof(A) / sizeof(int);

	int firstLargest  = INT_MIN;
	int secondLargest = INT_MIN;
	int thirdLargest  = INT_MIN;
	int firstSmallest = INT_MAX;
	int secondSmallest= INT_MAX;

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

		if(A[i] < firstSmallest) {
			secondSmallest = firstSmallest;
			firstSmallest = A[i]; 
		} else if(A[i] < secondSmallest) {
			secondSmallest = A[i];
		}
	}

	cout << "1st largest = " << firstLargest  << endl;
	cout << "2nd largest = " << secondLargest << endl;
	cout << "3rd largest = " << thirdLargest  << endl;

	cout << "1st smallest = " << firstSmallest  << endl;
	cout << "2nd smallest = " << secondSmallest << endl;

	int prod1 = firstLargest * secondLargest * thirdLargest;
	int prod2 = firstLargest * firstSmallest * secondSmallest;

	cout << "The maximum product of a triplet = " << max(prod1, prod2) << endl;

	return 0;
}