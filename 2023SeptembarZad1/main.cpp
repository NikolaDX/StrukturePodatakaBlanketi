#include "LList.h"

int main() {
	LList* l1 = new LList();

	int N = 5;
	int* A = new int[5];
	A[0] = 7;
	A[1] = 6;
	A[2] = 3;
	A[3] = 9;
	A[4] = 1;

	for (int i = 0; i < N; i++) {
		int maxIndex = i; 
		for (int j = i; j < N; j++) {
			if (A[j] > A[maxIndex]) {
				maxIndex = j;
			}
		}
		int temp = A[i];
		A[i] = A[maxIndex];
		A[maxIndex] = temp;
	}


	for (int i = 0; i < N; i++) {
		l1->addToHead(A[i]);
	}

	l1->printAll();

	delete l1;
	delete[] A;

	return 0;
}