#include <iostream>

using namespace std;

struct Adresa {
  char grad[30];
  char ulica[30];
};

struct Student {
  char ime[20];
  char prezime[20];
  int broj_indeksa;
  int godina;
  Adresa adresa;
};

int main() {
    Student studenti[3];

    cout << "Unesi podatke za studente:" << endl;
    for (int i = 0; i < 3; i++) {
      cout << (i + 1) << ". student:" << endl;
      cin >> studenti[i].ime;
      cin >> studenti[i].prezime;
      cin >> studenti[i].broj_indeksa;
      cin >> studenti[i].godina;
      cin >> studenti[i].adresa.grad;
      cin >> studenti[i].adresa.ulica;
    }

    for (int i = 0; i < 3; i++) {
      if (studenti[i].broj_indeksa > 8000 && studenti[i].godina == 2) {
        cout << studenti[i].ime << " " << studenti[i].prezime;
      }
    }
}
