// The Counter Strike 2 cheat (hack) project 09.2024
// by Ayxan Melikov https://github.com/AyxanMelikov

#include <iostream>
using namespace std;

int main() {
	int i{ 1 };
	for (; i <= 10; i++) {
		cout << "Variable i equals \"" << i << "\"\n";
	}

	for (; i <= i + 1; i++) {
		cout << "Variable i equals \"" << i << "\"\n";
	}
	return 0;
}