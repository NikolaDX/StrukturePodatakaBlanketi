#include "LList.h"

int main() {
	LList* l1 = new LList();
	LListNode* s1 = new LListNode(95, "20202", "Zoran");
	LListNode* s2 = new LListNode(38, "20202", "Janko");
	LListNode* s3 = new LListNode(91, "20202", "Goran");
	LListNode* s4 = new LListNode(85, "20202", "Zvonko");
	LListNode* s5 = new LListNode(55, "20202", "Dule");

	l1->addStudent(s1);
	l1->addStudent(s2);
	l1->addStudent(s3);
	l1->addStudent(s4);
	l1->addStudent(s5);

	l1->printAll();

	cout << l1->MoveHigher(80) << endl << endl;

	l1->printAll();

	delete l1;

	return 0;
}