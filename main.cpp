#include <iostream>
#include <vector>

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

	vector<FGoblin*> Goblins;
	vector<FSlime*> Slimes;
	vector<FBoar*> Boars;

	for (int i = 0; i < GoblinCount; ++i)
	{
		Goblins.push_back(new FGoblin());
	}

	for (int i = 0; i < SlimeCount; ++i)
	{
		Slimes.push_back(new FSlime());
	}

	for (int i = 0; i < BoarCount; ++i)
	{
		Boars.push_back(new FBoar());
	}

	while (true)
	{
		Player->Move();
		for (int i = 0; i < Goblins.size(); ++i)
		{
			(rand() % 2 == 0) ? Goblins[i]->Move() : Goblins[i]->Attack();
		}
		for (int i = 0; i < Slimes.size(); ++i)
		{
			(rand() % 2 == 0) ? Slimes[i]->Move() : Slimes[i]->Attack();
		}
		for (int i = 0; i < Boars.size(); ++i)
		{
			(rand() % 2 == 0) ? Boars[i]->Move() : Boars[i]->Attack();
		}
	}




	delete Player;
	for (FGoblin* Goblin : Goblins)
	{
		delete Goblin;
	}
	Goblins.clear();

	for (auto Slime : Slimes)
	{
		delete Slime;
	}
	Slimes.clear();

	for (int i = 0; i < Boars.size(); ++i)
	{
		delete Boars[i];
	}
	Boars.clear();

	return 0;
}
