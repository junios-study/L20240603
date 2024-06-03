#include "Slime.h"
#include <iostream>

using namespace std;

FSlime::FSlime()
{
}

FSlime::~FSlime()
{
}

void FSlime::Move()
{
	cout << "슬라임";

	FCharacter::Move();
}

void FSlime::Attack()
{
	cout << "슬라임";

	FCharacter::Attack();
}
