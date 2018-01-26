#pragma once
class Initializer
{
public:	
	static Initializer& GetInstance();	
	void InitializeCards();

private:
	Initializer();
	Initializer(Initializer const&) = delete;
	Initializer& operator= (Initializer const&) = delete;
	~Initializer();
	void InitializeDistrictCards();
	void InitializeProblemCards();

};

