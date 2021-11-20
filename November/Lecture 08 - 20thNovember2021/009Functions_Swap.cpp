#include<iostream>

using namespace std;

void swapByReference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {

	int a = 2;
	int b = 3;

	cout << "Before swap : a = " << a << " b = " << b << endl;
	swapByReference(a, b);
	cout << "After swap : a = " << a << " b = " << b << endl;
	
	return 0;
}