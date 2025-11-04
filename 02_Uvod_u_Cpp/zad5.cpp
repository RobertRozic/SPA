#include <iostream>

using namespace std;

void savrsen_broj(int);

int main() {
	int broj;
	cout << "Unesite neki broj" << endl;
	cin >> broj;
	savrsen_broj(broj);
}

void savrsen_broj(int broj) {
	int suma = 0;
	for (int i = 1; i < broj; i++) {
		if (broj % i == 0) {
			suma += i;
		}
	}
	if (broj == suma) {
		cout << "Broj je savrsen";
	} else {
		cout << "Broj nije savrsen";
	}
}
