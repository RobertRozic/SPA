#include <iostream>

using namespace std;

struct Adresa {
  char grad[30];
  char ulica[30];
};

struct Student {
  char ime_prezime[50];
  int broj_indeksa;
  int godina;
  Adresa adresa;
  void ispisi() {
    cout << ime_prezime << endl;
    cout << godina << endl;
    cout << adresa.grad << endl;
  }
  void promijeniGodinu(int broj) {
    godina = broj;
    cout << "Promijenili ste godinu na: " << godina << endl;
  }
};

//void ispisi(Student s) {
//    cout << s.ime_prezime << endl;
//    cout << s.godina << endl;
//    cout << s.adresa.grad << endl;
//}

int main() {
  Student s = {
    "Ivo Ivic", 8131, 2, {
      "Mostar",
      "Rudnik bb"
    }
  };
  //ispisi(s);
  s.ispisi();
  s.promijeniGodinu(3);
  s.ispisi();
}
