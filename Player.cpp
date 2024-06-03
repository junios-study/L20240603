#include "Player.h"
#include <iostream>

using namespace std;

FPlayer::FPlayer()
{
}

FPlayer::~FPlayer()
{
}

void FPlayer::Move()
{
	cout << "플레이어";

	FCharacter::Move();

}

void FPlayer::Attack()
{
	cout << "플레이어";

	FCharacter::Attack();
}

void FPlayer::Pickup()
{
	cout << "플레이어가 집다.";
}

void FPlayer::Die()
{
}
