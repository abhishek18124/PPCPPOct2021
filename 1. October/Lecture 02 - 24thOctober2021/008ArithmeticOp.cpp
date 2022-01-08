#include<iostream>

using namespace std;

int main() {

	int a = 10;
	int b = 5;

	cout << "a+b = " << a+b << endl;
	cout << "a-b = " << a-b << endl;
	cout << "a*b = " << a*b << endl;
	cout << "a/b = " << a/b << endl;
	cout << "a%b = " << a%b << endl << endl;

	a = 7;

	cout << "a+b = " << a+b << endl;
	cout << "a-b = " << a-b << endl;
	cout << "a*b = " << a*b << endl;
	cout << "a/b = " << a*1.0/b << endl;
	cout << "a%b = " << a%b << endl; 

	return 0;
}