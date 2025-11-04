#include <iostream>

using namespace std;

int main() {
	int suma = 0;
	int privremeni = 0;
	int brojac = 0;
	
	while (suma < 5000) {
		cout << "Unesi broj ";
		cin >> privremeni;
		suma += privremeni;
		brojac++;
	}
	
	cout << "Uneseno brojeva: " << brojac << endl;
	cout << "Suma brojeva:" << suma << endl;
}
