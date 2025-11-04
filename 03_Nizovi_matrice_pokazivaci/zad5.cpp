#include <iostream>

using namespace std;

void povecaj_za_10(int a) {
  a = a + 10; // a unutar funkcije iznosi 25
  cout << "Unutar funckije a je " << a << endl;
}

void povecaj_za_10_pok(int *a) {
  *a = *a + 10;
  cout << "Unutar funckije s pokazivacem a je " << *a << endl;
}

void zamjeni(int *a, int *b) {
  int pom = *a;
  *a = *b;
  *b = pom;
}

int main() {
  int a = 15;
  cout << a << endl; // ispisuje 15
  povecaj_za_10(a); // povecava samo varijablu unutar funkcije
  cout << a << endl; // vrijenost od a je i dalje 15
  
  povecaj_za_10_pok(&a); // Saljemo adresu od a, i to s je u njoj povecavamo za 10
  cout << "Nakon funckije s pokazivacem a je " << a << endl;
  
  int b = 10;
  cout << a << " - " << b << endl;

  zamjeni(&a, &b);
  cout << a << " - " << b;
}
