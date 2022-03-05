/*

Given an integer array 'nums', return the length of the longest increasing subsequence.

A subsequence is a sequence that can be derived from an array by deleting some or no elements without 
changing the order of the remaining elements. 

Example 1:
	Input: nums[] = [10, 9, 2, 5, 3, 7, 18]
	Output: 4
	Explanation: The longest increasing subsequence is [2, 5, 7, 18], therefore the output is 4.

Example 2:
	Input: nums[] = [0,1,0,3,2,3]
	Output: 4
	Explanation: The longest increasing subsequence is [0, 1, 2, 3], therefore the output is 4.
*/


#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int lis_k(vector<int> A, int n, int i) {
	// base case
	if(i == n-1) {
		return 1;
	}

	// recursive case
	int ans = INT_MIN;
	for(int j=i+1; j<=n-1; j++) {
		if(A[j] >= A[i]) {
			ans = max(ans, lis_k(A, n, j));
		}
	}

	return ans == INT_MIN ? 1 : 1 + ans;

}

int lis(vector<int> A, int n) {
	int finalAns = INT_MIN;
	for(int k=0; k<=n-1; k++) {
		finalAns = max(finalAns, lis_k(A, n, k));
	}
	return finalAns;
}

int lis_bottomUp(vector<int> A, int n) {

	vector<int> dp(n);

	dp[n-1] = 1;
	for(int i=n-2; i>=0; i--) {
		int ans = INT_MIN;
		for(int j=i+1; j<=n-1; j++) {
			if(A[j] >= A[i]) {
				ans = max(ans, dp[j]);
			}
		}
		dp[i] = ans == INT_MIN ? 1 : 1 + ans;
	}

	int finalAns = INT_MIN;
	for(int i=0; i<n; i++) {
		finalAns = max(finalAns, dp[i]);
	}

	return finalAns;

}


int main() {

	vector<int> A = {10, 9, 2, 5, 3, 7, 18};
	int n = A.size();
	cout << lis(A, n) << endl;
	cout << lis_bottomUp(A, n) << endl;
	
	return 0;
}