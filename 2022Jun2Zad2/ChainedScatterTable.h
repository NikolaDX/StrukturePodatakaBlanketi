#pragma once
#include "HashTable.h"
#include "ChainedScatterObject.h"
class ChainedScatterTable :
	public HashTable
{
protected:
	ChainedScatterObject* array;
	int lrmp;
public:
	ChainedScatterTable(int length);
	~ChainedScatterTable();
	void insert(ChainedScatterObject obj);
	void print();
	bool pronadjiStudenta(char* key);
};

