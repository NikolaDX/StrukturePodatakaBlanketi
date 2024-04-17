#pragma once
#include "ScatterObject.h"
class ChainedScatterObject :
	public ScatterObject
{
public:
	int next;
public:
	ChainedScatterObject() : ScatterObject() { next = -1; }
	ChainedScatterObject(char* k, char* v) : ScatterObject(k, v) { next = -1; }
	ChainedScatterObject(char* k, char* v, int n) : ScatterObject(k, v) { next = n; }
	ChainedScatterObject(char* j, char* i, char* p, double pr) : ScatterObject(j, i, p, pr) { next = -1; }
	ChainedScatterObject(char* j, char* i, char* p, double pr, int n) : ScatterObject(j, i, p, pr) { next = n; }
	ChainedScatterObject(ChainedScatterObject const& obj);
	ChainedScatterObject& operator = (ChainedScatterObject const& obj);
	void print();
};

