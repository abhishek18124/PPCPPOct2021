#include<iostream>

using namespace std;

void f1(int* A) {

}

// void f2(int** B) { // error

// }

int main() {

	int A[5];
	f1(A);

	int B[3][4];
	f2(B);

}