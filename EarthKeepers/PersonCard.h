#pragma once
#include "AbstractCard.h"
class PersonCard :
	public AbstractCard
{
public:
	PersonCard();
	virtual ~PersonCard();

	int getPower();

private:
	int Power;		//TODO: Enum Maybe
};

