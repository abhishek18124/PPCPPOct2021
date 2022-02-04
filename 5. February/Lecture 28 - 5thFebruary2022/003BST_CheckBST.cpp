/*

Given a binary tree, design an algorithm to check if the given tree is a BST or not.

*/

#include<iostream>

using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int data) {
		this->data = data;
		this->left = this->right = NULL;
	}
};

int main() {

	// sample BT

	node* root = NULL;

	root = new node(10);
	
	root->left = new node(5);
	root->left->left  = new node(3);
	root->left->right = new node(7);

	root->right = new node(15);
	root->right->left  = new node(13);
	root->right->right = new node(17);
	
	return 0;
}