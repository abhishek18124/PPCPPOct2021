#include<iostream>

using namespace std;

int x = 100;

int main() {

	cout << x << endl; // 100

	int x = 50;

	{
		cout << x << endl; // 50

		int x = 25;

		{
			cout << ::x << endl; // 25

			int y = 10;

			{
				cout << y << endl; // 10
			}

			cout << x << endl; // 25
		}

		cout << x << endl; // 25
	}

	return 0;
}