#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n = 24;
	int p = 4;

	float sq = 0;
	float inc = 1;

	for(int i=0; i<=p; i++) {
		while(sq*sq <= n) {
			sq = sq + inc;
		}
		sq = sq - inc;
		inc = inc / 10;
	}

	// while(sq*sq <= n) {
	// 	sq = sq + inc;
	// }

	// sq = sq - inc;

	// inc = inc / 10;

	// while(sq*sq <= n) {
	// 	sq = sq + inc;
	// }

	// sq = sq - inc;

	// inc = inc / 10;

	// while(sq*sq <= n) {
	// 	sq = sq + inc;
	// }

	// sq = sq - inc;

	// inc = inc / 10;

	cout << sq << endl;

	return 0;
}