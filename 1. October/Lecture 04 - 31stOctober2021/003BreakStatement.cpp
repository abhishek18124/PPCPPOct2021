#include<iostream>

using namespace std;

int main() {

	int x;

	// while(true) {
	// 	cout << "Enter an integer : ";
	// 	cin >> x;

	// 	if(x == -1) {
	// 		break;
	// 	}
	// }

	for(; true; ) {
		cout << "Enter an integer : ";
		cin >> x;
		if(x == -1) {
			break;
		}
	}


	return 0;
}