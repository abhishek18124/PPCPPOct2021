#include<iostream>
#include<stack>

using namespace std;

void insertAtBottom(stack<int>& s, int x) {

	// base case

	if(s.empty()) {
		s.push(x);
		return;
	}

	// recusive case

	// 1. extract the item currently at the top of the stack
	int y = s.top();
	s.pop();

	// 2. ask your friend to insert x at the bottom of the resulting stack
	insertAtBottom(s, x);

	// 3. push y at the top of the stack updated by your friend
	s.push(y);

}


void print(stack<int> s) {

	while(!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}

	cout << endl;

}

int main() {

	stack<int> s;

	s.push(50);
	s.push(40);
	s.push(30);
	s.push(20);
	s.push(10);

	print(s);

	int x = 60;

	insertAtBottom(s, x);

	print(s);

	return 0;
}