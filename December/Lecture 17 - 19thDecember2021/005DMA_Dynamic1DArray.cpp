#include<iostream>

using namespace std;

int* resize(int* A, int capacity) {
	cout << "Resizing the array from " << capacity*4 << "B to " << capacity*2*4 << "B" << endl;
	int* B = new int[2*capacity];
	for(int i=0; i<capacity; i++) {
		B[i] = A[i];
	}
	delete [] A;
	return B;
} 

int main() {

	int* A = new int[1];
	int i = 0; // size of the array
	int capacity = 1;

	int x;
	cin >> x;

	while(x != -1) {
		A[i] = x;
		i++;
		if(i == capacity) {
			// you've exhaused array capacity, resize
			A = resize(A, capacity);
			capacity *= 2;
		}
		cin >> x;
	}

	for(int j=0; j<i; j++) {
		cout << A[j] << " ";
	}	

	cout << endl;




	return 0;
}