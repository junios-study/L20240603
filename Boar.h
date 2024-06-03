#pragma once
#include "Character.h"

class FBoar : public FCharacter
{
public:
	FBoar();
	virtual ~FBoar();

	void Move();
	void Attack();
};

