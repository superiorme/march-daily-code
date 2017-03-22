#include<Cstdlib>
#include<Ctime>
#include<windows.h>
#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
void RandomRectangle()

using namespace std;


int main() {

	ALLEGRO_DISPLAY *display = NULL;

	al_init();

	al_init_primitives_addon();

	display = al_create_display(1000, 1000);

	al_clear_to_color(al_map_rgb(0, 0, 0));


	int RandomNumber;
	int RandomNumber2;
	int RandomNumber3;
	int RandomNumber4;
	int RandomNumber5;
	int RandomNumber6;
	int RandomNumber7;
	int RandomNumber8;


	srand(static_cast<unsigned int>(time(0)));
	while (1)
		RandomNumber = rand();
	int die1 = (RandomNumber % 900) + 100;
		cout<<RandomNumber<<endl;
		int die2 = (RandomNumber2 % 900) + 100;
			cout << RandomNumber2 << endl;
	int die3 = (RandomNumber3 % 900) + 100;
		cout << RandomNumber3 << endl;
		int die4 = (RandomNumber4 % 900) + 100;
		cout << RandomNumber4 << endl;
		int die5 = (RandomNumber5 % 900) + 100;
			cout << RandomNumber5 << endl;
			int die6 = (RandomNumber6 % 250) + 100;
			cout << RandomNumber6 << endl;
			int die7 = (RandomNumber7 % 900) + 100;
			cout << RandomNumber7 << endl;
			int die8 = (RandomNumber8 % 900) + 100;
			cout << RandomNumber8 << endl;


	al_draw_rectangle(dice1, dice2, dice3, dice4,al_map_rbg (dice5,dice6,dice7 )dice8)








}
