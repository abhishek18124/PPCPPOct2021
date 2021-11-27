#include<iostream>
#include<cstring>

using namespace std;

bool isPalindrome(char* str) {
	int i = 0;
	int j = strlen(str) - 1;

	while(i < j) {
		if(str[i] != str[j]) {
			return false;
		}
		i++;
		j--;
	}

	return true;
}

int main() {

	char str[] = "abccba";

	isPalindrome(str) ? cout << "true" << endl :
					    cout << "false"<< endl ;
	

	return 0;
}