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


node* getNode(node* temp, int i) {
	int j = 0;
	while(j < i && temp) { // or temp != NULL
		temp = temp->next;
		j++;
	}
	return temp;

}

void deleteAtHead(node*& head) {
	if(!head) { // head == NULL
		return;
	}

	// 1. store the address of the head node in a temp pointer
	node* temp = head;

	// 2. update the pointer to the head to point to the node
	// which comes after the head node
	head = head->next;

	// 3. release the memory pointed by temp pointer
	delete temp;
}

void deleteFromTail(node*& head) {
	if(!head) { // head == NULL
		return;
	}

	if(!head->next) { // head->next == NULL
		deleteAtHead(head);
		return;
	}

	node* prev = NULL;
	node* tail = head;

	while(tail->next) {
		prev = tail;
		tail = tail->next;
	}

	prev->next = NULL;
	delete tail;

}

void deleteAtIndex(node*& head, int idx) {
	if(!head) { // head == NULL
		return;
	}

	if(idx == 0) { 
		deleteAtHead(head);
		return;
	}

	// 1. get hold of the pointer to the node at given idx
	node* cur = getNode(head, idx);
	if(!cur) { // cur == NULL
		// idx supplied by the user is invalid
		return;
	}

	// 2. get hold of the pointer to the node at (idx-1)
	node* prev = getNode(head, idx-1);

	// 3. update the next field of the prev pointer to point
	// to the node that comes after the cur node
	prev->next = cur->next;

	// 4. release the memory pointed by the current pointer
	delete cur;

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

	deleteAtHead(head);

	printLinkedList(head);

	deleteFromTail(head);

	printLinkedList(head);

	deleteAtIndex(head, 2);

	printLinkedList(head);

	return 0;
}