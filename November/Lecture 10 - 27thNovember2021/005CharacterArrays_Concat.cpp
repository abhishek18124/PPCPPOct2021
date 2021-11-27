/*

0 < str1.length < 100
0 < str2.length < 100

*/


#include<iostream>
#include<cstring>


using namespace std;

void concatString(char* str1, char* str2) {
	
	int i = strlen(str1); // to iterate over the dst string
	int j = 0; // to iterate over the src string

	while(str2[j] != '\0') {
		str1[i] = str2[j];
		i++;
		j++;
	}

	str1[i] = '\0';

}

int main() {

	char str1[199] = "hello"; 
	char str2[] = "coding"; 

	cout << "before concat : " << str1 << endl;
 
	// concatString(str1, str2);

	strcat(str1, str2);

	cout << "after concat : " << str1 << endl;




	return 0;
}