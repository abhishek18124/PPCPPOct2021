#include<iostream>

using namespace std;

int main() {

	int ans = 0;
	int n;
	cout << "Enter total numbers: ";
	cin >> n;

	int x;
	int i = 1;
	while(i <= n) {
		cout << "Enter a digit : ";
		cin >> x;
		ans = ans ^ x;
		i++;
	}

	cout << "Unique digit : " << ans << endl;

	return 0;
}