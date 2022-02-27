/*

You are packing for a vacation on the sea side and you are going to carry only one bag with 
capacity C (1 <= C <= 1000). You also have N (1<= N <= 1000) items that you might want to take 
with you to the sea side. Unfortunately you can not fit all of them in the knapsack so you will 
have to choose. For each item you are given its size and its value. You want to maximize the total 
value of all the items you are going to bring. What is this maximum total value?

Example :
	Input : N = 5, W = 4
			weights[] = {1, 2, 3, 2, 2}
			profits[] = {8, 4, 1, 5, 3}
	Output: 13

*/


#include<iostream>
#include<vector>

using namespace std;

int maxProfit(vector<int> weights, vector<int> profits, int N, 
	          int i, int w) {

	// base case
	if(i == N) {
		// compute the maximum profit when you've no 
		// more objects to consider
		return 0;
	}

	if(w == 0) {
		// compute the maximum profit when the capacity
		// of the knapsack is zero.
		return 0;
	}

	// recursive case

	if(weights[i] > w) {
		// exclude the ith object from the knapsack
		return maxProfit(weights, profits, N, i+1, w);
	}

	// you've to decide for the ith object if you want to
	// incl. it in the knapsack or exclude it from the 
	// knapsack

	// include the ith object

	int X = maxProfit(weights, profits, N, i+1, w-weights[i]);

	// exclude the ith object

	int Y = maxProfit(weights, profits, N, i+1, w);

	return max(profits[i]+X, Y);
}

int maxProfitBottomUp(vector<int> weights, vector<int> profits, 
		              int N, int W) {

	vector<vector<int>> dp(N+1, vector<int>(W+1));

	for(int w=0; w<=W; w++) {
		dp[N][w] = 0;
	}

	for(int i=0; i<=N; i++) {
		dp[i][0] = 0;
	}

	for(int i=N-1; i>=0; i--) {
		for(int w=1; w<=W; w++) {
			if(weights[i] > w) {
				// exlude the ith object
				dp[i][w] = dp[i+1][w];
			} else {
				// you've to decide whether to include or
				// exclude the ith object
				dp[i][w] = max(profits[i] + dp[i+1][w-weights[i]],
					           dp[i+1][w]);
			}

		}
	}

	return dp[0][W];

}

int main() {

	int N = 5;
	int W = 4;

	vector<int> weights = {1, 2, 3, 2, 2};
	vector<int> profits = {8, 4, 1, 5, 3};

	cout << maxProfit(weights, profits, N, 0, W) << endl;
	cout << maxProfitBottomUp(weights, profits, N, W) << endl;
 	
	return 0;
}