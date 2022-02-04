/*

Desing an algorithm to perform each of the following operations on a BST

	1. Insertion into a BST
	2. Find the minimum and maximum data present in a BST
	3. Search for a key in a BST
	4. Deletion in a BST

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


void inorder(node* root) {
	if(root == NULL) {
		return;
	}

	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main() {

	node* root = NULL;

	// build a BST
	
	// traverse the BST using inorder traversal
	
	// find min and max data in the BST

	// check if there exists a node in the BST with the given key or not

	// delete a node in the BST with the given key
	
	return 0;
}
