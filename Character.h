#pragma once


class FCharacter
{
public:
	FCharacter();
	virtual ~FCharacter();

	void Move();
	void Attack();


	inline int GetHP() { return HP; }
	void SetHP(int NewHP);

protected:
	int HP;
};

