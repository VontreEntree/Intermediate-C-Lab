#include "stdafx.h"
#include "Package.h"


Package::Package(string fn, string ln, string addy, string c, string s, int zC, double w, double cPO)
{

	fName = fn;
	lName = ln;
	address = addy;
	city = c;
	state = s;

	zipCode = zC;

	
	weight = w;
	
	costPerOunce = cPO;
	
	
	
}

Package::Package()
{

}

Package::~Package()
{
}

double Package::calculateCost()
{
	shippingPrice = weight * costPerOunce;

	return shippingPrice;
}

void Package::displayPackage()
{
	cout << "Package" << endl;
	cout << "Name: " << fName << " " << lName << endl;
	cout << "Address: " << address << endl;
	cout << "City: " << city << endl;
	cout << "State: " << state << endl;
	cout << "ZipCode: "  << zipCode << endl;
	cout << "Weight of Package: " << weight << endl;
	cout << "Final Price: " << shippingPrice << endl;
	
}