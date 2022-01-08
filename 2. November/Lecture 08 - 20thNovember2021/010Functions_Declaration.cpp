#include<iostream>

using namespace std;

int multiply(int a, int b); // function prototype or function declaration or forward declaration

int main() {
	multiply(2, 3);
	return 0;
}


int multiply(int a, int b) {
	return a*b;
}