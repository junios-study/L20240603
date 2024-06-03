#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

#include "Character.h"

int main()
{
	srand((unsigned int)time(0));

	vector<FCharacter*> Characters;
	Characters.push_back(new FPlayer());


	for (int i = 0; i < 3; ++i)
	{
		int Type = rand() % 10; //0-9
		switch (Type)
		{
		case 6: 
		case 7:
		case 8:
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
		for (int i = 0; i < Characters.size(); ++i)
		{
			FPlayer* Player = dynamic_cast<FPlayer*>(Characters[i]);
			if (Player)
			{
				Player->Pickup();
			}
			else
			{
				Characters[i]->Move();
			}

		}
		//for (auto Character : Characters)
		//{
		//	Character->Move();
		//}
	}

	for (auto Character : Characters)
	{
		delete Character;
	}
	Characters.clear();

	return 0;
}
