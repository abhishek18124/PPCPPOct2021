
/*
given the pre-order traversal of a binary tree, check if it is height balanced or not

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: true

	Input : 10 20 40 -1 -1 50 -1 -1 30 60 -1 -1 70 -1 -1
	Output: true

	Input : 10 20 30 -1 -1 -1 -1
	Output: false

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

int height(node* root) {

	// base case
	if(root == NULL) {
		// compute the height of an empty tree
		return -1;
	}

	// recursive case

	// 1. compute the height of the leftSubtree -- ask your friend
	int X = height(root->left);

	// 2. compute the height of the rightSubtree -- ask your friend
	int Y = height(root->right);

	return 1 + max(X, Y);

}

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

bool checkBalance(node* root) {

	// base case
	if(!root) {
		// check if empty tree is heightBalanced
		return true;
	}

	// recursive case

	// 1. check if the leftSubTree is heightBalanced -- ask your friend
	bool X = checkBalance(root->left);

	// 2. check if the rightSubTree is heightBalanced -- ask your friend
	bool Y = checkBalance(root->right);

	// 3. check if the root node is heightBalanced
	bool Z = abs(height(root->left)-height(root->right)) <= 1 ? true : false;

	return X && Y && Z;
}

class Pair {
	public :
		bool isBalanced;
		int height;
};

Pair checkBalanceEfficient(node* root) {

	Pair p;

	// base case
	if(!root) {
		// check if emptyTree is heightBalanced and simultaneously compute its height
		p.isBalanced = true;
		p.height = -1;
		return p;
	}

	// recursive case

	// 1. check if the leftSubtree is heightBalanced and simultaneously compute its height
	Pair pL = checkBalanceEfficient(root->left);

	// 2. check if the rightSubtree is heightBalanced and simultaneously compute its height
	Pair pR = checkBalanceEfficient(root->right);

	// 3. check if root node is heightBalanced 
	bool Z = abs(pL.height-pR.height) <= 1 ? true : false;

	p.height = 1 + max(pL.height, pR.height);
	p.isBalanced = pL.isBalanced && pR.isBalanced && Z;

	return p;
}

int main() {

	node* root = NULL;
	root = buildTree();

	checkBalance(root) ? cout << "true" << endl :
	                     cout << "false" << endl;

	Pair p = checkBalanceEfficient(root);
	p.isBalanced ? cout << "true" << endl :
	               cout<< "false" << endl;
 	
 	return 0;
 }