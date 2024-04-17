#include "ChainedScatterTable.h"

int main() {
	ChainedScatterTable* t1 = new ChainedScatterTable(64);
	char oznaka1[] = "19ELFRI3456";
	char predmet1[] = "Uvod u racunarstvo";
	ChainedScatterObject* o1 = new ChainedScatterObject(oznaka1, predmet1);
	char oznaka2[] = "19ELFEN3457";
	char predmet2[] = "Uvod u inzenjerstvo";
	ChainedScatterObject* o2 = new ChainedScatterObject(oznaka2, predmet2);
	char oznaka3[] = "19ELFRI3458";
	char predmet3[] = "Algoritmi i programiranje";
	ChainedScatterObject* o3 = new ChainedScatterObject(oznaka3, predmet3);


	t1->insert(*o1);
	t1->insert(*o2);
	t1->insert(*o3);

	t1->print();

	t1->deleteElement(oznaka3);

	t1->print();

	delete t1;

	return 0;
}