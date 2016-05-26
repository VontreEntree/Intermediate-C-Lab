// RectangleTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Rectangle.h"
#include <iostream>

using namespace std;
int main()
{
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;
	double x3 = 0;
	double y3 = 0;
	double x4 = 0;
	double y4 = 0;
	double length = 1;
	double width = 1;
	
	cout << "**NOTE: If you do not follow these strict rules then the program may break.**" << endl;
	cout << "To create the rectangle you will need to input 8 values.\nThe values must between 1 and 20" << endl;

	for (int i = 0; i < 9; i++)
	{
		switch(i)
		{
		case 1:
			cout << "\nPlease enter the first value" << endl;
			cin >> x1;
			while (x1 <= 0 || x1 > 20)
			{
				cout << "\nInvalid Entry, try again" << endl;
				cin >> x1;
			}
			break;
		case 2:
			cout << "\nPlease enter the second value" << endl;
			cin >> y1;
			while (y1 <= 0 || y1 > 20)
			{
				cout << "\nInvalid Entry, try again" << endl;
				cin >> y1;
			}
			break;
		case 3:
			cout << "\nFIRST POINT COMPLETE !" << endl;
			cout << "\nPlease enter the third value" << endl;
			cin >> x2;
			while (x2 <= 0 || x2 > 20)
			{
				cout << "\nInvalid Entry, try again" << endl;
				cin >> x2;
			}
			break;
		case 4:
			cout << "\nPlease enter the fourth value" << endl;
			cin >> y2;
			while (y2 <= 0 || y2 > 20)
			{
				cout << "\nInvalid Entry, try again" << endl;
				cin >> y2;
			}
			break;
		case 5:
			cout << "\nSECOND POINT COMPLETE!" << endl;
			cout << "\nPlease enter the fifth value" << endl;
			cin >> x3;
			while (x3 <= 0 || x3 > 20)
			{
				cout << "\nInvalid Entry, try again" << endl;
				cin >> x3;
			}
			break;
		case 6:
			cout << "\nPlease enter the sixth value" << endl;
			cin >> y3;
			while (y3 <= 0 || y3 > 20)
			{
				cout << "\nInvalid Entry, try again" << endl;
				cin >> y3;
			}
			break;
		case 7:
			cout << "\nTHIRD POINT COMPLETE!" << endl;
			cout << "\nPlease enter the seventh value" << endl;
			cin >> x4;
			while (x4 <= 0 || x4 > 20)
			{
				cout << "\nInvalid Entry, try again" << endl;
				cin >> x4;
			}
			break;
		case 8:
			cout << "\nPlease enter the eighth value" << endl;
			cin >> y4;
			while (y4 <= 0 || y4 > 20)
			{
				cout << "\nInvalid Entry, try again" << endl;
				cin >> y4;
			}
			
			break;
		default:
			cout << "\nInvalid Entry, try again" << endl;
			break;
		} 
	}

	cout << "\nFOURTH POINT COMPLETE!" << endl;

	Rectangle rct = Rectangle(x1, y1, x2, y2, x3, y3, x4, y4);

	cout << "\nLength: " << rct.length << endl;
	cout << "\nWidth: " << rct.width << endl;

	length = rct.findSlope(x1, y1, x2, y2);
	cout << "\nLine 1 Slope: " << length << endl;
	width = rct.findSlope(x3, y3, x4, y4);
	cout << "\nLine 2 Slope: " << width << endl;

	cout << "\nIs this a square? 0 No, 1 Yes [" << rct.isPerp(length, width) << "]" << endl;

	cout << "\nArea: " << rct.rectArea(rct.length, rct.width) << endl;
	cout << "\nPerimeter: " << rct.rectPerimeter(rct.length, rct.width) << endl;

	system("pause");
    return 0;
}

