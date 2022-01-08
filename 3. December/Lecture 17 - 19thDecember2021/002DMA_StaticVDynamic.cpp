#include<iostream>

using namespace std;

// int* f1() {
// 	int x = 10;
// 	return &x;
// }

int* f2() {
	int* ptr = new int;
	*ptr = 20;
	return ptr;
}

int  main() {

	// int* f1ptr = f1();

	// cout << *f1ptr << endl;

	int* f2ptr = f2();
	cout << *f2ptr << endl;

	return 0;
}