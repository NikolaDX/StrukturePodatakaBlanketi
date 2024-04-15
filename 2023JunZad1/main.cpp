#include "LList.h"

int main() {
	LList* l1 = new LList();

	l1->addToHead(5);
	l1->addToHead(4);
	l1->addToHead(3);
	l1->addToHead(2);
	l1->addToHead(1);

	l1->printAll();

	LList* l2 = new LList();
	l2->addToHead(4);
	l2->addToHead(3);
	l2->addToHead(2);
	
	cout << l1->deleteSublist(l2) << endl;

	l1->printAll();

	delete l1;
	delete l2;

	return 0;
}