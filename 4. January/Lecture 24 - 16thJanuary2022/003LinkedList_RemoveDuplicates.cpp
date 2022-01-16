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

node* removeDuplicates(node* head) {

	node* prev= head;
	node* cur = head->next;

	while(cur != NULL) {
		// check if current node contains data that
		// you are seeing for the first time or not
		if(cur->data != prev->data) {
			// track the current node
			prev->next = cur;
			prev = cur;
			cur = cur->next;
		} else {
			// skip the current node
			cur = cur->next;
		}
	}

	prev->next = NULL; // to ensure the next pointer of the tail of the
	                   // updated list contains the NULL address

	return head;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 5);
	insertAtHead(head, 5);
	insertAtHead(head, 4);
	insertAtHead(head, 4);
	insertAtHead(head, 3);
	insertAtHead(head, 2);
	insertAtHead(head, 2);
	insertAtHead(head, 1);

	printLinkedList(head);

	head = removeDuplicates(head);

	printLinkedList(head);

	return 0;
}