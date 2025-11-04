#include <iostream>

using namespace std;

//int suma_dvoznm();

int suma_dvoznm(int a, int b) {
	int suma = 0;
	for (int broj = 10; broj < 100; broj++){
		suma += broj;
	}
	return suma;
}

int main() {
	int suma;
	suma = suma_dvoznm();
	cout << "Suma dvoznamenkastih brojeva iznosi " << suma << endl;
	/* cout << "Suma dvoznamenkastih brojeva iznosi " << suma_dvoznm()
	<< endl; */
}




