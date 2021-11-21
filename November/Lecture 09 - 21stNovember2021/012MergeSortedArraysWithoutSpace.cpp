// constraints

// 0<n<=50 0<m<=50

#include<iostream>

using namespace std;

void merge(int* A, int* B, int n, int m) {
	int i = n-1;
	int j = m-1;
	int k = m+n-1;

	while(i >= 0 && j >= 0) {
		if(A[i] > B[j]) {
			A[k] = A[i];
			i--;
			k--;
		} else {
			A[k] = B[j];
			j--;
			k--;
		}
	}

	while(j >= 0) {
		A[k] = B[j];
		k--;
		j--;
	}


}

int main() {

	int A[100];
	int B[50];

	int n;
	cin >> n;

	for(int i=0; i<n; i++) {
		cin >> A[i];
	}

	int m;
	cin >> m;

	for(int i=0; i<m; i++) {
		cin >> B[i];
	}

	merge(A, B, n, m);

	for(int i=0; i<m+n; i++) {
		cout << A[i] << " ";
	}
	cout << endl;

}