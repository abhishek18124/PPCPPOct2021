#include<iostream>

using namespace std;

int main() {

	int n = 37;
	int k = 5;

	if((n>>k)&1) {
		cout << k << "th bit of " << n << " is set" << endl;
	} else {
		cout << k << "th bit of " << n << " is not set" << endl;
	}

	(n>>k)&1 ? cout << "true" << endl : cout << "false" << endl;
	(1<<k)&n ? cout << "true" << endl : cout << "false" << endl;

	return 0;
}