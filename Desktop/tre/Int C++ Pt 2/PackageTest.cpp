// PackageTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "OvernightPackage.h"
#include "TwoDayPackage.h"
#include "Package.h"

int main()
{
	int t = 5;

	Package pckg("Frank", "West", "17817 160th Ave SE", "Renton", "WA", 98058, 8, .94);
	OvernightPackage onpckg(.45);
	TwoDayPackage tdpckg(5.50);

	
		pckg.calculateCost();
		onpckg.calculateCost();
		tdpckg.calculateCost();

		pckg.displayPackage();
		onpckg.displayPackage();
		tdpckg.displayPackage();

	system("pause");
    return 0;
}

