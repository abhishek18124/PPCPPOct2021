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

node* reverseIterative(node* head) {

	node* cur = head;
	node* prev= NULL;
	
	while(cur != NULL) {
		node* temp = cur->next;
		cur->next = prev;
		prev = cur;
		cur = temp;
	}

	return prev;
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

bool checkPalindrome(node* head) {
	if(!head) {
		// given linked list is empty
		return true;
	}

	// 1. compute the midPoint of the linked list
	node* midPoint = getMidPoint(head);

	// 2. divide the linked list into two sub-lists around the midPoint
	node* head1 = head;
	node* head2 = midPoint->next;
	midPoint->next = NULL;

	// 3. reverse the second sub-list
	head2 = reverseIterative(head2);

	// 4. match the data of the two sub-lists
	while(head2 != NULL) {
		if(head1->data != head2->data) {
			return false;
		}
		head1 = head1->next;
		head2 = head2->next;
	}

	return true;

}

int main() {

	node* head = NULL;

	insertAtHead(head, 10);
	insertAtHead(head, 20);
	insertAtHead(head, 30);
	insertAtHead(head, 40);
	insertAtHead(head, 20);
	insertAtHead(head, 10);

	printLinkedList(head);

	checkPalindrome(head) ? cout << "Linked List is a Palindrome" << endl :
	                        cout << "Linked List is not a Palindrome" << endl;

	return 0;
}