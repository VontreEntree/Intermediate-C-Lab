#pragma disable(warning:C4996)

#include "stdafx.h"
#include "Inventory.h"
#include <iomanip>
#include <algorithm>
#include <iterator>


Inventory::Inventory(int q, const string &name, double pU)
{
	setName(name);
}


Inventory::~Inventory()
{
}

//METHODS
//Name
void Inventory::setName(const string &nameString)
{
	// copy at most 15 character from string to name
	size_t length = nameString.size();
	length = (length < 25 ? length : 24);
	//strcpy(name, nameString.substr(0, length));
	//Brute force for/for_each loop?
	for (int count = 0; count < length; count++)
	{
		name[count] = nameString[count];
	}
	name[length] = '\0'; // append null character to name
}

string Inventory::getName() const
{
	return name;
}

//Quantity
void Inventory::setQty(int q)
{
	qty = q; // should validate
}

int Inventory::getQty() const
{
	return qty;
}

//Per Unit
void Inventory::setPerUnit(double pU)
{
	perUnit = pU;
}

double Inventory::getPerUnit() const
{
	return perUnit;
}

void Inventory::outputLine(int q, const string &n, double pU)
{
	//cout << left << setw(10) << q << setw(13) << n << setw(7) << setprecision(2) << right << pU << endl;

	cout << "'New' Product" << endl;
	cout << "Name of Product: " << name << endl;
	cout << "Quantity: " << qty << endl;
	cout << "Price Per Unit: " << perUnit << endl;
	cout << "\n" << endl;
}