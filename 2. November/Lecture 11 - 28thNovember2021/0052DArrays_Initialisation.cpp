#include<iostream>

using namespace std;

int main() {

	int A[][4] = {{10, 20, 30},
				   {40, 50},
				   {}};

	int m = 3;
	int n = 4;

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout << A[i][j] << " ";
		}

		cout << endl;
	}

	cout << endl;

	int A1[3][4] = {};

	int m1 = 3;
	int n1 = 4;

	for(int i=0; i<m1; i++) {
		for(int j=0; j<n1; j++) {
			cout << A1[i][j] << " ";
		}

		cout << endl;
	}


	return 0;
}