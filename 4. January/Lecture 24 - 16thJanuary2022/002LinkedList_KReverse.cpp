#include<iostream>

using namespace std;

class node {
public:

	int data;
	node* next;

	node(int data) {
		this->data = data;
		this->next = NULL;
	}

};

void insertAtHead(node*& head, int data) {
	node* n = new node(data);
	n->next = head; 
	head = n;
}

void printLinkedList(node* head) {
	while(head != NULL) {
		cout << head->data;
		head = head->next;
		if(head != NULL) cout << "->";
	}
	cout << endl;
}

node* kReverse(node* head, int k) {

	// 1. reverse the first k nodes
	node* cur = head;
	node* prev = NULL;
	int i = 0;
	while(cur != NULL && i < k) {
		node* tmp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = tmp;
		i++;
	}

	// 2. k-reverse the sublist
	node* headFromMyFriend = kReverse(cur, k);
	head->next = headFromMyFriend;

	return prev;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 2;

	return 0;
}