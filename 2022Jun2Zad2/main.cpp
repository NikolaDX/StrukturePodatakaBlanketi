#include "ChainedScatterTable.h"

int main() {
	ChainedScatterTable* t1 = new ChainedScatterTable(64);
	char jmbg1[] = "2004003395432";
	char ime1[] = "Goran";
	char prezime1[] = "Jankovic";
	ChainedScatterObject* o1 = new ChainedScatterObject(jmbg1, ime1, prezime1, 5.00);
	char jmbg2[] = "2104003395534";
	char ime2[] = "Zoran";
	char prezime2[] = "Jankovic";
	ChainedScatterObject* o2 = new ChainedScatterObject(jmbg2, ime2, prezime2, 4.56);
	char jmbg3[] = "2104003395435";
	char ime3[] = "Dragan";
	char prezime3[] = "Markovic";
	ChainedScatterObject* o3 = new ChainedScatterObject(jmbg3, ime3, prezime3, 4.91);

	t1->insert(*o1);
	t1->insert(*o2);
	t1->insert(*o3);

	t1->print();

	delete t1;

	return 0;
}