/*

	STL implementation of the heap/priority_queue data structure.


*/

#include<iostream>
#include<queue>

using namespace std;

int main() {

	priority_queue<int> m; // maxHeap by default

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