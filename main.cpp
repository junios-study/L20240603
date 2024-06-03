#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

#include "Player.h"
#include "Goblin.h"
#include "Slime.h"
#include "Boar.h"

#include "Character.h"


class Parent
{
public:
	virtual void Tick()
	{
		cout << "Parent::Do" << endl;
	}

	int Money;
};

class Child : public Parent
{
public:
	virtual void Tick() override
	{
		cout << "Child::Do" << endl;
	}
	int SpendMoney;
};


int main()
{
	//[][][][]
	//
	//Person
	//[P]		[C]			[C]
	//
	//Person[0] Person[1] Person[2]
	//vector
	vector<Parent*> Person;

	Person.push_back(new Parent());
	Person.push_back(new Parent());
	Person.push_back(new Parent());
	Person.push_back(new Child());
	Person.push_back(new Child());
	Person.push_back(new Child());
	Person.push_back(new Child());

	//All Tick
	for (int i = 0; i < Person.size(); ++i)
	{
		Person[i]->Tick();
	}

	//All delete
	for (Parent* Parent : Person)
	{
		delete Parent;
	}

	Person.clear();

	return 0;

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
			Characters[i]->Move();
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
