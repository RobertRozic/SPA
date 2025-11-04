#include <iostream>

using namespace std;

int main() {
    int X = 10;

    cout << "Varijabla X se nalazi na adresi " << &X <<
      " i ima vrijednost " << X << "." << endl;
    int b = X;
    int *pX = &X;

    cout << "Pokazivac pX pokazuje na adresu " << pX <<
      " na kojoj je vrijednost " << *pX << "." << endl;

    int niz[4] = { 1, 2, 3, 5 };

    int *pniz;
    pniz = niz;

    cout << "niz: " << niz << endl;
    cout << "Adresa prvog elementa: " << &niz[0] << endl;

   *(pniz+1) = 10;

    cout << *(pniz + 1) << endl;
    // ili krace
    // int *pniz = niz;

    for (int i = 0; i < 4; i++){
		cout << niz[i] << " ";
	}

    cout << endl;

    for (int i = 0; i < 4; i++) {
      cout << *(pniz + i) << " ";
    }
}
