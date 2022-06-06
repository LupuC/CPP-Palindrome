#include <iostream>
using namespace std;

int main() {
	int nr, n, remaining_nr, reversed_nr = 0; //declaring variables
	cout << "Type a number: "; //displaying "Type a number" text
	cin >> n; //read user input
	nr = n; //pass the variable n value to nr

	while (nr != 0){ //while nr is not equal to 0, loop
		remaining_nr = nr % 10; //remaining nr is equal to the division remainder from nr and 10
		reversed_nr = reversed_nr * 10 + remaining_nr;//reversed nr is equal to reversed nr (0 first time) multiplied
		//by 10 and adding the remaining nr
		nr /= 10; //divide nr variable by 10
	}

	if (n == reversed_nr) {//if n equals to reversed nr
		cout << "The number " << n << " is palindrome!";//display that the number given by user is palindrome 
	}
	else {
		cout << "The number " << n << " is NOT palindrome!";//display that the number given by user is NOT palindrome 
	}

	return 0;
}