#include<iostream>

using namespace std;

template <typename T>
class node {
public:

	T data;
	node<T>* next;

	node(T data) {
		this->data = data;
		this->next = NULL;
	}

};

template <typename T>
class forward_list {
	node<T>* head; // represents the forward list
	int count;

	public :

	forward_list() {
		head = NULL;
		count = 0;
	}

	void push_front(T data) {
		node<T>* n = new node<T>(data);
		n->next = head;
		head = n;
		count++;
	}

	void pop_front() {
		if(!head) {
			// linked list is empty
			return;
		}

		node<T>* tmp = head;
		head = head->next;
		delete tmp;
		count--;
	}

	T front() {
		return head->data;
	}

	int size() {
		return count;
	}

	bool empty() {
		return head==NULL;
	}

	void traverse() {
		node<T>* tmp = head;
		while(tmp) {
			cout << tmp->data;
			tmp = tmp->next;
			if(tmp) {
				cout << "->";
			}
		}
		cout << endl;
	}
};

int main() {

	forward_list<string> l;

	l.push_front("hello");
	l.push_front("world");
	l.push_front("coding");
	l.push_front("blocks");
	l.push_front("2022");

	cout << "size : " << l.size() << endl;

	l.traverse();

	l.pop_front();

	cout << "size : " << l.size() << endl;

	l.traverse();

	cout << "front : " << l.front() << endl;

	l.pop_front();
	l.pop_front();
	l.pop_front();
	l.pop_front();

	cout << "size : " << l.size() << endl;
	l.empty() ? cout << "true" << endl :
	            cout << "false" << endl;

	return 0;
}