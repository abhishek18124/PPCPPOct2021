#include<iostream>

using namespace std;

int main() {

	const float pi = 3.14;

	int r = 2;

	cout << 2 * pi * r << endl;

	// pi++; // error since pi is read-only

	// const int x; // error

	// x = 10;


	return 0;
}