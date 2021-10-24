#include<iostream>
#include<climits>

using namespace std;

int main() {

	cout << "-2^31  = " << INT_MIN << endl;
	cout << "2^31-1 = " << INT_MAX << endl;

	int x1; // -2^31 to 2^31-1
	unsigned int x2; // 0 to 2^32-1

	long long int x3; // or long long x3 Range:[-2^63 to 2^63-1]
	unsigned long long int x4; // or unsigned long long y Range:[0 to 2^64-1] 

	return 0;
}