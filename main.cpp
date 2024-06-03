#include <iostream>

using namespace std;

#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"


int main()
{
	srand(time(0));
	FPlayer* Player = new FPlayer(); //instantiate

	int GoblinCount = rand() % 3 + 1;
	int SlimeCount = rand() % 3 + 1;
	int BoarCount = rand() % 3 + 1;

	FGoblin* Goblins = new FGoblin[GoblinCount];
	FSlime* Slimes = new FSlime[SlimeCount];
	FBoar* Boars = new FBoar[BoarCount];

	while (true)
	{
		Player->Move();
		for (int i = 0; i < GoblinCount; ++i)
		{
			(rand() % 2 == 0) ? Goblins[i].Move() : Goblins[i].Attack();
		}
		for (int i = 0; i < SlimeCount; ++i)
		{
			(rand() % 2 == 0) ? Slimes[i].Move() : Slimes[i].Attack();
		}
		for (int i = 0; i < BoarCount; ++i)
		{
			(rand() % 2 == 0) ? Boars[i].Move() : Boars[i].Attack();
		}
	}




	delete Player;
	delete[] Goblins;
	delete[] Slimes;
	delete[] Boars;

	return 0;
}
