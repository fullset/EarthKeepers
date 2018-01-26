#pragma once
#include "AbstractCard.h"
class DistrictCard :
	public AbstractCard
{
public:
	DistrictCard(std::string& name, std::string& badside, std::string& goodside):
		_name(name),
		_goodside(goodside),
		_badside(badside)
	{};

	virtual ~DistrictCard();
	virtual int getBackground() { return 0; };
	virtual int getForm() { return 0; };
	virtual std::string getTitle() { return _name; };
	std::string getBadside() { return _badside; };
	std::string getGoodside() { return _goodside; };

private:
	std::string _name;
	std::string _badside;
	std::string _goodside;
};

