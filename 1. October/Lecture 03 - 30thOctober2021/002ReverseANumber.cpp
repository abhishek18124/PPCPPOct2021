#include<iostream>

using namespace std;

int main() {

	int n;

	cout << "Enter a positive number : ";
	cin >> n;

	int r = 0;

	while(n > 0) {
		int d = n%10;
		r = r*10 + d;
		n = n/10;
	}

	cout << "Reversed number : " << r << endl;

	return 0;
}