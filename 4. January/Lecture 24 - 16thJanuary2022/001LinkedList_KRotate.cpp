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

node* rotateLinkedList(node* head, int k) {
	if(!head) {
		return head;
	}

	// 1. form a loop by connecting the tail of the given
	// linked list with the head of the linked list

	node* tail = head;
	int n = 1;
	while(tail->next != NULL) {
		tail = tail->next;
		n++;
	}
	tail->next = head;

	// 2. get hold of the pointer to the newTail which can
	// be found at the (n-(k%n)-1)th index
	node* newTail = head;
	for(int i=0; i<n-(k%n)-1; i++) {
		newTail = newTail->next;
	}

	// 3. get hold of the pointer to the newHead
	node* newHead = newTail->next;

	// 4. break the cycle by updating the next pointer of
	// the newTail
	newTail->next = NULL;

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

	int k = 6;

	head = rotateLinkedList(head, k);

	printLinkedList(head);

	return 0;
}