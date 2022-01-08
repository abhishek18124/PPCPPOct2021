#include<iostream>
#include<climits>

using namespace std;

// // Approach 1 - n^3

// int computeMaximumSubarraySum(int A[], int n) {
// 	int maxSubarraySum = INT_MIN;
// 	int start = -1;
// 	int end = -1;
// 	for(int i=0; i<n; i++) {
// 		for(int j=i; j<n; j++) {
// 			int sum = 0;
// 			for(int k=i; k<=j; k++) {
// 				sum += A[k];
// 			}
// 			if(sum > maxSubarraySum) {
// 				maxSubarraySum = sum;
// 				start = i;
// 				end = j;
// 			}
// 		}
// 	}

// 	for(int i=start; i<=end; i++) {
// 		cout << A[i] << " ";
// 	}	
// 	cout << endl;

// 	return maxSubarraySum;
// }

// // Approach 2 - n^2 computations with no extra space

// int computeMaximumSubarraySum(int A[], int n) {
// 	int maxSubarraySum = INT_MIN;
// 	int start = -1;
// 	int end = -1;
// 	for(int i=0; i<n; i++) {
// 		int sum = 0;
// 		for(int j=i; j<n; j++) {
// 			sum += A[j];
// 			if(sum > maxSubarraySum) {
// 				maxSubarraySum = sum;
// 				start = i;
// 				end = j;
// 			}
// 		}
// 	}

// 	for(int i=start; i<=end; i++) {
// 		cout << A[i] << " ";
// 	}	
// 	cout << endl;

// 	return maxSubarraySum;
// }

// Approach 3 - n^2 computations with extra space (cumulative sum)

int computeMaximumSubarraySum(int A[], int n) {
	int csum[n+1] = {};
	for(int i=1; i<=n; i++) {
		csum[i] = csum[i-1] + A[i-1];
	}

	int maxSubarraySum = INT_MIN;
	int start = -1;
	int end = -1;
	
	for(int i=0; i<n; i++) {
		for(int j=i; j<n; j++) {
			int sum = csum[j+1] - csum[i];
			if(sum > maxSubarraySum) {
				maxSubarraySum = sum;
				start = i;
				end = j;
			}
		}
	}

	for(int i=start; i<=end; i++) {
		cout << A[i] << " ";
	}	
	cout << endl;

	return maxSubarraySum;
}


int main() {

	int A[] = {-4, 1, 3, -2, 6, -1, 4, -7};
	int n = sizeof(A) / sizeof(int);

	int sum = computeMaximumSubarraySum(A, n);

	cout << "Maximum Subarray Sum = " << sum << endl;

	return 0;
}