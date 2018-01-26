#pragma once
class GameCycle
{
public:	
	~GameCycle();
	static GameCycle& getInstance();

private:
	GameCycle();
	GameCycle(const GameCycle&);
	const GameCycle& operator=(const GameCycle&);
};

