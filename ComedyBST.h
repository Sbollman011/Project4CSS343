#ifndef COMEDY_BST_H
#define COMEDY_BST_H
#include "MovieBST.h"
#include "Comedy.h"

using namespace std;

class ComedyBST : public MovieBST {

public:
	struct Node {
		Comedy* data;
		Node* left;
		Node* right;
	};
	//allows for using Node instead of sruct Node
	using Node = struct Node;

	ComedyBST();
	~ComedyBST();
	bool insert(Comedy& newData);
	bool helpInsert(Node*& thisNode, Comedy* newData);
	void printTree();
	void printTree(Node*& movieNode);

	Comedy* retrieve(Comedy& pd);

	ComedyBST::Node* contains(Node* curr, const Comedy& pd) const;


	Node* root;
};
#endif	//COMEDY_BST_H