#include<iostream>

using namespace std;

int add(int a, int b, int c=0, int d=0) {
	return a+b+c+d;
}

// int add(int a, int b, int c) {
// 	return a+b+c;
// }

// int add(int a, int b) {
// 	return a+b;
// }

int main() {

	cout << add(1, 2, 3, 4) << endl;
	cout << add(1, 2, 3) << endl;
	cout << add(1, 2) << endl;

	return 0;
}