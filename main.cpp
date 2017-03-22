#include <iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

void badguy();


int main() {

	srand(static_cast<unsigned int>(time(0)));

	while (1) {

		badguy();


		system("pause");
	}
}


void badguy() {
	int enemy = rand() % 100;
	if (enemy > 50 && enemy < 100)
		cout << "Goomba!" << endl;
	else if (enemy > 20 && enemy < 50)
		cout << "Koopa!" << endl;
	else if (enemy > 0 && enemy < 20)
		cout << "Shy guy" << endl;
}









