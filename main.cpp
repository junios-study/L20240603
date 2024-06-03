#include <iostream>
#include <vector>

using namespace std;

#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

#include "Character.h"

int main()
{
	srand(time(0));

	vector<FCharacter*> Characters;
	Characters.push_back(new FPlayer());

	//excel -> Database(¸·³»)
	int StageMonsterCount[10] = { 10, 10, 1, 2, 2, 2, 3, 3, 5, 6 };
	int Stage = 1;
	for (int i = 0; i < StageMonsterCount[Stage]; ++i)
	{
		int Type = rand() % 10; //0-9
		switch (Type)
		{
		case 0: 
		case 4:
		case 5:
			Characters.push_back(new FGoblin());
			break;
		case 1:
		case 2:
		case 3:
			Characters.push_back(new FSlime());
			break;
		default:
			Characters.push_back(new FBoar());
			break;
		}
	}


	while (true)
	{
		for (auto Character : Characters)
		{
			Character->Move();
		}
	}

	for (auto Character : Characters)
	{
		delete Character;
	}
	Characters.clear();

	return 0;
}
