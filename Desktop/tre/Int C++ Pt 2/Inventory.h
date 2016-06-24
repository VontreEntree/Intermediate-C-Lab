#pragma once


#ifndef INVENTORY_H
#define INVENTORY_H

#include <iostream>
#include <string>
#include <array>

using namespace std;

class Inventory
{
public:
	Inventory(int = 0, const string & = "", double = 0.0);
	~Inventory();

	//METHODS
	//Name
	void setName(const string &);
	string getName() const;

	//Quantity
	void setQty(int);
	int getQty() const;

	//Per Unit
	void setPerUnit(double);
	double getPerUnit() const;


	void outputLine(int, const string &, double);
private:
	//variables
	//array <char, 25> name;
	char name[25];
	int qty;
	double perUnit;
};

#endif