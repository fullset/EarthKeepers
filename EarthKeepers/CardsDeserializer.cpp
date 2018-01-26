#include <boost/property_tree/xml_parser.hpp>
#include <boost/property_tree/ptree.hpp>
#include <boost\foreach.hpp>
#include "CardsDeserializer.h"
#include "DistrictCard.h"
#include "SolutionCard.h"

CardsDeserializer::~CardsDeserializer()
{
}

std::vector<AbstractCard*> CardsDeserializer::Deserialize(CARD_TYPE type)
{
	switch (type)
	{
	case SOLUTION_CARDS:
		return this->DeserializeSolutions();
	case PROBLEM_CARDS:
		return this->DeserializeProblems();
	case PERSON_CARDS:
		return this->DeserializePersons();
	case DISTRICT_CARDS:
		return this->DeserializeDistricts();
	default:
		return std::vector<AbstractCard*>();
	}
}

std::vector<AbstractCard*> CardsDeserializer::DeserializeSolutions()
{
	std::ifstream ifs;
	ifs.open(this->_filename, std::ios_base::in);

	using boost::property_tree::ptree;
	ptree pt;
	read_xml(ifs, pt);

	// traverse pt
	std::vector<AbstractCard*> solutions;
	BOOST_FOREACH(ptree::value_type const& v, pt.get_child("solutions"))
	{
		if (v.first == "solution") {
			SolutionCard *s = new SolutionCard(
				v.second.get<int>("number"),
				v.second.get<int>("water"),
				v.second.get<int>("air"),
				v.second.get<int>("energy"),
				v.second.get<int>("mountains"),
				v.second.get<std::string>("text"),
				v.second.get<bool>("key")
				);
								
			solutions.push_back(s);
		}
	}
	return solutions;
}

std::vector<AbstractCard*> CardsDeserializer::DeserializeProblems()
{
	return std::vector<AbstractCard*>();
}

std::vector<AbstractCard*> CardsDeserializer::DeserializePersons()
{
	return std::vector<AbstractCard*>();
}

std::vector<AbstractCard*> CardsDeserializer::DeserializeDistricts()
{
	std::ifstream ifs;
	ifs.open(this->_filename, std::ios_base::in);

	using boost::property_tree::ptree;
	ptree pt;
	read_xml(ifs, pt);

	// traverse pt
	std::vector<AbstractCard*> districts;
	BOOST_FOREACH(ptree::value_type const& v, pt.get_child("districts"))
	{
		if (v.first == "district") {
			DistrictCard *d = new DistrictCard(
				v.second.get<std::string>("name"),
				v.second.get<std::string>("badside"),
				v.second.get<std::string>("goodside")
				);
			districts.push_back(d);
		}
	}
	return districts;
}