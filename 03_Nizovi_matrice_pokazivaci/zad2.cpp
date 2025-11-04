#include <iostream>

using namespace std;

int main() {
  int M[3][3], suma = 0;

  cout << "Unesi elemente matrice M:" << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> M[i][j];
    }
  }

  cout << endl << "Matrica M: " << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << M[i][j] << " ";
    }
    cout << endl;
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (i == j) {
        suma += M[i][j];
      }
    }
  }

  cout << endl << "Suma elemenata na glanoj dijagonali je " << suma << endl;

}
