#include <iostream>

using namespace std;

int main() {
	int Niz[5] = { 1, 2, 3, 4, 5}, *pNiz = Niz;

	cout << "Clanovi niza (koristenjem sintakse niza) su: ";
	for (int i = 0; i < 5; i++)
    	cout << Niz[i] << " ";
	cout << endl;

	cout << "Clanovi niza (koristenjem sintakse niza na pokazivac) su: ";
	for (int i = 0; i < 5; i++)
    	cout << pNiz[i] << " ";
	cout << endl;

	cout << "Clanovi niza (koristenjem sintakse pokazivaca) su: ";
    for (int i = 0; i < 5; i++)
        cout << *(pNiz + i) << " ";
	cout << endl;

	cout << "Clanovi niza (koristenjem sintakse pokazivaca na ime niza) su: ";
    for (int i = 0; i < 5; i++)
        cout << *(Niz + i) << " ";
	cout << endl;

        int X = 100;
	pNiz = &X;
	cout << "pNiz sada pokazuje na " << pNiz << "." << endl;

	cout << "Clanovi niza (koristenjem sintakse niza na pokazivac) su: ";
    for (int i = 0; i < 5; i++)
        cout << pNiz[i] << " ";
	cout << endl;
}
