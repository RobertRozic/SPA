#include <iostream>

using namespace std;

int main() {
	int suma_parnih = 0;
	int suma_neparnih = 0;
	int privremeni = 0;
	int umnozak = 1;
	int i;
	
	for (i = 10; i > 0; i--) {
		cout << "Unesi " << i+1 << ". broj: ";
		cin >> privremeni;
		if (privremeni % 2 == 0) {
			suma_parnih += privremeni;
		} else {
			suma_neparnih += privremeni;
		}
		umnozak *= privremeni;
	}
	
	cout << "i nakon izvrsavanja programa: " << i << endl;
	cout << "Umnozak iznosi : " << umnozak << endl;
	cout << "Suma parnih iznosi : " << suma_parnih << endl;
	cout << "Suma neparnih iznosi : " << suma_neparnih << endl;
}
