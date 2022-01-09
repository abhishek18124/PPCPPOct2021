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

	// 1. create a new node dynamically with the given data
	node* n = new node(data);

	// 2. assign to the next field of the newly created node
	// the address of the head of the linked list which is 
	// stored in the pointer to the head node
	n->next = head; // (*n).next = head;

	// 3. make the newly created node as the new head of the
	// linked list
	head = n;

}

void printLinkedList(node* head) {

	while(head) { // or head != NULL
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;
}

int computeLengthIterative(node* head) {
	int count = 0;
	while(head) {
		count++;
		head = head->next;
	}
	return count;
}

int computeLengthRecursive(node* head) {
	// base case
	if(!head) { // head == NULL
		return 0;
	}

	// recursive case

	// compute the length of the linked list that starts
	// from the node that comes after the head node
	int X = computeLengthRecursive(head->next);

	return 1+X;

}



int main() {

	node* head = NULL; // initally, linked list is empty

	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	insertAtHead(head, 0);
	
	printLinkedList(head);

	cout << computeLengthIterative(head) << endl;
	cout << computeLengthRecursive(head) << endl;

	return 0;
}