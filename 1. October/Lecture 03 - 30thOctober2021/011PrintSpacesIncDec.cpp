#include<iostream>

using namespace std;

int main() {

	int n = 5;

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

		// print (i-1) nos. in the decreasing order starting with 2*(i-1)
		no = no - 2;// no = 2*(i-1);
		j = 1;
		while(j <= i-1) {
			cout << no << " ";
			no--;
			j++;
		}

		cout << endl;
		i++;
	}

	return 0;
}