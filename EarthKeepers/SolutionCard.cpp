#include "SolutionCard.h"


SolutionCard::SolutionCard(int number, int water, int air, int energy, int mountains, const std::string& text, bool key)
{
	this->_number = number;
	this->_water = water;
	this->_air = air;
	this->_energy = energy;
	this->_mountains = mountains;
	this->_text = std::vector<char>();
	for (auto it = text.begin(); it != text.end(); it++)
	{
		this->_text.push_back(*it);
	}
	this->_text.push_back(0);
	this->_key = key;
}

int SolutionCard::GetNumber()
{
	return this->_number;
}

int SolutionCard::GetWaterCount()
{
	return this->_water;
}

int SolutionCard::GetAirCount()
{
	return this->_air;
}

int SolutionCard::GetEnergyCount()
{
	return this->_energy;
}

int SolutionCard::GetMountainCount()
{
	return this->_mountains;
}

std::vector<char> SolutionCard::GetText()
{
	return this->_text;
}

bool SolutionCard::HasKey()
{
	return this->_key;
}

SolutionCard::~SolutionCard()
{
}
