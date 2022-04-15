#include <iostream>
#include <ctime>

using namespace std;

void main() {
	setlocale(LC_ALL, "Russian");
	srand(time(nullptr));
	int randomNumber;
	int mass[2];
	mass[0] = 0;
	mass[1] = 0;
	for (int i = 0; i < 1000000; i++) {
		randomNumber = rand() % 2 + 1;
		if (randomNumber == 1) {
			mass[0]++;
		}
		else {
			mass[1]++;
		}
	}
	cout << "Îð¸ë: " << mass[0] << endl << "Ðåøêà: " << mass[1];
}