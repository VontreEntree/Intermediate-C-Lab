// MiniArena.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Creature.h"
#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include "Time.h"

using namespace std;

int main()
{
	srand(time(0));

	Creature c1;
	Creature c2;


	int pOD;
	cout << "Press Enter To Decide Who Starts" << endl;

	int RAND = rand() % 2 + 1;

	if (RAND == 1)
	{
		cout << "Player 1 Will Go First!" << endl;
	}
	else if (RAND == 2)
	{
		cout << "Player 2 Will Go First!" << endl;
	}

	int round = 1;

	do
	{


		if (RAND == 1)
		{
			cout << "Player 1 Will Now Go!" << endl;
			pOD = rand() % 9 + 1;
			switch (pOD)
			{
			case 1:
			case 2:
			case 3:
				c2.dodge();
				break;
			case 4:
			case 5:
			case 6:
				c2.punch(c1.getAttack());
				break;
			case 7:
			case 8:
			case 9:
			case 10:
				c2.regeneration();
				break;
			}
		}
		else if (RAND == 2)
		{
			cout << "Player 2 Will Now Go!" << endl;
			pOD = rand() % 9 + 1;
			switch (pOD)
			{
			case 1:
			case 2:
			case 3:
				c1.dodge();
				break;
			case 4:
			case 5:
			case 6:
				c1.punch(c2.getAttack());
				break;
			case 7:
			case 8:
			case 9:
			case 10:
				c1.regeneration();
				break;
			}
		}



		if (RAND == 1)
		{
			RAND = 2;
		}
		else if (RAND == 2)
		{
			RAND = 1;
		}

		cout << "Round #" << round << endl;
		cout << "-----STATS-----" << endl;
		cout << "**Player 1**" << endl;
		cout << c1;
		cout << "**Player 2**" << endl;
		cout << c2;

		c1.setIsDodging(false);
		c1.setIsHealing(false);
		c2.setIsDodging(false);
		c2.setIsHealing(false);

		round++;
	} while (c1.getHealth() > 0 || c2.getHealth() > 0);

	if (c1.getHealth() == 0)
	{
		cout << "Player 1 is out of the fight!" <<
			"Player 2 is the WINNER!!!" << endl;
	}
	else if (c2.getHealth() == 0)
	{
		cout << "Player 2 is out of the fight!" <<
			"Player 1 is the WINNER!!!" << endl;
	}

	system("pause");
	return 0;
}

