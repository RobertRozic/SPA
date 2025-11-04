#include <iostream>

using namespace std;

int main() {
	int a, b;
	cout << "Unesite stranice pravokutnika" << endl;
	cin >> a >> b;
	if (a > 0 && b > 0) {
		int opseg, povrsina;
		opseg = 2*(a + b);
		povrsina = a * b;
		cout << "Opseg pravokutnika iznosi : " << opseg << endl;
		cout << "Povrsina pravokutnika iznosi : " << povrsina << endl;
	} else if (a <= 0 && b <= 0) { 
		cout << "Obje stranice su manje ili jednake 0" << endl;
	} else {
		cout << "Jedna stranica je manja ili jednaka 0" << endl;
	}
}
