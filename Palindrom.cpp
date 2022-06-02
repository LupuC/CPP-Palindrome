#include <iostream>
using namespace std;

int main() {
	int nr, n, remaining_nr, reversed_nr = 0;
	cout << "Type a number: "; cin >> n;
	nr = n;

	while (nr != 0){
		remaining_nr = nr % 10;
		reversed_nr = reversed_nr * 10 + remaining_nr;
		nr /= 10;
	}

	if (n == reversed_nr) {
		cout << "The number " << n << " is palindrome!";
	}
	else {
		cout << "The number " << n << " is NOT palindrome!";
	}

	return 0;
}