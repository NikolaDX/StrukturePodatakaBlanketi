#include "LList.h"

int main() {
	LList* l1 = new LList();

	l1->addToHead(6);
	l1->addToHead(5);
	l1->addToHead(9);
	l1->addToHead(1);
	l1->addToHead(3);
	l1->addToHead(4);

	l1->printAll();

	l1->rearrange(4, 5, 1);

	l1->printAll();

	delete l1;

	return 0;
}