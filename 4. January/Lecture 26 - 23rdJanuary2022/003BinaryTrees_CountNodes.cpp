/*

Given the pre-order traversal of a binary tree, design a recursive algorithm to 
compute the number of nodes inside the binary tree

Example : Input  :10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output : 7
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

node* buildTree() {

	// 1. read the data of the root node
	int data;
	cin >> data;

	if(data == -1) {
		// construct an empty tree and return the pointer to its root
		return NULL;
	}

	// 2. construct the root node
	node* root = new node(data);

	// 3. read the preOrder traversal of the leftSubtree & build the leftSubtree
	root->left = buildTree();

	// 4. read the preOrder traversal of the rightSubtree & build the rightSubtree
	root->right = buildTree();

	return root;

}

int computeNumberOfNodes(node* root) {

	// base case
	
	if(root == NULL) {
		// count the number of nodes in an empty tree
		return 0;
	}

	// recursive case

	// 1. count the number of nodes in the left subtree -- ask your friend
	int X = computeNumberOfNodes(root->left);

	// 2. count the number of nodes in the right subtree
	int Y = computeNumberOfNodes(root->right);

	return X+Y+1;

}

int main() {

	node* root = buildTree();

	cout << computeNumberOfNodes(root) << endl;

	return 0;
}

