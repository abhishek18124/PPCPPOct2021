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
		if((r+1)%n == f) {
			// queue is full
			return;
		}
		r = (r + 1)%n;
		A[r] = data;
		count++;
	}

	void pop() {
		if(f == r) {
			// queue is empty
			return;
		}
		f = (f + 1)%n;
		count--;
	}

	T front() {
		return A[(f+1)%n];
	}

	bool empty() {
		return f == r;
	}

	int size() {
		return count;
	}

	void print() {
		int temp_r = r;
		int temp_f = f;

		while(temp_f != temp_r) {
			cout <<  A[(temp_f+1)%n] << " ";
			temp_f = (temp_f+1)%n;
		}

		cout << endl;

	}

};



int main() {

	queue<int> q(5);

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	q.print();

	q.pop();

	q.print();

	q.push(60);

	q.print();

	q.pop();

	q.push(70);

	q.print();

	return 0;
}