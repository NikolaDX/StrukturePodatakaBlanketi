#include "OpenScatterTable.h"

int main() {
	char datum1[] = "02.09.2023. 03.28.12";
	char kamera1[] = "345";
	char datum2[] = "02.09.2023. 04.05.15";
	char kamera2[] = "347";

	OpenScatterTable* t1 = new OpenScatterTable(1000);
	ScatterObject* o1 = new ScatterObject(datum1, kamera1);
	ScatterObject* o2 = new ScatterObject(datum2, kamera2);

	t1->insert(*o1);
	t1->insert(*o2);

	t1->print();

	delete t1;


	return 0;
}