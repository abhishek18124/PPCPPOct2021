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

bool checkCycle(node* head) {
	node* slow = head;
	node* fast = head;

	while(fast != NULL && fast->next != NULL) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast) {
			return true;
		}
	}

	return false;	

}

void removeCycle(node* head) {

	node* slow = head;
	node* fast = head;

	while(fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
		if(slow == fast) {
			// slow and fast have reached the meeting point.
			break;
		}
	}

	node* prev = head;
	while(prev->next != fast) {
		prev = prev->next;
	}

	fast = head;
	while(slow != fast) {
		prev = prev->next;
		slow = slow->next;
		fast = fast->next;
	}

	prev->next = NULL;


}

int main() {

	node* head = new node(10);
	head->next = new node(20);
	head->next->next = new node(30);
	head->next->next->next = new node(40);
	head->next->next->next->next = new node(50);
	head->next->next->next->next->next = new node(60);
	head->next->next->next->next->next->next = new node(70);
	head->next->next->next->next->next->next->next = new node(80);
	head->next->next->next->next->next->next->next->next = head->next->next->next;

	checkCycle(head) ? cout << "Cycle is present" << endl :
	                   cout << "Cycle is not present" << endl;


	if(checkCycle(head)) {
		removeCycle(head);
		printLinkedList(head);
	}
 	
	return 0;
}