#include <iostream>
#include "Initializer.h"
#include "CardsDeserializer.h"
#include "DistrictCard.h"
#include "SolutionCard.h"

Initializer::Initializer()
{
}

Initializer::~Initializer()
{
}


Initializer& Initializer::GetInstance()
{
	static Initializer init;
	return init;
}

void Initializer::InitializeCards()
{
	this->InitializeDistrictCards();
	this->InitializeProblemCards();
}

void Initializer::InitializeDistrictCards()
{
	CardsDeserializer cd("c:\\Users\\Интернет\\Documents\\Visual Studio 2013\\Projects\\EarthKeepers\\SerializedData\\Districts.xml");

	std::vector<AbstractCard*> Districts = cd.Deserialize(CardsDeserializer::DISTRICT_CARDS);
	for (int i = 0; i < Districts.size(); i++)
	{
		DistrictCard* d = static_cast<DistrictCard*>(Districts[i]);
		std::cout << d->getTitle() << std::endl;
		std::cout << d->getBadside() << std::endl;
		std::cout << d->getGoodside() << std::endl;
		std::cout << std::endl;
	}
}

void Initializer::InitializeProblemCards()
{
	CardsDeserializer cd("c:\\Users\\Интернет\\Documents\\Visual Studio 2013\\Projects\\EarthKeepers\\SerializedData\\Solutions.xml");

	std::vector<AbstractCard*> Solutions = cd.Deserialize(CardsDeserializer::SOLUTION_CARDS);
	for (int i = 0; i < Solutions.size(); i++)
	{
		SolutionCard* s = static_cast<SolutionCard*>(Solutions[i]);
		std::cout << s->getTitle() << std::endl;
		std::cout << "Air count:" << s->GetAirCount() << std::endl;
		std::cout << "Water count:" << s->GetWaterCount() << std::endl;
		std::cout << "Energy count:" << s->GetEnergyCount() << std::endl;
		std::cout << "Mountains count:" << s->GetMountainCount() << std::endl;
		std::cout << "Has key:" << s->HasKey() << std::endl;
		std::cout << std::string(&s->GetText()[0]) << std::endl;
		std::cout << std::endl;
	}
}
