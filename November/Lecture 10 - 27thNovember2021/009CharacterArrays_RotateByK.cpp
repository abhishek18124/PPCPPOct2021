/*

	0 < str.length < 100
	0 < k < 10

*/

#include<iostream>
#include<cstring>

using namespace std;

void rotateByK(char* str, int k) {
	// 1. shift all the characters by k steps to the right

	int n = strlen(str);
	for(int i=n; i>=0; i--) {
		str[i+k] = str[i];
	}

	for(int i=0; i<k; i++) {
		str[i] = str[n+i];
	}

	str[n] = '\0';

}

int main() {

	char str[200] = "hello";

	int k = 3;

	cout << "before rotate : " << str << endl;

	rotateByK(str, k);

	cout << "after rotate : " << str << endl;

	return 0;
}