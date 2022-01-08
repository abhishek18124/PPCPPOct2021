#include<iostream>

using namespace std;

void print(int** ptr, int m, int n) {
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cout << ptr[i][j] << " "; // cout << *(*(ptr+i)+j) << " ";
		}
		cout << endl;
	}
	cout << endl;
}

int main() {

	int m, n;
	cin >> m >> n;

	int** ptr = new int*[m];
	for(int i=0; i<m; i++) {
		ptr[i] = new int[n];
	}

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			cin >> ptr[i][j];
		}
	}

	print(ptr, m, n);

	// releasing memory

	for(int i=0; i<m; i++) {
		delete [] ptr[i]; // to release the memory for the ith 1D array of size n i.e. ith row
	}

	delete [] ptr; // to release the memory for the 1D array of integer pointers of size m

}