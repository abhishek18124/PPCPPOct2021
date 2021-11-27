#include<iostream>
#include<cstring>

using namespace std;

void copyString(char* dst, char* src) {
	
	int i = 0;
	for(; src[i] != '\0'; i++) {
		dst[i] = src[i];
	}
	dst[i] = '\0';
}

int main() {

	char str1[100] = "hello"; // assume length of str < 100
	char str2[] = "coding"; 

	cout << "before copy : " << str1 << endl;

	// copyString(str1, str2);

	strcpy(str1, str2);

	cout << "after copy : " << str1 << endl;

	return 0;
}