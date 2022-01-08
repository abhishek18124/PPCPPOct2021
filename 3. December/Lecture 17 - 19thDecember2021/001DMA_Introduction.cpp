#include<iostream>

using namespace std;

int main() {

	int* ptr = new int;

	*ptr = 20;

	cout << "*ptr = " << *ptr << endl;

	delete ptr; // this is done to avoid memory leak

	ptr = new int;

	*ptr = 30;

	cout << "*ptr = " << *ptr << endl;

	delete ptr;

	ptr = NULL; // done for safety check

	cout << "*ptr = " << *ptr << endl;

	return 0;
}