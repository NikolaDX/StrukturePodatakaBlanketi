#pragma once
#include <iostream>
using namespace std;
class LListNode
{
public:
	int info;
	char* brIndeksa;
	char* ime;
	LListNode* next;
	LListNode();
	LListNode(int i);
	LListNode(int i, LListNode* n);
	LListNode(int i, const char* br, const char* im);
	LListNode(int i, const char* br, const char* im, LListNode* n);
	void print();
	bool isEqual(int el);
	~LListNode();
};

