#include<iostream>

using namespace std;

int main() {

	int n = 6;

	int i = 1;
	while(i <= n) {
		int j = 1;
		int no;

		if(i%2 == 0) {
			// ith row is an even row
			no = 0;
		} else {
			// ith row is an odd row
			no = 1;
		}

		while(j <= i) {
			cout << no << " ";
			no = 1-no;
			j++;
		}
		cout << endl;
		i++;
	}

	return 0;
}