#include <iostream>

using namespace std;

int main() {
	int niz[10] = {12, 1, -65, 7, 9, 4, 81, 111, -65, 22334};

	cout << "Originalni niz: ";
	for(int i = 0; i < 10; i++){
		cout << niz[i] << endl;
	}
	cout << endl;

	for (int i = 0; i < 9; i++) {
		for (int j=i+1; j < 10; j++) {
			if (niz[i] > niz[j]) {
				int pom = niz[i];
				niz[i] = niz[j];
				niz[j] = pom;
			}
		}
	}

	cout << "Sortirani niz: ";
	for (int i = 0; i < 10; i++) {
		cout << niz[i] <<" ";
	}

	cout << endl;
}
