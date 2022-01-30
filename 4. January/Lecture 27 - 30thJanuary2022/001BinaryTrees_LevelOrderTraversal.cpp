/*

given the pre-order traversal of a binary tree, output its level-order traversal.

Example 
	Input : 10 20 40 -1 -1 50 70 -1 -1 -1 30 -1 60 -1 -1
	Output: 10 20 30 40 50 60 70
*/

#include<iostream>
#include<queue>

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

void levelOrder(node* root) {
	queue<node*> q;
	q.push(root);

	while(!q.empty()) {
		node* front = q.front();
		q.pop();

		cout << front->data << " ";
		if(front->left) {
			q.push(front->left);
		}

		if(front->right) {
			q.push(front->right);
		}
	}

	cout << endl;
}

void levelOrderFormatted(node* root) {
	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while(!q.empty()) {
		node* front = q.front();
		q.pop();

		if(!front) {
			// front is equal to NULL
			cout << endl;
			if(!q.empty()) {
				q.push(NULL);
			}
		} else {
			// front is not equal to NULL therefore 
			// process it -- print its value and 
			// visit its child nodes i.e. push them
			// into the queue
			cout << front->data << " ";
			if(front->left) {
				q.push(front->left);
			}

			if(front->right) {
				q.push(front->right);
			}
		}
	}

	cout << endl;
}

int main() {

	node* root = buildTree();

	levelOrder(root);
	levelOrderFormatted(root);

	return 0;
}

