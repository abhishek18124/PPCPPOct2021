#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=2*n-1; i++) {
		if(i <= n) {
			// in the ith row, print i stars
			for(int j=1; j<=i; j++) {
				cout << "*" << " ";
			}
		} else {
			// in the ith row, print 2*n - i stars
			for(int j=1; j<=2*n-i; j++) {
				cout << "*" << " ";
			}
		}
		cout << endl;
	}

	return 0;
}