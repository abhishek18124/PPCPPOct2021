#include<iostream>

using namespace std;

int main() {

	int n;

	cout << "Enter a positive number : ";
	cin >> n;

	int sum = 0;

	while(n > 0) {
		sum = sum + (n%10);
		n = n/10;
	}

	cout << "The sum of digits = " << sum << endl;

	return 0;
}