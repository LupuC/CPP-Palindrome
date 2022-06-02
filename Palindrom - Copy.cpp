#include <iostream>
using namespace std;

int main() {
	int nr, n, nr_ramas, nr_inversat = 0;
	cout << "Introdu un numar: "; cin >> n;
	nr = n;

	while (nr != 0){
		nr_ramas = nr % 10;
		nr_inversat = nr_inversat * 10 + nr_ramas;
		nr /= 10;
	}

	if (n == nr_inversat) {
		cout << "Numarul " << n << " este palindrom!";
	}
	else {
		cout << "Numarul " << n << " NU este palindrom!";
	}

	return 0;
}