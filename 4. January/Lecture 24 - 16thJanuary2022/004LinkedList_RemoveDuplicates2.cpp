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

	// base case
	if(!head || !head->next) { // or head == NULL || head->next == NULL
		return head;
	}

	// recursive case

	if(head->data != head->next->data) {
		// head node of the given linked list is a distinct node
		// and therefore it will part of the final linked list.
		// moreover, it will represent the head of the final linked list
		node* headFromMyFriend = removeDuplicates(head->next);
		head->next = headFromMyFriend;
		return head;
	} else {
		// head node is duplicate node therefore, it is our responsibility
		// to delete all the nodes in the sub-list of which the head
		// node is part of
		while(head->next != NULL && head->data == head->next->data) {
			head = head->next;
		}
		// delete all the duplicates in remaining sublist -- ask your friend
		node* headFromMyFriend = removeDuplicates(head->next);
		return headFromMyFriend;
	}

}

int main() {

	node* head = NULL;

	insertAtHead(head, 5);
	insertAtHead(head, 4);
	insertAtHead(head, 4);
	insertAtHead(head, 3);
	insertAtHead(head, 2);
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	insertAtHead(head, 1);
	insertAtHead(head, 1);

	printLinkedList(head);

	head = removeDuplicates(head);

	printLinkedList(head);

	return 0;
}