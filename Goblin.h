#pragma once
#include "Character.h"

class FGoblin : public FCharacter
{
public:
	FGoblin();
	virtual ~FGoblin();

	void Move();
	void Attack();
};

