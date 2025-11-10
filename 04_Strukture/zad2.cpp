#include <iostream>

using namespace std;

struct Automobil {
  char proizvodac[50];
  char model[50];
  int godina;
  float snaga;
};

int main() {
    Automobil automobili[3];
    cout << "Unesi 3 automobila" << endl;
    for (int i = 0; i < 3; i++) {
      // Napomena - Kada koristimo cin
      // u varijablu se sprema samo onaj dio do razmaka. Npr. ako unesemo
      // Mercedes Benz, ostati ce nam samo Mercedes. Potrebno je koristiti funkciju cin.getline();
      // Radi jednostavnosti koristit cemo cin.
      cout << "Unesi proizvodaca:" << endl;
      cin >> automobili[i].proizvodac;
      cout << "Unesi model:" << endl;
      cin >> automobili[i].model;
      cout << "Unesi godina:" << endl;
      cin >> automobili[i].godina;
      cout << "Unesi snaga:" << endl;
      cin >> automobili[i].snaga;
      cout << "-------------------" << endl;
	}

    for (int i = 0; i < 3; i++) {
        if (automobili[i].snaga > 100) {
            cout << automobili[i].proizvodac << automobili[i].model << ", " <<
            automobili[i].godina << endl;
        }
    }

}
