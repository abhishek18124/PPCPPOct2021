#include<iostream>

using namespace std;

int main() {

	int N = 20;
	// cout << "Enter a positive number : ";
	// cin >> N;

	// print prime numbers from 2 to <=N

	for(int n=2; n <= N; n++) {
		// check if n is a prime number or not
		int i;
		for(i=2; i<n; i++) {
			if(n%i == 0) {
				// i divides n, n is not a prime number
				break;
			}
		}
		if(i == n) {
			cout << n << " ";
		}

	}

	return 0;
}