/*

	Implementation of the heap/priority_queue data structure.

*/

#include<iostream>
#include<vector>

using namespace std;

class maxHeap {

	vector<int> v;

	void heapify(int i) {

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
			heapify(maxIdx);
		}

	}

	public :

		void push(int data) {
			v.push_back(data);

			int childIdx  = v.size() - 1;
			int parentIdx = childIdx%2 ? childIdx/2 : childIdx/2 - 1;

			while(parentIdx >= 0 && v[childIdx] > v[parentIdx]) {
				swap(v[childIdx], v[parentIdx]);
				childIdx = parentIdx;
				parentIdx = childIdx%2 ? childIdx/2 : childIdx/2 - 1;
			}

		}

		void pop() {
			swap(v[0], v[v.size()-1]);
			v.pop_back();
			heapify(0);
		}

		int top() {
			return v[0];
		}

		bool empty() {
			return v.empty();
		}

		int size() {
			return v.size();
		}
};

int main() {

	maxHeap m;

	m.push(7);
	m.push(5);
	m.push(4);
	m.push(6);
	m.push(8);

	cout << m.size() << endl;

	while(!m.empty()) {
		cout << m.top() << " ";
		m.pop();
	}

	cout << endl;

	cout << m.size() << endl;

	return 0;
}



