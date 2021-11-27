#include<iostream>
#include<cstring>

using namespace std;

int main() {

	char str[]  = "abc..de$f.gh/i.j.k$/.lmn";
	char dlim[] = ".$/";

	char* token = strtok(str, dlim);
	while(token != NULL) {
		cout << token << endl;
		token = strtok(NULL, dlim);
	}

	return 0;
}