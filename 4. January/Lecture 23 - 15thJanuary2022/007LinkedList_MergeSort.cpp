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

node* getMidPoint(node* head) {
	if(head == NULL) {
		return head;
	}

	node* slow = head;
	node* fast = head->next;

	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
	}

	return slow;
}

node* merge(node* head1, node* head2) {

	// base case
	if(head1 == NULL) {
		return head2;
	}

	if(head2 == NULL) {
		return head1;
	}

	// recursive case
	node* head = NULL;

	if(head1->data < head2->data) {
		// the node pointed by head1 will be the head of the merged linked list
		head = head1;
		head->next = merge(head1->next, head2);
	} else {
		// the node pointed by head2 will be the head of the merged linked list
		head = head2;
		head->next = merge(head1, head2->next);
	}

	return head;

}

node* mergeSort(node* head) {
	if(head == NULL || head->next == NULL) {
		// linked contains zero node or one node
		return head;
	}

	// recursive case

	// 1. compute the midPoint
	node* midPoint = getMidPoint(head);

	// 2. divide the linked list into sub-lists around the midPoint
	node* head1 = head;
	node* head2 = midPoint->next;
	midPoint->next = NULL;

	// 3. recursively sort the two sub-lists
	head1 = mergeSort(head1);
	head2 = mergeSort(head2);

	// 4. merge the two sorted sub-lists
	head = merge(head1, head2);
	return head;
}

int main() {

	node* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 50);

	printLinkedList(head);

	head = mergeSort(head);

	printLinkedList(head);

	return 0;
}