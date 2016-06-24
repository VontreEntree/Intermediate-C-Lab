#pragma once
#include <string>
#include <iostream>
#include <array>

using namespace std;
class Creature
{
public:
	explicit Creature();
	friend ostream &operator<<(ostream &, const Creature &);

	void setHealth(int);
	int getHealth() const;

	void setAttack(int);
	int getAttack() const;

	void setDefense(int);
	int getDefense() const;

	void setRegen(int);
	int getRegen() const;

	void setIsDodging(bool);
	bool getIsDodging() const;

	void setIsHealing(bool);
	bool getIsHealing() const;

	void punch(int);
	void dodge();
	void regeneration();

	~Creature();
private:
	string firstName[10] = { "Gnash", "Plitkurn", "Wei", "Yimtal", "Eksiim", "Ximnar", "Tepnis", "Psindo", "Ataal", "Kurznit" };
	string lastName[10] = { "Ipkaar", "Aanlovaar", "Sciqren", "Oryx", "Crota", "Kliktan", "Vilmneur", "Lekstin", "Turpliehr", "Ehpiks" };
	string name;

	int health;
	int attack;
	int defense;
	int regen;

	bool isDodging = false;
	bool isHealing = false;

};
