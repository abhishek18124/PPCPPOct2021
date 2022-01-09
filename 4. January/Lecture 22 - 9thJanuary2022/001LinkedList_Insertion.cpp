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

// node* insertAtHead(node* head, int data) {

// 	// 1. create a new node dynamically with the given data
// 	node* n = new node(data);

// 	// 2. assign to the next field of the newly created node
// 	// the address of the head of the linked list which is 
// 	// stored in the pointer to the head node
// 	n->next = head; // (*n).next = head;

// 	// 3. make the newly created node as the new head of the
// 	// linked list
// 	head = n;

// 	return head;

// }

void printLinkedList(node* head) {

	while(head) { // or head != NULL
		cout << head->data << " ";
		head = head->next;
	}

	cout << endl;
}

node* getTail(node* tail) {

	while(tail->next) { // or tail->next != NULL
		tail = tail->next;
	}

	return tail;

}

void insertAtTail(node*& head, int data) {
	if(!head) { // head == NULL
		insertAtHead(head, data);
		return;
	}

	// 1. get hold of the pointer to the tail node
	node* tail = getTail(head);

	// 2. create a new node dynamically with the given data
	node* n = new node(data);

	// 3. update the next field of the current tail node
	// to the point to the newly created node
	tail->next = n;

}

node* getNode(node* temp, int i) {
	int j = 0;
	while(j < i && temp) { // or temp != NULL
		temp = temp->next;
		j++;
	}
	return temp;

}

void insertAtIndex(node*& head, int idx, int data) {
	if(head == NULL || idx == 0) {
		insertAtHead(head, data);
		return;
	}

	// 1. get hold of the pointer to the node at the (idx-1)th idx
	node* prev = getNode(head, idx-1);
	
	if(!prev) { // prev == NULL 
		// the idx supplied by the user is invalid
		return;
	}

	// 2. create a new node dynamically with the given data
	node* n = new node(data);

	// 3. update the next pointer of the newly created node to 
	// point to the node that comes after the prev node
	n->next = prev->next;

	// 4. update the next pointer of the prev node to point to
	// the newly created node
	prev->next = n;

}

int main() {

	node* head = NULL; // initally, linked list is empty

	insertAtHead(head, 40);
	insertAtHead(head, 20);
	insertAtHead(head, 10);
	insertAtHead(head, 0);

	printLinkedList(head);

	// head = insertAtHead(head, 40);
	// head = insertAtHead(head, 20);
	// head = insertAtHead(head, 10);
	// head = insertAtHead(head, 0);

	insertAtTail(head, 50);
	insertAtTail(head, 60);

	printLinkedList(head);

	insertAtIndex(head, 3, 30);
	printLinkedList(head);

	return 0;
}