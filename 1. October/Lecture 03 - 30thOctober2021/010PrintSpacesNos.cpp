#include<iostream>

using namespace std;

int main() {

	int n = 4;

	int i = 1;
	while(i <= n) {
		// print (n-i) spaces
		int j = 1;
		while(j <= n-i) {
			cout << "  ";
			j++;
		}

		// print i nos in the increasing order starting with i
		int no = i;
		j = 1;
		while(j <= i) {
			cout << no << " ";
			j++;
			no++;
		}

		cout << endl;
		i++;
	}

	return 0;
}