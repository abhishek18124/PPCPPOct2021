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
	if(!head) { // or head == NULL
		// linked list is empty
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

int main() {

	node* head = NULL;

	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	node* midPoint = getMidPoint(head);

	if(midPoint != NULL) {
		cout << midPoint->data << endl;
	} else {
		cout << "linked list is empty" << endl;
	}

	return 0;
}