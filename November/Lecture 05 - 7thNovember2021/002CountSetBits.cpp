#include<iostream>
#include<cmath>

using namespace std;

int main() {

	int n = 10;
	int count = 0; // to keep track of count of set bits

	// cout << ceil(log2(n+1)) << endl;

	// float t1 = log2(n+1);
	// int t2 = ceil(t1)

	for(int k=0; k<ceil(log2(n+1)); k++) {
		// check if the kth bit of n is set or not

		if((n>>k)&1) {
			count++;
		}

		// if((1<<k)&n) {
		// 	count++;
		// }
	}

	cout << "The number of set bits in " << n << "  is equal to " << count << endl;

	return 0;
}