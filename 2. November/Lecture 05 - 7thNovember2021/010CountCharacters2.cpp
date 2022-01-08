#include<iostream>

using namespace std;

int main() {

	char ch;

	int lowercase_count = 0;
	int uppercase_count = 0;
	int digits_count = 0;
	int special_count = 0;
	int whitespace_count = 0;

	while(true) {
		ch = cin.get();
		if(ch == '$') {
			break;
		}

		if(ch >= 'A' && ch <= 'Z') {
			uppercase_count++;
		} else if(ch >= 'a' && ch <= 'z') {
			lowercase_count++;
		} else if(ch >= '0' && ch <= '9') {
			digits_count++;
		} else if(ch == ' ' || ch == '\n' || ch == '\t') {
			whitespace_count++;
		} else {
			special_count++;
		}
	}

	cout << "#lowercase = " << lowercase_count << endl;
	cout << "#uppercase = " << uppercase_count << endl;
	cout << "#digits = " << digits_count << endl;
	cout << "#special = " << special_count << endl;
	cout << "#whitespaces = " << whitespace_count << endl;

	return 0;
}