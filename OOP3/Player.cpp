#include "Player.h"
#include <windows.h>
#include <iostream>

using namespace std;

void Player::setDeckPlayer(Cards card)
{
	cards.push_back(Cards(card));
}

void Player::setScore()
{
	score += cards[cards.size()-1].getPoint();
}

void Player::clearScore()
{
	score = 0;
}

void Player::setBet(int a)
{
	money -= a;
	bet = a;
}

void Player::setWin()
{
	bet *= 1.5;
	money += bet;
}

void Player::setDraw()
{
	money += bet;
}

int Player::getScore()
{
	return score;
}

void Player::getDeckPlayer()
{
	for (int i = 0; i < cards.size(); i++)
	{
		cout << cards[i].getCards() << " ";
	}
	cout << endl;
}

string Player::getName()
{
	return name;
}

float Player::getMoney()
{
	return money;
}

int Player::getBet()
{
	return bet;
}
