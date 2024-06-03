#include "Goblin.h"
#include <iostream>

using namespace std;

FGoblin::FGoblin()
{
}

FGoblin::~FGoblin()
{
}

void FGoblin::Move()
{
	cout << "고블린";

	FCharacter::Attack();
}

void FGoblin::Attack()
{
	cout << "고블린";

	FCharacter::Attack();
}
