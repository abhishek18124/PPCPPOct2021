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

node* sumOfLinkedList(node* head1, node* head2) {

	node* head = NULL; // head of the final ans
	node* tail = NULL; // tail of the final ans
	int carry  = 0;

	while(head1 != NULL && head2 != NULL) {
		int sum = head1->data + head2->data + carry;
		carry = sum/10;
		node* n = new node(sum%10);
		
		if(head == NULL) {
			head = tail = n;
		} else {
			tail->next = n;
			tail = n;
		}

		head1 = head1->next;
		head2 = head2->next;
	}

	while(head1 != NULL) {
		int sum = head1->data + carry;
		carry = sum/10;
		node* n = new node(sum%10);
		
		if(head == NULL) {
			head = tail = n;
		} else {
			tail->next = n;
			tail = n;
		}

		head1 = head1->next;
	}


	while(head2 != NULL) {
		int sum = head2->data + carry;
		carry = sum/10;
		node* n = new node(sum%10);
		
		if(head == NULL) {
			head = tail = n;
		} else {
			tail->next = n;
			tail = n;
		}

		head2 = head2->next;
	}

	if(carry) {
		node* n = new node(carry);
		if(head == NULL) {
			head = tail = n;
		} else {
			tail->next = n;
			tail = n;
		}
	}

	return head;

}

node* sumOfLinkedList(node* head1, node* head2) {

	node* head = NULL;
	node* tail = NULL;

	int carry = 0;

	while(head1 != NULL || head2 != NULL || carry) {
		int d1 = head1 != NULL ? head1->data : 0;
		int d2 = head2 != NULL ? head2->data : 0;

		int sum = d1 + d2 + carry;
		carry = sum/10;
		node* n = new node(sum%10);

		if(head == NULL) {
			head = tail = n;
		} else {
			tail->next = n;
			tail = n;
		}

		head1 = head1 != NULL ? head1->next : NULL;
		head2 = head2 != NULL ? head2->next : NULL;

	}

	return head;

}



int main() {

	node* head1 = NULL;

	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);
	insertAtHead(head1, 9);

	printLinkedList(head1);

	node* head2 = NULL;

	insertAtHead(head2, 9);
	insertAtHead(head2, 9);
	insertAtHead(head2, 9);

	printLinkedList(head2);

	node* head = sumOfLinkedList(head1, head2);

	printLinkedList(head);

	return 0;
}