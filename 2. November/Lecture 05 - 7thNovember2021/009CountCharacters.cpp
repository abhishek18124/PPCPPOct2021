#include<iostream>

using namespace std;

int main() {

	int count = 0;
	char ch;

	while(true) {
		// cin >> ch;
		ch = cin.get();
		if(ch == '$') {
			break;
		}
		count++;
	}

	cout << "Number of characters = " << count << endl;

	return 0;
}