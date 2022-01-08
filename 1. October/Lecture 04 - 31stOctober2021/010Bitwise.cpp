#include<iostream>
#include<bitset>

using namespace std;

int main() {

	int x = 5;
	int y = 10;

	cout << bitset<8>(x) << " : " << x << endl;
	cout << bitset<8>(y) << " : " << y << endl;
	cout << bitset<8>(x&y) << " : " << (x&y) << endl;
	cout << bitset<8>(x|y) << " : " << (x|y) << endl;

	cout << endl;


	x = 7;
	y = 3;
	cout << bitset<8>(x) << " : " << x << endl;
	cout << bitset<8>(y) << " : " << y << endl;
	cout << bitset<8>(x^y) << " : " << (x^y) << endl;
	cout << bitset<8>(~x) <<  " : " << (~x) << endl;


	return 0;
}