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

node* merge(node* head1, node* head2) {
	// base
	if(head1 == NULL) {
		// first linked list is empty
		return head2;
	}

	if(head2 == NULL) {
		// second linked list is empty
		return head1;
	}

	// recursive case

	node* head = NULL;

	if(head1->data < head2->data) {
		// the head of the merged linked list is equal to the head of the first linked list
		head = head1;
		// merge the sub-list that starts from head1->next with the second linked list
		node* headFromMyFriend = merge(head1->next, head2);
		head->next = headFromMyFriend;
	} else {
		// the head of the merged linked list is equal to the head of the second linked list
		head = head2;
		// merge the sub-list that starts from head2->next with the first linked list
		node* headFromMyFriend = merge(head1, head2->next);
		head->next = headFromMyFriend;
	}

	return head;

}

int main() {

	node* head1 = NULL;

	insertAtHead(head1, 50);
	insertAtHead(head1, 30);
	insertAtHead(head1, 10);

	printLinkedList(head1);

	node* head2 = NULL;

	insertAtHead(head2, 60);
	insertAtHead(head2, 40);
	insertAtHead(head2, 20);

	printLinkedList(head2);

	node* head = merge(head1, head2);

	printLinkedList(head);

	return 0;
}