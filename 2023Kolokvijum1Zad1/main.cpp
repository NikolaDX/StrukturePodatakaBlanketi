#include "LList.h"

int main() {
	LList* l1 = new LList();

	l1->addToHead(5);
	l1->addToHead(4);
	l1->addToHead(3);
	l1->addToHead(2);
	l1->addToHead(1);
	l1->addToHead(6);
	l1->addToHead(7);
	l1->addToHead(8);

	l1->printAll();

	cout << l1->SwapPairs(8, 5) << endl;

	l1->printAll();

	delete l1;

	return 0;
}