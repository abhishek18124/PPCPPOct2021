/*

Given an integer matrix 'mat' of dimensions m x n and an integer 't', write a program 
to search for 't' in 'mat'. 

If 't' is present in the matrix print its coordinates otherwise print (-1, -1).

Example :
	Input : mat[][] = [[1,  2,  3,  4],
					   [5,  6,  7,  8],
					   [9,  10, 11, 12],
					   [13, 14, 15, 16]]

			t = 10

	Output: (2, 1)

*/

#include<iostream>

using namespace std;

bool isPresent(int mat[][4], int m, int n, int t) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(mat[i][j] == t) {
				return true;
			}
		}
	}
	return false;
}

pair<int, int> matrixSearch(int mat[][4], int m, int n, int t) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			if(mat[i][j] == t) {
				// pair<int, int> p = {i, j};
				// return p;
				return {i, j}; // make_pair(i, j)
			}
		}
	}
	
	// pair<int, int> p = {-1, -1};
	// return p;
	return {-1, -1}; // make_pair(-1, -1)

}

int main() {

	int mat[][4]  = {{1,  2,  3,  4},
					 {5,  6,  7,  8},
					 {9,  10, 11, 12},
					 {13, 14, 15, 16}};

	int m = 4;
	int n = 4;

	int t = 10;

	isPresent(mat, m, n, t) ? cout << "true" << endl :
					          cout << "false" << endl;

	pair<int, int> result = matrixSearch(mat, m, n, t);

	cout << result.first << " " << result.second << endl; 

	return 0;
}