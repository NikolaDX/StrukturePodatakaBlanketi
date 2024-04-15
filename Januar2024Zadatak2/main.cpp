#include "OpenScatterTable.h"

int main() {
	OpenScatterTable os(20);

	char ime[] = "Goran";
	char prezime[] = "Jankovic";

	cout << os.signup(25, ime, prezime, 1986, 5) << endl;

	os.print();

	return 0;
}