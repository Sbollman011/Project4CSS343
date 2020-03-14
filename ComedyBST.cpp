#include "ComedyBST.h"
#include <iostream>

ComedyBST::ComedyBST()
{
}

ComedyBST::~ComedyBST()
{
}

bool ComedyBST::insert(Comedy& newData)
{
	return helpInsert(this->root, &newData);
}

bool ComedyBST::helpInsert(Node*& thisNode, Comedy* newData)
{
	if (thisNode == NULL) {
		thisNode = new Node;
		thisNode->data = newData;
		thisNode->left = NULL;
		thisNode->right = NULL;
		cout << "new Node Created" << endl;
		cout << *(thisNode->data) << endl;
		return true;
	}
	else if (newData < thisNode->data)
	{
		helpInsert(thisNode->left, newData);  // traverse left
	}
	else if (newData > thisNode->data)
	{
		helpInsert(thisNode->right, newData); // traverse right
	}
	else
	{
		return false;   // Node Data already exists
	}
	return true;    //Node inserted successfully
}

void ComedyBST::printTree()
{
	printTree(*&root);
}

void ComedyBST::printTree(Node*& movieNode)
{
	if (movieNode == NULL) {
		return;
	}
	else {

		/* first recur on left child */
		printTree(movieNode->left);

		/* then print the data of node */
		cout << *(movieNode->data) << endl;

		/* now recur on right child */
		printTree(movieNode->right);
	}
}

Comedy* ComedyBST::retrieve(Comedy& pd)
{
	Comedy* nd;
	//check if tree is empty
	if (root == nullptr) {
		cout << &(pd) << endl;
		return &(pd);
	}
	//check value in root
	if (*(root->data) == pd) {
		nd = root->data;
		cout << *(nd) << endl;
		return nd;
	}
	//create new node pointer with retrun value of contains
	Node* newNode = contains(root, pd);
	//check contains != nullptr
	if (newNode == nullptr) {
		cout << "nullptr" << endl;
		return nullptr;
	}
	//assign pointer
	nd = newNode->data;
	cout << *(nd) << endl;
	return nd;
}
ComedyBST::Node* ComedyBST::contains(Node* curr, const Comedy& pd) const
{
	//check curr for nullptr
	if (curr == nullptr) {
		return nullptr;
	}
	//check curr->data
	if (*(curr->data) == pd) {
		return curr;
	}
	//check size of pd, if larger traverse right
	else if (pd > * (curr->data)) {
		return contains(curr->right, pd);
	}
	//check size of pd, if smaller traverse left
	else if (pd < *(curr->data)) {
		return contains(curr->left, pd);
	}
	return curr;
}