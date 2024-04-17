#include"HashTable.h"
#include <cmath>

unsigned int HashTable::h(char* key)
{
	return g(f(key));
}

unsigned int HashTable::f(char* key)
{
	//TODO:Implementirati funkciju koja prevodi char u unsigned int
	unsigned int h = 0;
	for (int i = 0; i < strlen(key); i++)
	{
		if (i != 4 && i != 5 && i != 6) {
			h = (h << 5) | (h >> 27);
			h ^= key[i];
		}
	}
	return h;
}

unsigned int HashTable::g(unsigned int key)
{
	//TODO:Implementirati funkciju koja prevodi unsigned int u [0...M-1]
	unsigned const int a = 2654435769;
	unsigned const int ak = key * a;
	return ak >> (32 - (int)log2(m));
}

