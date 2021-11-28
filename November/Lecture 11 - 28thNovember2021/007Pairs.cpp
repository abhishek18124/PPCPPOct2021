#include<iostream>

using namespace std;

int main() {

	pair<int, int> p1 = make_pair(1, 2);

	cout << p1.first << " " << p1.second << endl;

	pair<int, int> p2 = {3, 4};

	cout << p2.first << " " << p2.second << endl;

	pair<string, char> p3 = {"hello", 'h'};

	cout << p3.first << " " << p3.second << endl;

	pair<pair<int, int>, pair<char, char>> p4;

	p4 = {{0, 1}, 
	      {'A', 'B'}};

	cout << p4.first.first << " " << p4.first.second << endl;
	cout << p4.second.first << " " << p4.second.second << endl;




	return 0;
}