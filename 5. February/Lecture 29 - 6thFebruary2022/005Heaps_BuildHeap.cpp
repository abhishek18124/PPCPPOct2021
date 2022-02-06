/*

	Given an array of n integers, design a O(n) algorirthm to build a max_heap in-place.

*/

#include<iostream>
#include<vector>

using namespace std;


void heapify(vector<int>& v, int i) {

	int maxIdx = i; // assume value at the ith idx is the maximum
	int leftIdx = 2*i + 1;

	if(leftIdx < v.size() && v[leftIdx] > v[maxIdx]) {
		maxIdx = leftIdx;
	}

	int rightIdx = 2*i + 2;
	if(rightIdx < v.size() && v[rightIdx] > v[maxIdx]) {
		maxIdx = rightIdx;
	}

	if(maxIdx != i) { // also works as a base case
		swap(v[i], v[maxIdx]);
		heapify(v, maxIdx);
	}

}

int main() {
	
	vector<int> v = {6, 8, 3, 5, 4, 7, 2, 0, 1};
	
	for(int i=v.size()-1; i>=0; i--) {
		heapify(v, i);
	}

	for(int i=0; i<v.size(); i++) {
		cout << v[i] << " ";
	}

	cout << endl;

	return 0;
}





