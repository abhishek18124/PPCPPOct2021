#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a number > 1 : ";
	cin >> n;

	int i;

	for(i=2; i<n; i++) {
		if(n%i == 0) {
			// i divides n, n is not a prime number
			break;
		}
	}

	// if(i == n) {
	// 	cout << n << " is a prime" << endl;
	// } else {
	// 	cout << n << " is not a prime number" << endl;
	// }

	i == n ? cout << n << " is a prime number" << endl : 
	         cout << n << " is not a prime number" << endl;

	return 0;
}