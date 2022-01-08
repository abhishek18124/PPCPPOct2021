#include<iostream>

using namespace std;

int factorial(int n) {
	int fact = 1;
	for(int i=n; i>=1; i--) {
		fact *= i;
	}

	// for(int i=1; i<=n; i++) {
	// 	fact *= i;
	// }

	return fact;
}

int nCr(int n, int r) {
	return factorial(n) / (factorial(n-r)*factorial(r));
}

int main() {

	int n = 5;
	int r = 2;

	cout << factorial(n) << endl;
	cout << nCr(n, r) << endl;

	return 0;
}