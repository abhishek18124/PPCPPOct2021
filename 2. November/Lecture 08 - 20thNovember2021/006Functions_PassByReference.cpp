#include<iostream>

using namespace std;

void f(int& a) {
	a++;
}

int main( ){

	int a = 0;

	f(a);

	cout << a << endl;

	return 0;
}