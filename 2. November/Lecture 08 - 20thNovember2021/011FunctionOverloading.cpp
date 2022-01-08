#include<iostream>
#include<cmath>

using namespace std;

double computeAreaOfTriangle(int b, int h) {
	return 0.5 * b * h;
}

double computeSemiPerimeter(int a, int b, int c) {
	return (a+b+c)/2.0;
}

double computeAreaOfTriangle(int a, int b, int c) {
	double s = computeSemiPerimeter(a, b, c);
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int main() {

	cout << computeAreaOfTriangle(3, 4) << endl;
	cout << computeAreaOfTriangle(3, 4, 5) << endl;

	return 0;
}