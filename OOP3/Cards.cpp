#include "Cards.h"
#include "NameCards.h"
#include <string>

string Cards::getCards()
{
	string s;
	switch (name)
	{
	case 2:
		s = to_string(name);
		break;
	case 3:
		s = to_string(name);
		break;
	case 4:
		s = to_string(name);
		break;
	case 5:
		s = to_string(name);
		break;
	case 6:
		s = to_string(name);
		break;
	case 7:
		s = to_string(name);
		break;
	case 8:
		s = to_string(name);
		break;
	case 9:
		s = to_string(name);
		break;
	case 10:
		s = to_string(name);
		break;
	case 11:
		s = "?????";
		break;
	case 12:
		s = "????";
		break;
	case 13:
		s = "??????";
		break;
	case 14:
		s = "???";
		break;
	}
	s += " ";
	
	switch (suits)
	{
	case 0:
		s += "????";
		break;
	case 1:
		s += "????";
		break;
	case 2:
		s += "??????";
		break;
	case 3:
		s += "?????";
		break;
	}
	
	return s;
}

int Cards::getPoint()
{
	if (name >= 2 && name <= 10)
	{
		return name;
	}

	else if (name >= 11 && name <= 13)
	{
		return 10;
	}

	else
	{
		return 11;
	}
}
