#include "LList.h"

int main() {
	LList* l1 = new LList();

	l1->addToHead(5);
	l1->addToHead(4);
	l1->addToHead(3);
	l1->addToHead(2);
	l1->addToHead(1);

	l1->printAll();

	cout << l1->reverseOrder(2, 5) << endl;

	l1->printAll();

	delete l1;

	return 0;
}