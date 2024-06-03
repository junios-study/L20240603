#pragma once
#include "Character.h"

class FSlime : public FCharacter
{
public:
	FSlime();
	virtual ~FSlime();

	void Move();
	void Attack();
};

