/*

Given a number n, count the minimum steps to reduce n to 1 such that at each 
step you may

	reduce n to n/2 if n is divisible by 2
	or reduce n to n/3 if n is divisible by 3
	or reduce n to n-1 by decrementing n by 1

Example :
	Input : n = 10
	Output : 3

	Input : 6
	Output : 2

*/

#include<iostream>
#include<vector>

using namespace std;

int minSteps(int n) {

	// base case
	if(n == 1) {
		return 0;
	}

	// recursive case

	int a = INT_MAX;
	if(n%2 == 0) {
		a = minSteps(n/2);
	}

	int b = INT_MAX;
	if(n%3 == 0) {
		b = minSteps(n/3);
	}

	int c = minSteps(n-1);

	return 1 + min(a, min(b, c));


}

int minStepsBottomUp(int n) {

	vector<int> dp(n+1); // 0th index is reserved

	dp[1] = 0;

	for(int i=2; i<=n; i++) {
		int a = INT_MAX;
		if(i%2 == 0) {
			a = dp[i/2];
		}
		int b = INT_MAX;
		if(i%3 == 0) {
			b = dp[i/3];
		}
		int c = dp[i-1];
		dp[i] = 1 + min(a, min(b, c));
	}

	return dp[n];

}

int main() {

	int n = 10;

	cout << minSteps(n) << endl;

	cout << minStepsBottomUp(n) << endl;
		
	return 0;
}






