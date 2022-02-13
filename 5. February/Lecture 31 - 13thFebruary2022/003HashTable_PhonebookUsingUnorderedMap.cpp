/*

	Implement a phonebook storing mapping between person's name and their phone numbers 
	using an unordered_map.

*/

#include<iostream>
#include<unordered_map>
#include<vector>

using namespace std;

int main() {

	unordered_map<string, vector<string>> phoneMap;

	phoneMap["Archit"].push_back("1234567890");
	phoneMap["Archit"].push_back("0000001223");

	phoneMap["Vaibhav"].push_back("12345");
	phoneMap["Ishita"].push_back("01234567");

	for(pair<string, vector<string>> p : phoneMap) {
		cout << p.first << " : ";
		for(string phoneNumber : p.second) {
			cout << phoneNumber << " ";
		}
		cout << endl;
	}



	return 0;
}