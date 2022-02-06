/*

	STL implementation of the min_heap data structure.


*/

#include<iostream>
#include<queue>

using namespace std;


int main() {

	priority_queue<int, vector<int>, greater<int>> m; 

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