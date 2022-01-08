#include<iostream>

using namespace std;

void readString(char* str) {
	char ch;
	int i = 0;
	while(true) {
		ch = cin.get();
		if(ch == '\n') {
			break;
		}
		str[i] = ch;
		i++;
	}
	str[i] = '\0';
}

int main() {

	//	// 1. How to initialise character arrays

	// char str1[] = {'A', 'B', 'C', '\0'};

	// cout << str1 << endl;

	// char str2[] = "DEF";

	// cout << str2 << endl;

	// 2. How to read values inside a character array

	char str3[100];

	cout << "Enter a string : ";
	// cin >> str3; // cin >> will automatically add the \0 character
	
	// readString(str3);

	// cin.getline(str3, 5, '$');

	cin.getline(str3, 100);

	cout << "You've entered :" << str3 << endl;



	return 0;
}