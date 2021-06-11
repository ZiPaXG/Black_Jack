#pragma once
#include <windows.h>
#include <iostream>
#include "Cards.h"
#include <vector>

using namespace std;

class Croupier
{
private:
	vector<Cards> masCards;

public:
	Croupier();
	void getDeck();
	Cards getRandCards();
};