#include<iostream>

using namespace std;

int main() {

	// int p, r, t;

	int p;
	cout << "Enter the principle = ";
	cin >> p;

	int r;
	cout << "Enter the rate = ";
	cin >> r;

	int t;
	cout << "Enter the time = ";
	cin >> t;

	float si = (p*r*t)/(float)100; // (p*r*t)/float(100); // Explicit type-casting

	cout << si << endl; // or make denominator a floating point number

	int x = 12.89;

	cout << x << endl;

	return 0;
}