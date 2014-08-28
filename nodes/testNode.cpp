/*	Programmer: Tyler Kickham
	Summary: A 20 questions game that learns the more it's played
	DLM: 4/23/14 (tkk) - Node CTORs, GetText, StoreText working
*/

#include <iostream>
#include "Node.h"
#include "Tree.h"
#include <string>
using namespace std;

int main()
{
	string answer;
	
	Tree T("Is it an animal?", "horse", "black hole");
	Node *pCurrent = T.GetRoot();
	
	/*cout << pCurrent->GetText() << endl;
	pCurrent = pCurrent->YChild();
	cout << pCurrent->GetText() << endl;
	*/
	
	cout << pCurrent->GetText() << "	";
	getline(cin, answer);
	if (answer == 'y')
	{
		pCurrent = pCurrent->YChild();
		cout << pCurrent->GetText() << endl;
	}

	// do {
	// 	cout << pCurrent->GetText() << endl;
	// 	pCurrent = pCurrent->YChild();
	// } while (pCurrent->IsLeaf());
}


	/* NEW QUESTION
		string newQ;
		getline(cin, newQ);
	*/


	/* Test Node functions
	Node newNode;
	cout << "Compiled and made a Node\n";

	Node newNode2("cout GetText working/I'm a question?");
	cout << "Compiled and made a Node with a string\n";

	Node copyOfNode2(newNode2);
	cout << "Compiled and copied a Node\n";

	string node2string = newNode2.GetText();
	cout << node2string << endl;

	newNode.StoreText("StoreText working");
	string newNodeText = newNode.GetText();
	cout << newNodeText << endl;*/