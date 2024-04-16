#include "LList.h"

int main() {
	LList* l1 = new LList();

	l1->addToHead(1);
	l1->addToHead(3);
	l1->addToHead(5);
	l1->addToHead(6);
	l1->addToHead(60);
	l1->addToHead(50);

	l1->printAll();

	l1->SortList();

	l1->printAll();

	delete l1;

	return 0;
}