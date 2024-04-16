#include "LListNode.h"


LListNode::LListNode()
{
	next = NULL;
}

LListNode::LListNode(int i)
{
	info = i;
	next = NULL;
}

LListNode::LListNode(int i, LListNode* n)
{
	info = i;
	next = n;
}

LListNode::LListNode(int i, const char* br, const char* im)
{
	info = i;
	brIndeksa = new char[strlen(br) + 1];
	strcpy(brIndeksa, br);
	ime = new char[strlen(im) + 1];
	strcpy(ime, im);
}

LListNode::LListNode(int i, const char* br, const char* im, LListNode* n)
{
	info = i;
	brIndeksa = new char[strlen(br) + 1];
	strcpy(brIndeksa, br);
	ime = new char[strlen(im) + 1];
	strcpy(ime, im);
	next = n;
}

void LListNode::print()
{
	cout << brIndeksa << " " << ime << " " << info << endl;
}

bool LListNode::isEqual(int el)
{
	return el == this->info;
}

LListNode::~LListNode()
{
}
