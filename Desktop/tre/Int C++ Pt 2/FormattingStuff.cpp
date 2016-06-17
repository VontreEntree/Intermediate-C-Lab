// FormattingStuff.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>


using namespace std;
int main()
{

	///////////////////////////////////////////////////////////////////////// EXERCISE 13.6 /////////////////////////////////////////////////////////////////////////
	// a
	int a = 40000;
	cout << "Left Justified" << endl;
	cout << left << setw(15) << a;

	// b
	const int SIZE = 80;
	char buffer[SIZE];
	cout << "\n\nRead a String" << endl;
	cin.get(buffer, SIZE);
	cout << "The string that was read is '" << buffer << "'"<< endl;

	// c
	int sign = 200;
	cout << "\nW/Out sign " << sign << "\nWith sign " << showpos << sign << endl;

	// d
	int hexad = 100;
	cout << "\n" << showbase << hex << hexad << endl;

	// e
	char charArray[SIZE];
	cout << endl;
	cout << "Enter some letters" << endl;
	cin.get(charArray, 10, 'p');
	cout << charArray << endl;

	// f
	double preceed = 1.234;
	cout << endl;
	cout << setfill('0') << setw(9) << right << preceed << endl;

	///////////////////////////////////////////////////////////////////////// EXERCISE 13.10 /////////////////////////////////////////////////////////////////////////
	double roundedNo = 100.453627;
	cout << "\nRounding Decimal" << endl;
	cout << "DIGIT " << fixed << roundedNo << endl;
	cout << "TENTH " << fixed << setprecision(1) << roundedNo << endl;
	cout << "HUNDREDTH " << fixed << setprecision(2) << roundedNo << endl;
	cout << "THOUSANDTH " << fixed << setprecision(3) << roundedNo << endl;
	cout << "TEN-THOUSANDTH " << fixed << setprecision(4) << roundedNo << endl;

	///////////////////////////////////////////////////////////////////////// EXERCISE 13.17 /////////////////////////////////////////////////////////////////////////
	int ascii = 126;
	for (int i = 33; i < ascii; i++)
	{
		cout << "\nDecimal\t" << "Octal\t" << "HexaDecimal\t" << "Character" << endl;
		cout << dec << i << "\t" << oct << i << "\t" << hex << i << "\t\t";
		cout.put(i) << endl;
	}
	system("pause");
    return 0;
}

