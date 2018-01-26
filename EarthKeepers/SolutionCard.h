#pragma once
#include <vector>
#include "AbstractCard.h"

class SolutionCard :
	public AbstractCard
{
public:
	SolutionCard(int number, int water, int air, int energy, int mountains , const std::string& text, bool key);

	virtual ~SolutionCard();
	int GetNumber();
	int GetWaterCount();
	int GetAirCount();
	int GetEnergyCount();
	int GetMountainCount();
	std::vector<char> GetText();
	bool HasKey();
	const std::vector<int>& GetSymbols();
	virtual int getBackground() { return 0; };
	virtual int getForm() { return 0; };
	virtual std::string getTitle() { return std::string(); };

private:
	int additionalBackground;	//TODO: Image must be here
	bool haveKey;
	std::vector<int> symbols;	//TODO: Enum maybe
	int _number;
	int _water;
	int _air;
	int _energy;
	int _mountains;
	std::vector<char> _text;
	bool _key;
};

