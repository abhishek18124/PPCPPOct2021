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

node* kthNodeFromEnd(node* head, int k) {
	if(head == NULL) {
		// linked list is empty
		return NULL;
	}

	node* fast = head;
	while(k-- && fast != NULL) {
		fast = fast->next;
	}

	if(fast == NULL) {
		// to handle the case when k exceed length of the linked list
		return NULL;
	}

	node* slow = head;
	while(fast != NULL) {
		slow = slow->next;
		fast = fast->next;
	}

	return slow;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 70);
	insertAtHead(head, 60);
	insertAtHead(head, 50);
	insertAtHead(head, 40);
	insertAtHead(head, 30);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	int k = 10;

	node* kthNode = kthNodeFromEnd(head, k);

	if(kthNode != NULL) {
		cout << kthNode->data << endl;
	} else {
		cout << "Either linked list is empty or k exceeds length of the linked list" << endl;
	}


	return 0;
}