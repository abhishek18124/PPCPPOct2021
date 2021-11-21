#include<iostream>

using namespace std;

int main() {

	int x = 516;
	int *xptr = &x;
	char* chptr = (char*)&x;
	double* dptr = (double*)&x;
	float* fptr = (float*)&x;

	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "xptr = " << xptr << endl;
	cout << "sizeof(xptr) = " << sizeof(xptr) << endl;
	cout << "*xptr = " << *xptr << endl;
	cout << "*chptr = " << (int)*chptr << endl;
	cout << "*dptr = " << *dptr << endl;


	return 0;
}