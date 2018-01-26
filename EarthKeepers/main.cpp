#include <iostream>
#include <clocale>
//#include "GameCycle.h"
//#include "City.h"
//#include "CardsDeserializer.h"
//#include "DistrictCard.h"
#include "Initializer.h"

//int test(GameCycle& c1, const GameCycle& c2)
//{
//	//c1 = c2;
//	return 0;
//}

int main()
{
	setlocale(LC_ALL, "Russian");
	
	Initializer::GetInstance().InitializeCards();

	return 0;
}