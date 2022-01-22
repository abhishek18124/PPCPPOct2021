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

void reverse(stack<int>& s) {

	// base case
	if(s.empty()) {
		return;
	}

	// recursive case

	// 1. extract the item which is currently at the top of the stack
	int x = s.top();
	s.pop();

	// 2. reverse the resulting stack -- ask your friend
	reverse(s);

	// 3. insert x at the bottom of the reversed stack you get back
	// from your friend

	insertAtBottom(s, x);

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

	reverse(s);

	print(s);

	return 0;
}