#pragma once
#include <string>

class AbstractCard
{
public:
	AbstractCard();
	virtual ~AbstractCard();
	virtual int getBackground() = 0;		//TODO: ����� ������ ����� ������������, ���� ��������������� ������ ����?
	virtual int getForm() = 0;
	virtual std::string getTitle() = 0;

private:
	int Form;			//TODO: Enum maybe	
	int Background;		//TODO: Image must be here
	std::string _title;
};

