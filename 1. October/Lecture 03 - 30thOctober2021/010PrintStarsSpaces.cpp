#include<iostream>

using namespace std;

int main() {

	int n = 4;

	int i = 1;
	while(i <= n) {
		// print (n-i) spaces
		int j = 1;
		while(j <= n-i) {
			cout << " ";
			j++;
		}

		// print i stars
		j = 1;
		while(j <= i) {
			cout << "*";
			j++;
		}

		cout << endl;
		i++;
	}

	return 0;
}