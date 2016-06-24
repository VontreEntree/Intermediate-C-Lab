// DataFileTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iomanip>
#include <fstream>
#include "Inventory.h"


using namespace std;



int main()
{
	fstream outInventory("InventoryData.txt",ios::in | ios::out | ios::binary);

	char name[25] = "";
	int qty = 0;
	double perUnit = 0.0;

	Inventory invent;
	vector<Inventory> inventList;

	for (int i = 0; i > 5; i++)
	{
		cout << "Please enter the name of the product" << endl;
		cin >> name;
		invent.setName(name);
	
		cout << "Please enter the quantity of the 'NEW' product" << endl;
		cin >> qty;
		invent.setQty(qty);

		cout << "Please enter the price of each " << invent.getName() << endl;
		cin >> perUnit;
		invent.setPerUnit(perUnit);

		inventList.push_back(Inventory(invent.getQty(), invent.getName(), invent.getPerUnit()));
	}

	for(auto i : inventList)
	{
		outInventory.write(reinterpret_cast<const char *>(&invent), sizeof(Inventory));
		outInventory.close();
	}

	ifstream inInventory("InventoryData.txt", ios::in);

	inInventory.read(reinterpret_cast<char *>(&invent), sizeof(Inventory));

	

	while (inInventory >> name >> qty >> perUnit)
	{
		invent.outputLine(invent.getQty(), invent.getName(), invent.getPerUnit());
	}

	system("pause");
    return 0;
}

