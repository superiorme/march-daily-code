#include <iostream>
using namespace std;
void life();
int main() {
	life();
	int input;
	int input2;
	int input3;

	cout << "Hey champ enter 3 numbers" << endl;
	cin >> input;
	cin >> input2;
	cin >> input3;
	if (input > input2 && input2 > input3)
		cout << input3 << input2 << input << endl;
	else if (input2 > input&&input > input3)
		cout << input2 << input << input3 << endl;
	else if (input3 > input2&&input2 > input)
		cout << input3 << input2 << input << endl;
	else if (input > input3&&input3 > input2)
		cout << input << input3 << input2 << endl;



}
void life() {
}
