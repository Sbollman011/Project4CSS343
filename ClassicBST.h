#ifndef CLASSIC_BST_H
#define CLASSIC_BST_H
#include "MovieBST.h"
#include "Drama.h"
#include "Classic.h"

using namespace std;

class ClassicBST : public MovieBST {
public:
	struct Node {
		Classic* data;
		Node* left;
		Node* right;
	};
	//allows for using Node instead of sruct Node
	using Node = struct Node;

	ClassicBST();
	~ClassicBST();
	bool insert(Classic& newData);
	bool helpInsert(Node*& thisNode, Classic* newData);
	void printTree();
	void printTree(Node*& movieNode);

	Classic* retrieve(Classic& pd);

	ClassicBST::Node* contains(Node* curr, const Classic& pd) const;


	Node* root;
};
#endif	//CLASSSIC_BST_H