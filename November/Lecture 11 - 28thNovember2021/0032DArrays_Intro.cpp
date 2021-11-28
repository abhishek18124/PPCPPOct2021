/*

	Constraints

	0 < m, n <= 10

	here, m denotes the no. of rows in the given 2D array
	      n denotes the no. of columns in the given 2D array

*/

#include<iostream>

using namespace std;

int main() {

	int A[10][10];

	int m;
	cout << "Enter the number of row : ";
	cin >> m;

	int n;
	cout << "Enter the number of columns : ";
	cin >> n;

	// read values into the given 2D array of dimensions mxn

	for(int i=0; i<m; i++) {
		// read values into the ith row
		for(int j=0; j<n; j++) {
			// read value into the jth column of the ith row
			cin >> A[i][j];
		}
	}

	// print the values of the given 2D array of dimensions mxn

	// for(int i=0; i<m; i++) {
	// 	for(int j=0; j<n; j++) {
	// 		// print the value present inside the jth column of the ith row
	// 		cout << A[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	for(int j=0; j<n; j++) {
		for(int i=0; i<m; i++) {
			// print the value present inside the ith row of the jth column
			cout << A[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}