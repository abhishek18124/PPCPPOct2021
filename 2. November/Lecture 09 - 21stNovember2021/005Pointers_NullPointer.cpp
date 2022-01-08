#include<iostream>

using namespace std;

int main() {

	int* xptr = NULL;

	cout << *xptr << endl; // if you dereference a NULL pointer, your 
						   // program will crash -- runtime error

	return 0;
}