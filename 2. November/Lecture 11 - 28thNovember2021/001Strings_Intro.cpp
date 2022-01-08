#include<iostream>

using namespace std;

int main() {

	string str1;

	str1 = "coding blocks";

	cout << str1 << endl;

	cout << str1[0] << " " << str1[1] << " " << str1[2] << endl;

	string str2 = "hello world";

	cout << str2 << endl;

	string str3("new delhi");

	cout << str3 << endl;

	string str4 = str3;

	cout << str4 << endl;

	string str5(str2);

	cout << str5 << endl;

	char str6[] = {'m', 'u', 'm', 'b', 'a', 'i', '\0'};

	string str7(str6);

	cout << str7 << endl;

	return 0;
}