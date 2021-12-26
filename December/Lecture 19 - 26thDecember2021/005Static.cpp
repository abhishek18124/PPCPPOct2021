#include<iostream>

using namespace std;

int f() {
	static int count = 0;
	count++;
	cout << count << endl;
}

int main() {

	f();
	f();
	f();

	return 0;
}