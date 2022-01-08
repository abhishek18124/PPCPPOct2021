#include<iostream>

using namespace std;

bool isEven(int n) {
	// if(n%2 == 0) {
	// 	return true;
	// } else {
	// 	return false;
	// }

	return n%2 == 0;
}

int main() {

	// bool answer = isEven(4);
	// if(answer) {
	// 	cout << "even" << endl;
	// } else {
	// 	cout << "odd" << endl;
	// }


	// if(isEven(4)) {
	// 	cout << "even" << endl;
	// } else {
	// 	cout << "odd" << endl;
	// }

	isEven(5) ? cout << "even" << endl : cout << "odd" << endl;

	return 0;
}