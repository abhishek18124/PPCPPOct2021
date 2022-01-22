#include<iostream>

using namespace std;

template <typename T>
class stack {
	T* A;// stores the pointer to the element at the 0th index of the array
	       // that internally represents the stack
	int n; // stores the capacity of the stack
	int t; // stores the index in the array where the last item was inserted

public: 

	stack(int n) {
		this->n = n;
		A = new T[n];
		t = -1;
	}

	void push(T data) {
		if(t == n-1) {
			// stack is full
			return;
		}
		t = t+1;
		A[t] = data;
	}

	void pop() {
		if(t == -1) {
			// stack is empty
			return;
		}
		t = t-1;
	}

	T top() {
		return A[t];
	}

	int size() {
		return t+1;
	}

	bool empty() {
		return t == -1;
	}
};

int main() {

	stack<int> s(5);

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 
	cout << "isEmpty ? " << s.empty() << endl;

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

    s.pop();

	cout << "size : " << s.size() << endl;
	cout << "top : " << s.top() << endl; 

	s.pop();

	cout << "size : " << s.size() << endl;
	cout << "isEmpty ? " << s.empty() << endl;

	return 0;
}