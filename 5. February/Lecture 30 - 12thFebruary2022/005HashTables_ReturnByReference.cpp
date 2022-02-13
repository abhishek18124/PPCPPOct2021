#include<iostream>

using namespace std;

int& f() {
	int* x = new int;
	*x = 10;
	return *x;
}

int main() {

	// cout << f() << endl;

	// int sum = f() + f();
	// cout << sum << endl;

	f() = 50;

	return 0;
}