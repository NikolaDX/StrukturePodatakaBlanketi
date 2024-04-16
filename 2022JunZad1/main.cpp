#include "LList.h"

int main() {
	LList* l1 = new LList();

	l1->addToHead(5);
	l1->addToHead(4);
	l1->addToHead(1);
	l1->addToHead(5);
	l1->addToHead(1);
	l1->addToHead(5);

	l1->printAll();

	l1->GroupElements();

	l1->printAll();

	delete l1;

	return 0;
}