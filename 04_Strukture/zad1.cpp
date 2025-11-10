#include <iostream>

using namespace std;

struct Automobil {
  char proizvodac[50];
  char model[50];
  int godina;
  float snaga;
};

int main() {
  Automobil auto1 = {
    "Audi",
    "A6",
    2015,
    210
  };

  cout << "Proizvodac: " << auto1.proizvodac << endl;
  cout << "Model: " << auto1.model << endl;
  cout << "Godina: " << auto1.godina << endl;
  cout << "Snaga: " << auto1.snaga << endl;

  auto1.godina = 2017;
  auto1.snaga += 10;

  cout << "Godina: " << auto1.godina << endl;
  cout << "Snaga: " << auto1.snaga << endl;

}
