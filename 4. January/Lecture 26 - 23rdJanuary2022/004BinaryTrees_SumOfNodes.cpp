/*

Given the pre-order traversal of a binary tree, design a recursive algorithm to 
compute the sum of nodes inside the binary tree

Example : Input  :10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
          Output : 280
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

int computeSumOfNodes(node*  root) {

	// base case
	if(root == NULL) {
		// compute the sum of nodes in an empty tree 
		return 0;
	}

	// recursive case

	// 1. compute the sum of nodes in the leftSubtree -- ask your friend
	int X = computeSumOfNodes(root->left);

	// 2. compute the sum of nodes in the rightSubtree -- ask your friend
	int Y = computeSumOfNodes(root->right);

	return X+Y+root->data;

}

int main() {

	node* root = buildTree();
	cout << computeSumOfNodes(root) << endl;

	return 0;
}

