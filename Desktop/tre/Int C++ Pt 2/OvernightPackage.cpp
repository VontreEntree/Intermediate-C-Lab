#include "stdafx.h"
#include "OvernightPackage.h"


OvernightPackage::OvernightPackage(double f)
{
	feePerOunce = f;
}


OvernightPackage::~OvernightPackage()
{
}

double OvernightPackage::calculateCost()
{
	shippingPrice = weight * ( feePerOunce + costPerOunce);

	return shippingPrice;
}

void OvernightPackage::displayPackage()
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