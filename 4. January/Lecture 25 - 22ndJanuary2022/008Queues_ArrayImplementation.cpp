#include<iostream>

using namespace std;

template <typename T>
class queue {
	T* A;
	int count; // to store the size of the queue
	int n; // to store the capacity of the queue
	int f; // to store the index in the array from where last item was deleted
	int r; // to store the index in the array at which last item was inserted

public:

	queue(int n) {
		this->n = n+1;
		A = new T[n+1];
		count = 0;
		f = r = 0;
	}

	void push(T data) {
		if(r+1 == n) {
			// queue is full
			return;
		}
		r = r + 1;
		A[r] = data;
		count++;
	}

	void pop() {
		if(f == r) {
			// queue is empty
			return;
		}
		f = f + 1;
		count--;
	}

	T front() {
		return A[f+1];
	}

	bool empty() {
		return f == r;
	}

	int size() {
		return count;
	}

};

int main() {

	queue<int> q(5);

	cout << "size : " << q.size() << endl;
	q.empty() ? cout << "Queue is empty!" << endl:
	            cout << "Queue is not empty!" << endl;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();

	cout << "size : " << q.size() << endl;
	cout << "front : " << q.front() << endl;

	q.pop();
	q.empty() ? cout << "Queue is empty!" << endl:
	            cout << "Queue is not empty!" << endl;

	return 0;
}