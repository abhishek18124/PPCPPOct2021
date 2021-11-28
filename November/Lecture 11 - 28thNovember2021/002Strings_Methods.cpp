#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	string str1 = "coding";
	
	cout << str1.length() << endl;
	cout << str1.size() << endl;

	string str2 = "blocks";

	str1.append(str2);

	cout << str1 << endl;
	cout << str2 << endl;

	string str3 = "new";
	string str4 = "delhi";

	str3 = str3 + " " + str4;

	cout << str3 << endl;


	string str5 = "abd";
	string str6 = "abc";

	cout << str5.compare(str6) << endl;

	if(str5 > str6) {
		cout << str5 << " is greater than " << str6 << endl;
	} else {
		cout << str5 << " is less than " << str6 << endl;
	}

	string str7 = "hello world world";

	cout << str7.find(" wor") << endl;
	cout << str7.rfind(" wor") << endl;
	cout << str7.find("xyz") << endl;
	cout << string::npos << endl;

	string subStringToSearch = "llo";

	if(str7.find(subStringToSearch) == string::npos) {
		cout << subStringToSearch << " is not found" << endl;
	} else {
		cout << subStringToSearch << " is found at " << str7.find(subStringToSearch) << endl;
	}

	string str8 = "newdelhi";

	string subString = str8.substr(3, 4);

	cout << subString << endl;

	subString = str8.substr(3);

	cout << subString << endl;

	subString = str8.substr();

	cout << subString << endl;

	subString = str8.substr(3, 10);

	cout << subString << endl;

	string str9 = "hello";
	
	reverse(str9.begin(), str9.end());

	cout << str9 << endl;

	string str10 = "blocks";

	char* cstr = (char*)str10.c_str();

	cout << cstr << endl;

	string str11 = "hello";

	str11[0] = 'a';

	cout << str11 << endl;

	return 0;
}