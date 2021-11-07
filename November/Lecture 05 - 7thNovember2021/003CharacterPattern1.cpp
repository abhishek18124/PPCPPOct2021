/*

WAP to print the following pattern :

A B C D E
A B C D
A B C 
A B
A

Here, n is equal to 5 which is the number of rows you've to print.

*/

#include<iostream>

using namespace std;

int main() {

	int n = 5;

	for(int i=1; i<=n; i++) {
		// in the ith row, we have to print n-i+1 characters
		// in the increasing order that start with 'A'
		char ch = 'A';
		for(int j=1; j<=n-i+1; j++) {
			cout << ch << " ";
			ch++;
		}
		cout << endl;
	}

	return 0;
}