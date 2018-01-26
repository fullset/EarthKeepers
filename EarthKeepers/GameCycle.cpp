#include "GameCycle.h"


GameCycle::GameCycle()
{
}


GameCycle::~GameCycle()
{
}

GameCycle& GameCycle::getInstance()
{
	static GameCycle gc;
	return gc;
}