#include<iostream>

using namespace std;

int main() {

	int n;
	cout << "Enter a number > 1 : ";
	cin >> n;

	bool isPrime = true; // I am assuming given number is a prime number

	for(int i=2; i<n; i++) {
		if(n%i == 0) {
			// n divides i, n is prime number
			isPrime = false;
			break;
		}
	} 

	if(isPrime) { // isPrime == true
		cout << n << " is a prime number" << endl;
	} else {
		cout << n << " is not a prime number" << endl;
	}
	
	return 0;
}