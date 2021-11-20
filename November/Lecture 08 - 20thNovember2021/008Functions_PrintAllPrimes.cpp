#include<iostream>

using namespace std;

bool isPrime(int n) {
	for(int i=2; i<n; i++) {
		if(n%i == 0) {
			return false;
		}
	}
	return true;
}

void printAllPrimes(int N) {
	for(int n=2; n<=N; n++) {
		if(isPrime(n)) {
			cout << n << " ";
		}
	}
}

int main() {

	int N = 10;

	printAllPrimes(N);

	return 0;
}