#include <iostream>
using namespace std;

struct Node {
	int value;
	Node* left;
	Node* right;
};

// Function to create node
Node* createNode(int newValue) {
	Node* newNode = new Node();
	newNode->value = newValue;
	newNode->left = nullptr;
	newNode->right = nullptr;
	return newNode;
}

// Function to print all tree elements using preorder traversal
void preOrderPrintTree(Node* n) {
	if(n == nullptr) {
		return;
	}
	cout << n->value << " ";
	preOrderPrintTree(n->left);
	preOrderPrintTree(n->right);
}

// Function to print all tree elements using inorder traversal
void inOrderPrintTree(Node* n) {
	if(n == nullptr) {
		return;
	}
	inOrderPrintTree(n->left);
	cout << n->value << " ";
	inOrderPrintTree(n->right);
}

// Function to print all tree elements using postorder traversal
void postOrderPrintTree(Node* n) {
	if(n == nullptr) {
		return;
	}
	postOrderPrintTree(n->left);
	postOrderPrintTree(n->right);
	cout << n->value << " ";
}

// Function to increment all tree elements using preorder traversal
void preOrderIncrement(Node* n, int incrementValue) {
	if(n == nullptr) {
		return;
	}
	n->value += incrementValue;
	preOrderIncrement(n->left, incrementValue);
	preOrderIncrement(n->right, incrementValue);
}

// Function to increment all tree elements using inorder traversal
void inOrderIncrement(Node* n, int incrementValue) {
	if(n == nullptr) {
		return;
	}
	inOrderIncrement(n->left, incrementValue);
	n->value += incrementValue;
	inOrderIncrement(n->right, incrementValue);
}

// Function to increment all tree elements using postorder traversal
void postOrderIncrement(Node* n, int incrementValue) {
	if(n == nullptr) {
		return;
	}
	postOrderIncrement(n->left, incrementValue);
	postOrderIncrement(n->right, incrementValue);
	n->value += incrementValue;
}

int main() {
	
	Node* root = createNode(1);
	root->left = createNode(2);
	root->left->left = createNode(4);
	root->left->right = createNode(5);
	root->left->right->left = createNode(9);
	root->right = createNode(3);
	root->right->left = createNode(6);
	root->right->right = createNode(7);
	root->right->right->left = createNode(15);
	
	cout << "Tree printed using preorder traversal:" << endl;
	preOrderPrintTree(root);
	cout << endl << endl << "Tree printed using inorder traversal:" << endl;
	inOrderPrintTree(root);
	cout << endl << endl << "Tree printed using postorder traversal:" << endl;
	postOrderPrintTree(root);
	
	preOrderIncrement(root, 3); // Change second function argument to be how much you want to increment each tree element by
	cout << endl << endl << "Tree after preorder incrementation:" << endl;
	cout << "Tree printed using preorder traversal:" << endl;
	preOrderPrintTree(root);
	cout << endl << endl << "Tree printed using inorder traversal:" << endl;
	inOrderPrintTree(root);
	cout << endl << endl << "Tree printed using postorder traversal:" << endl;
	postOrderPrintTree(root);
	
	inOrderIncrement(root, 6); // Change second function argument to be how much you want to increment each tree element by
	cout << endl << endl << "Tree after inorder incrementation:" << endl;
	cout << "Tree printed using preorder traversal:" << endl;
	preOrderPrintTree(root);
	cout << endl << endl << "Tree printed using inorder traversal:" << endl;
	inOrderPrintTree(root);
	cout << endl << endl << "Tree printed using postorder traversal:" << endl;
	postOrderPrintTree(root);
	
	postOrderIncrement(root, 2); // Change second function argument to be how much you want to increment each tree element by
	cout << endl << endl << "Tree after postorder incrementation:" << endl;
	cout << "Tree printed using preorder traversal:" << endl;
	preOrderPrintTree(root);
	cout << endl << endl << "Tree printed using inorder traversal:" << endl;
	inOrderPrintTree(root);
	cout << endl << endl << "Tree printed using postorder traversal:" << endl;
	postOrderPrintTree(root);
}
