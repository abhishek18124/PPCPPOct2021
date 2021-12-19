#include<iostream>

using namespace std;

int main() {

	int* ptr = new int[5];

	for(int i=0; i<5; i++) {
		cin >> *(ptr+i); // cin >> ptr[i];
	}

	for(int i=0; i<5; i++) {
		cout << *(ptr+i) << " "; // cout << ptr[i] << " ";
	}

	cout << endl;

	delete [] ptr;

	int* ptr2 = new int[5]{1, 2, 3, 4, 5};
	for(int i=0; i<5; i++) {
		cout << ptr2[i] << " ";
	}
	cout << endl;

	delete [] ptr;
	
	return 0;
}