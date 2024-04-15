#include "LList.h"

int main() {
	LList* l1 = new LList();

	l1->addToHead(5);
	l1->addToHead(4);
	l1->addToHead(8);
	l1->addToHead(9);
	l1->addToHead(10);

	l1->printAll();

	cout << l1->MoveSectionToHead(4, 5) << endl;

	l1->printAll();

	delete l1;

	return 0;
}