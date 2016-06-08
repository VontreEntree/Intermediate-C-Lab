#include "stdafx.h"
#include "TwoDayPackage.h"


TwoDayPackage::TwoDayPackage(double f)
{
	flatFee = f;
}


TwoDayPackage::~TwoDayPackage()
{
}

double TwoDayPackage::calculateCost()
{
	shippingPrice = weight * costPerOunce;

	shippingPrice = shippingPrice + flatFee;

	return shippingPrice;
}

void TwoDayPackage::displayPackage()
{
	cout << "Package" << endl;
	cout << "Name: " << fName << " " << lName << endl;
	cout << "Address: " << address << endl;
	cout << "City: " << city << endl;
	cout << "State: " << state << endl;
	cout << "ZipCode: " << zipCode << endl;
	cout << "Weight of Package: " << weight << endl;
	cout << "Final Price: " << shippingPrice << endl;

}