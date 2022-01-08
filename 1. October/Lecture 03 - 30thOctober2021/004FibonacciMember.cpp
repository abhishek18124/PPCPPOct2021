#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a non-negative number : ";
	cin >> n;

	int a = 0; // 0th fibonacci no.
	int b = 1; // 1st fibonacci no.
	int c; 

	if(n == 0 || n == 1) {
		cout << n << " is part of the fibonacci sequence" << endl;
		return 0;
	}

	while(true) {
		// calculate the ith fibonacci number
		c = a + b;

		if(c == n) {
			cout << n << " is part of the fibonacci sequence" << endl;
			return 0;
		}

		if(c > n) {
			cout << n << " is not part of the fibonacci sequence" << endl;
			return 0;
		}
  
		a = b;
		b = c;
	}

	
	return 0;
}