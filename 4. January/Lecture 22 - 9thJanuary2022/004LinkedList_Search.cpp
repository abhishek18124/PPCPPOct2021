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

bool searchIterative(node* head, int target) {
	while(head) {
		if(head->data == target) {
			return true;
		}
		head = head->next;
	}
	return false;
}

bool searchRecursive(node* head, int target) {
	// base case
	if(!head) { // head == NULL
		return false;
	}

	// recursive case
	if(head->data == target) {
		return true;
	}

	// search for the target in the linked list that
	// starts from the node that comes after the head
	// node -- ask your friend
	return searchRecursive(head->next, target);
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

	searchIterative(head, 11) ? cout << "true" << endl :
	                            cout << "false" << endl;

	searchRecursive(head, 12) ? cout << "true" << endl :
	                            cout << "false" << endl;


	return 0;
}