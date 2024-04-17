#include "HashObject.h"
using namespace std;
HashObject::HashObject()
{
	key = NULL;
	record = NULL;
	prezime = NULL;
	prosek = NULL;
}

HashObject::HashObject(char* k, char* v)
{
	key = new char[strlen(k) + 1];
	strcpy(key, k);
	record = new char[strlen(v) + 1];
	strcpy(record, v);
}

HashObject::HashObject(char* j, char* i, char* p, double pr)
{
	key = new char[strlen(j) + 1];
	strcpy(key, j);
	record = new char[strlen(i) + 1];
	strcpy(record, i);
	prezime = new char[strlen(p) + 1];
	strcpy(prezime, p);
	prosek = pr;
}

HashObject::~HashObject()
{
	if (key)
		delete[] key;
	if (record)
		delete[] record;
	if (prezime) {
		delete[] prezime;
	}
}

HashObject::HashObject(HashObject const& obj)
{
	key = strcpy(new char[strlen(obj.key) + 1], obj.key);
	record = strcpy(new char[strlen(obj.record) + 1], obj.record);
	prezime = strcpy(new char[strlen(obj.prezime) + 1], obj.prezime);
	prosek = obj.prosek;
}

HashObject& HashObject::operator = (HashObject const& obj)
{
	if (this != &obj)
	{
		if (key)
			delete key;
		key = new char[strlen(obj.key) + 1];
		strcpy(key, obj.key);
		if (record)
			delete record;
		record = new char[strlen(obj.record) + 1];
		strcpy(record, obj.record);
		if (prezime)
			delete prezime;
		prezime = new char[strlen(obj.prezime) + 1];
		strcpy(prezime, obj.prezime);
		prosek = obj.prosek;
	}
	return *this;
}

bool HashObject::operator == (HashObject const& obj)
{
	return (strcmp(this->key, obj.key) == 0) && (strcmp(this->record, obj.record) == 0);
}

void HashObject::deleteRecord() {
	if (record) { delete record; record = NULL; }
}

void HashObject::print()
{
	if (key != NULL)
	{
		cout << key;
	}
	if (record != NULL)
	{
		cout << "|" << record;
	}
	if (prezime != NULL) {
		cout << "|" << prezime;
	}
	if (prosek != NULL) {
		cout << "|" << prosek;
	}
	cout << endl;
}