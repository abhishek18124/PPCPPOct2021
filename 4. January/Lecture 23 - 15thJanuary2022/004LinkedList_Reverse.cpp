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
	while(head) { // head != NULL
		cout << head->data;
		head = head->next;
		if(head) { // head != NULL
			cout << "->";
		}
	}
	cout << endl;
}

node* reverseIterative(node* head) {

	node* cur = head;
	node* prev= NULL;

	while(cur != NULL) {
		node* tmp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = tmp;
	}

	return prev;

}

node* reverseRecursive(node* head) {
	// base case
	if(head == NULL || head->next == NULL) {
		// linked list contains a zero or one nodes
		return head;
	}

	// recursive case

	// reverse the subList that starts from the node that comes after head node
	node* newHead = reverseRecursive(head->next);
	node* newTail = head->next;
	newTail->next = head;
	head->next = NULL;

	return newHead;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	head = reverseIterative(head);

	printLinkedList(head);

	head = reverseRecursive(head);

	printLinkedList(head);

	return 0;
}