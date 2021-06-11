#include <Windows.h>
#include <iostream>
#include "Cards.h"
#include "Croupier.h"
#include "Player.h"
#include <time.h>

using namespace std;

int winner(Player player1, Player player2)
{
	if (player1.getScore() > 21 && player2.getScore() > 21)
	{
		if (player1.getScore() > player2.getScore())
		{
			cout << "Победил " << player2.getName() << "!" << endl;
			return 2;
		}

		else
		{
			cout << "Победил " << player1.getName() << "!" << endl;
			return 1;
		}
	}
	
	else if (player1.getScore() > 21 || player2.getScore() > 21)
	{
		if (player1.getScore() > 21)
		{
			cout << "Победил " << player2.getName() << "!" << endl;
			return 2;
		}

		else
		{
			cout << "Победил " << player1.getName() << "!" << endl;
			return 1;
		}
	}
	
	else if (player1.getScore() < 21 && player2.getScore() < 21)
	{
		if (player1.getScore() > player2.getScore())
		{
			cout << "Победил " << player1.getName() << "!" << endl;
			return 1;
		}

		else
		{
			cout << "Победил " << player2.getName() << "!" << endl;
			return 2;
		}
	}

	else if (player1.getScore() == player2.getScore())
	{
		cout << "Ничья! " << endl;
		return 0;
	}
}

int main()
{
	srand(time(0));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	int b;

	Croupier croupier = Croupier();
	Cards cards = croupier.getRandCards();
	Cards cards1 = croupier.getRandCards();
	Player player1 = Player("Daniil");
	cout << cards.getCards() << " ";
	cout << cards1.getCards() << endl;
	player1.setDeckPlayer(cards);
	player1.setScore();
	player1.setDeckPlayer(cards1);
	player1.setScore();
	cout << "Ваш баланс: ";
	cout << player1.getMoney() << endl;
	cout << "Сделайте ставку: " << endl;
	for (;;)
	{
		cin >> a;
		if (a > player1.getMoney())
		{
			cout << "Ставка больше чем ваш баланс!!! Введите ставку еще раз: " << endl;
		}

		else
			break;

	}

	player1.setBet(a);


	for (;;)
	{
		if (player1.getScore() > 21)
		{
			cout << "У вас больше 21. Ваш итоговый счет: " << player1.getScore() << endl;
			break;
		}

		cout << "Ваш счёт: " << player1.getScore() << endl;
		cout << "Хотите взять еще карту? Если да - нажмите 1, если нет - нажмите 2: " << endl;
		cin >> b;
		system("cls");
		switch (b)
		{
		case 1:
			cards1 = croupier.getRandCards();
			player1.setDeckPlayer(cards1);
			player1.setScore();
			player1.getDeckPlayer();
			break;
		case 2:
			cout << "Ваш итоговый счет: " << player1.getScore() << endl;
			break;
		}
		
		if (b == 2)
			break;
	}
	Sleep(5000);
	system("cls");

	cards = croupier.getRandCards();
	cards1 = croupier.getRandCards();
	Player player2 = Player("Dmitriy");
	cout << cards.getCards() << " ";
	cout << cards1.getCards() << endl;
	player2.setDeckPlayer(cards);
	player2.setScore();
	player2.setDeckPlayer(cards1);
	player2.setScore();
	cout << "Ваш баланс: ";
	cout << player2.getMoney() << endl;
	cout << "Сделайте ставку: " << endl;
	for (;;)
	{
		cin >> a;
		if (a > player2.getMoney())
		{
			cout << "Ставка больше чем ваш баланс!!! Введите ставку еще раз: " << endl;
		}

		else
			break;

	}

	player2.setBet(a);

	for (;;)
	{
		if (player2.getScore() > 21)
		{
			cout << "У вас больше 21. Ваш итоговый счет: " << player2.getScore() << endl;
			break;
		}

		cout << "Ваш счёт: " << player2.getScore() << endl;
		cout << "Хотите взять еще карту? Если да - нажмите 1, если нет - нажмите 2: " << endl;
		cin >> b;
		system("cls");
		switch (b)
		{
		case 1:
			cards1 = croupier.getRandCards();
			player2.setDeckPlayer(cards1);
			player2.setScore();
			player2.getDeckPlayer();
			break;
		case 2:
			cout << "Ваш итоговый счет: " << player2.getScore() << endl;
			break;
		}
		if (b == 2)
			break;
	}
	Sleep(5000);
	system("cls");

	if (winner(player1, player2) == 1)
	{
		player1.setWin();
		cout << "Счет " << player1.getName() << " " << player1.getMoney() << endl;
		cout << "Счет " << player2.getName() << " " << player2.getMoney();
	}

	else if (winner(player1, player2) == 2)
	{
		player2.setWin();
		cout << "Счет " << player1.getName() << " " << player1.getMoney() << endl;
		cout << "Счет " << player2.getName() << " " << player2.getMoney();
	}

	else
	{
		player1.setDraw();
		player2.setDraw();
		cout << "Счет " << player1.getName() << " " << player1.getMoney() << endl;
		cout << "Счет " << player2.getName() << " " << player2.getMoney();
	}
}