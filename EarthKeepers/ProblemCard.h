#pragma once
#include "AbstractCard.h"
#include <vector>

class ProblemCard :
	public AbstractCard
{
public:
	ProblemCard();
	virtual ~ProblemCard();
	std::vector<int>& GetSymbols();
	

private:
	int location;	//TODO: Enum maybe
	std::vector<int> symbols;	//TODO: Enum maybe
};

