/*

0 < str1.length < 100
0 < str2.length < 100

*/


#include<iostream>
#include<cstring>


using namespace std;

int compareStrings(char* str1, char* str2) {
	int i = 0; // use it to iterate over str1 & str2

	while(str1[i] != '\0' && str2[i] != '\0') {
		if(str1[i] < str2[i]) {
			// str1 is less than str2
			return -1;
		} else if(str1[i] > str2[i]) {
			// str1 is greater than str2
			return 1;
		} else {
			i++;
		}
	}

	if(str1[i] == '\0' && str2[i] == '\0') {
		// you've exhaused both the string
		return 0;
	} else if(str1[i] == '\0') {
		// you've exhaused only the first string i.e. 
		// len(str1) < len(str2) therefore str1 is less 
		// than str2
		return -1;	
	} else {
		// you've exhaused only the second string i.e. 
		// len(str1) > len(str2) therefore str1 is greater 
		// than str2
		return 1;	
	}
}

int main() {

	char str1[] = "abZdfh"; 
	char str2[] = "abDdfh"; 

	cout << compareStrings(str1, str2) << endl;

	// cout << strcmp(str1, str2) << endl;

	return 0;
}