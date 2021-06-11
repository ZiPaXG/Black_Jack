#pragma once
#include <iostream>
#include "NameCards.h"

using namespace std;

class Cards
{
private:
	int name;
	int suits;

public:
	Cards(int name, int suits) : name{name}, suits{suits}
	{

	};
	string getCards();
	int getPoint();
};