#ifndef DRAMA_BST_H
#define DRAMA_BST_H
#include "MovieBST.h"
#include "Drama.h"
#include "Movie.h"

using namespace std;

class DramaBST : public MovieBST {

public:
	struct Node {
		Drama* data;
		Node* left;
		Node* right;
	};
	//allows for using Node instead of sruct Node
	using Node = struct Node;

	DramaBST();
	~DramaBST();
	bool insert(Drama& newData);
	bool helpInsert(Node*& thisNode, Drama* newData);
	void printTree();
	void printTree(Node*& movieNode);

	Drama* retrieve(Drama& pd);

	DramaBST::Node* contains(Node* curr, const Drama& pd) const;
	

	Node* root;
};
#endif	//DRAMA_BST_H