#include "stdafx.h"
#include "Creature.h"

Creature::Creature()
{
	int h = rand() % 21 + 10;
	setHealth(h);
	int a = rand() % 11 + 10;
	setAttack(a);
	int d = rand() % 11 + 10;
	setDefense(d);
	int r = rand() % 11 + 5;
	setRegen(r);
	isDodging = false;
	isHealing = false;
	int x = rand() % firstName->size();
	int y = rand() % lastName->size();
	name = firstName[x] + " " + lastName[y];
}


Creature::~Creature()
{
}

ostream &operator<<(ostream &output, const Creature &creature)
{
	output << "\n" << creature.name <<
		"\nHealth: " << creature.health <<
		"\nAttack: " << creature.attack <<
		"\nDefense: " << creature.defense <<
		"\nHealth Regen: " << creature.regen <<
		"\nDodged Attack: " << creature.isDodging <<
		"\nHealth Regain: " << creature.isHealing << endl;

	return output;
}

void Creature::setHealth(int h)
{
	if (h > 9 && h <= 30)
	{
		health = h;
	}
	else
	{
		throw invalid_argument("Health must be between 10 and 30");
	}
}
int Creature::getHealth() const
{
	return health;
}

void Creature::setAttack(int a)
{
	if (a > 9 && a <= 20)
	{
		attack = a;
	}
	else
	{
		throw invalid_argument("Attack must be between 10 and 20");
	}
}
int Creature::getAttack() const
{
	return attack;
}

void Creature::setDefense(int d)
{
	if (d > 9 && d <= 20)
	{
		defense = d;
	}
	else
	{
		throw invalid_argument("Defense must be between 10 and 20");
	}
}
int Creature::getDefense() const
{
	return defense;
}

void Creature::setRegen(int r)
{
	if (r > 4 && r <= 15)
	{
		regen = r;
	}
	else
	{
		throw invalid_argument("Regen must be between 5 and 15");
	}
}
int Creature::getRegen() const
{
	return regen;
}

void Creature::setIsDodging(bool iD)
{
	isDodging = iD;
}
bool Creature::getIsDodging() const
{
	return isDodging;
}

void Creature::setIsHealing(bool iH)
{
	isHealing = iH;
}
bool Creature::getIsHealing() const
{
	return isHealing;
}

void Creature::punch(int counterAttack)
{
	int fate = rand() % 2 + 1;

	if (fate == 1)
	{
		isDodging = true;
	}
	else if (fate == 2)
	{
		isDodging = false;
	}

	if (isDodging == true)
	{
		cout << "Attack was dodged" << endl;
		dodge();
	}
	else if (isDodging == false)
	{
		health = (health - counterAttack) + defense;
	}
}
void Creature::dodge()
{
	cout << "Attack was dodged." << endl;
}
void Creature::regeneration()
{
	health = health + regen;
}