#pragma once
#include <string>
#include <vector>
#include "AbstractCard.h"

class CardsDeserializer
{
public:

	static const enum CARD_TYPE{
		PERSON_CARDS,
		SOLUTION_CARDS,
		PROBLEM_CARDS,
		DISTRICT_CARDS
	};

	explicit CardsDeserializer(std::string filename) : _filename(filename){};
	~CardsDeserializer();

	std::vector<AbstractCard*> Deserialize(CARD_TYPE type);

private:
	std::string _filename;

	std::vector<AbstractCard*> DeserializeSolutions();
	std::vector<AbstractCard*> DeserializeProblems();
	std::vector<AbstractCard*> DeserializePersons();
	std::vector<AbstractCard*> DeserializeDistricts();
};

