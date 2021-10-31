#include<iostream>
#define PI 3.14
#define PRINT cout <<
#define NEWLINE endl
#define SEMICOLON ;
#define F1 for(int i=1; i<=10; i++) {cout << i << " ";}
#define F2(r) for(int i=1; i<=r; i++) {cout << i << " ";}

using namespace std;

int main() {

	int r = 2;

	PRINT 2 * PI * r << NEWLINE SEMICOLON

	F1

	PRINT NEWLINE SEMICOLON

	F2(r)

	return 0;
}