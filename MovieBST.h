#ifndef MOVIE_BST_H
#define MOVIE_BST_H
#include "Movie.h"

using namespace std;

class MovieBST : public Movie{
	// create a .cpp for each type of movieBST with overloaded function for insert, the rest will be the same.
public:
	struct Node {
		Movie* data;
		Node* left;
		Node* right;
	};
	//allows for using Node instead of sruct Node
	using Node = struct Node;

	MovieBST();
	virtual ~MovieBST();
	void makeEmpty();	//clears the tree
	bool insert(Movie&);
	//bool helpInsert(Node*& thisNode, Movie newData);
	bool helpInsert(Node*&, Movie*);
	//adds new nodes to the tree
	//bool retrieve(const Movie&) const;	 	//gets given node
	void printTree();
	void printTree(Node*&);

	Movie* retrieve(Movie& pd);

	Node* contains(Node* curr, const Movie& pd) const;

	
	Node* root;

	void makeEmpty(Node*&);	//makeEmpty helper
	//bool insert(Movie newData);
	//void retrieve(Node*, const Movie&, Movie*&) const;	//retrieve helper
};

#endif // !MOVIE_BST_H
