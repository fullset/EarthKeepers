#pragma once
class City
{
public:
	~City();
	static City& getInstance();

private:
	City();
	City(const City&);
	const City& operator=(const City&);
};

