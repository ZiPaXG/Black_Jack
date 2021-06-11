#include "Croupier.h"
#include <iostream>
#include <windows.h>
#include <vector>

using namespace std;

Croupier::Croupier()
{
	for (int i = 2; i <= 14; i++)
	{
		for (int j = 0; j <= 3; j++)
		{
			masCards.push_back(Cards(i, j));
		}
	}
}

void Croupier::getDeck()
{
	for (int i = 0; i < masCards.size(); i++)
	{
		cout << masCards[i].getCards() << endl;
	}
}

Cards Croupier::getRandCards()
{
	int card = rand() % masCards.size();
	Cards cards = masCards[card];
	masCards.erase(masCards.begin()+card);
	return cards;
}