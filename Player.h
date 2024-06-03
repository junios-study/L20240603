#pragma once
#include "Character.h"

class FPlayer : public FCharacter
{
public:
	FPlayer();
	virtual ~FPlayer();

	void Move();
	void Attack();

protected:
	void Die();


};

