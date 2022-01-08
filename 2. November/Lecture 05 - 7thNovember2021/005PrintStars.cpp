#include<iostream>

using namespace std;

int main() {

	int n = 5;

	// print the upper-part
	for(int i=1; i<=n; i++) {
		// in the ith row, we have to print i stars
		for(int j=1; j<=i; j++) {
			cout << "*" << " ";
		}
		cout << endl;
	}


	// print the lower-part
	for(int i=1; i<=n-1; i++) {
		// in the ith row, we have to print (n-i) stars
		for(int j=1; j<=n-i; j++) {
			cout << "*" << " ";
		}
		cout << endl;
	}

	return 0;
}