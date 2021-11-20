#include<iostream>

using namespace std;

void greet() {
	cout << "Inside the greet() function" << endl;
	return; // optional 
}

int main() {

	cout << "Inside the main(), before invocation of greet()" << endl;
	greet();
	cout << "Inside the main(), after invocation to greet()" << endl;

	return 0;
}