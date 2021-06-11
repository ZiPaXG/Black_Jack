#pragma once
#include <iostream>
#include "Cards.h"
#include <windows.h>
#include <vector>

using namespace std;

class Player
{
private:
	string name;
	float money = 100;
	float bet = 0;
	int score = 0;
	vector<Cards> cards;

public:
	Player(string _name) : name{ _name } 
	{

	};
	void setDeckPlayer(Cards card);
	void setScore();
	void setBet(int a);
	void setWin();
	void setDraw();
	int getScore();
	void getDeckPlayer();
	string getName();
	float getMoney();
	int getBet();
	friend int winner(Player player1, Player player2);
};