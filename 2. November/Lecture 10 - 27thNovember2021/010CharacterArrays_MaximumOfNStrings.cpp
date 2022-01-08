/*
	
	0 < str.length < 100

*/

#include<iostream>
#include<cstring>

using namespace std;

int main() {

	int n;
	cout << "Enter no. of strings : ";
	cin >> n;

	cin.ignore();

	char str[100];

	int maxLength = 0; // to keep track of length of maximum length string
	char maxLengthStr[100]; // to keep track of the maximum length string

	for(int i=0; i<n; i++) {
		cin.getline(str, 100);
		if(strlen(str) > maxLength) {
			maxLength = strlen(str);
			strcpy(maxLengthStr, str);
		}
	}

	cout << "The maximum length string is : " << maxLengthStr << endl;
	cout << "The length of maximum length string is : " << maxLength << endl;

	return 0;
}