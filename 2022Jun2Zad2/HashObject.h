#pragma once
#include <iostream>
using namespace std;
class HashObject
{
private:
	char* key;
	char* record;
	char* prezime;
	double prosek;
public:
	HashObject();
	HashObject(char* k, char* v);
	HashObject(char* j, char* i, char* p, double pr);
	HashObject(HashObject const& obj);
	~HashObject();
	HashObject& operator = (HashObject const& obj);
	bool operator == (HashObject const& obj);
	void deleteRecord();
	char* getKey() { return key; }
	char* getRecord() { return record; }
	char* vratiPrezime() { return prezime; }
	double vratiProsek() { return prosek; }
	bool isEqualKey(char* k) { 
		if (key != NULL) {
			return strcmp(key, k) == 0;
		}
		return false;
	}
	void print();
};