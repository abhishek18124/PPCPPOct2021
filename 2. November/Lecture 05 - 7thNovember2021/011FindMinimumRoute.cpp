#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int x = 0; // to keep track of effective movement the person will make along the x-axis
	int y = 0; // to keep track of effective movement the person will make along the y-axis

	char ch;

	while(true) {
		ch = cin.get();
		if(ch == '\n') {
			break;
		}

		if(ch == 'N') {
			y++;
		} else if(ch == 'S') {
			y--;
		} else if(ch == 'E') {
			x++;
		} else {
			x--;
		}
	}	 

	if(x >= 0 && y >= 0) {
		// destination is in 1st quadrant

		// print 'E' x times
		for(int i=1; i<=x; i++) {
			cout << 'E';
		}

		// followed by 'N' y times
		for(int i=1; i<=y; i++) {
			cout << 'N';
		}

	} else if(x <= 0 && y >= 0) {
		// destination is in 2nd quadrant

		// print 'N'  y times
		for(int i=1; i<=y; i++) {
			cout << 'N';
		}

		// followed by 'W' |x| times
		for(int i=1; i<=abs(x); i++) {
			cout << 'W';
		}

	} else if(x <= 0 && y <= 0) {
		// destination is in the 3rd quadrant

		// print 'S' |y| times
		for(int i=1; i<=abs(y); i++) {
			cout << 'S';
		}

		// followed by 'W' |x| times
		for(int i=1; i<=abs(x); i++) {
			cout << 'W';
		}

	} else {
		// destination is in the 4th quadrant

		// print 'E' x times
		for(int i=1; i<=x; i++) {
			cout << 'E';
		}

		// followed by 'S' |y| times
		for(int i=1; i<=abs(y); i++) {
			cout << 'S';
		}
	}

	cout << endl;

	return 0;
}