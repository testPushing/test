#include <iostream>
#include <stdlib.h>

#include "Tree.h"

// ======================================================================
Tree::Tree()								//CTOR
//..........................................
//POST: new tree is created with a root
{
	this->root = new Node;
	
	// NOTE:  we must use the functions in the Node class to change things!
	root->AppendYes( 0 );
	root->AppendNo( 0 );
}//CTOR


// ======================================================================
Tree::Tree(string questionText, string yesObject, string noObject)
//..........................................
//POST: new tree is created with a root with known question and yes/no objects
{
	this->root = new Node(questionText);
	
	// NOTE:  we must use the functions in the Node class to change things!
	root->AppendYes( new Node(yesObject) );
	root->AppendNo( new Node(noObject) );
}//CTOR


// ======================================================================
Tree::~Tree()								//DTOR
{

	// MOM!  my FINGER HURTS!! ...
	// (ok, you'll have to write this one ... :)
	delete(this);
	
	
	
} //DTOR
	
	
// ======================================================================
bool Tree::IsEmpty(void) const
//..........................................
//POST: RETURN == whether or not the root node has children
{
	return (root->NChild() == 0  &&  root->YChild() == 0 );
}// IsEmpty


// ======================================================================
Node* Tree::GetRoot(void) const
//..........................................
//POST: RETURN == address of root node
{
	return root;
}// GetRoot