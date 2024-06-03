#include "Boar.h"
#include <iostream>

using namespace std;

FBoar::FBoar()
{
}

FBoar::~FBoar()
{
}

void FBoar::Move()
{
	cout << "¸äµÅÁö";

	FCharacter::Move();
}

void FBoar::Attack()
{
	cout << "¸äµÅÁö";

	FCharacter::Attack();
}
