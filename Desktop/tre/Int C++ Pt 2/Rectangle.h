#pragma once
#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle();
	Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
	~Rectangle();
	
	////////////////////////////// EXERCISE 9.11 /////////////////////////////////////////////////////
	
	double length = 1;
	double width = 1;

	double perimeter = 0;
	double area = 0;

	double rectPerimeter(double, double);
	double rectArea(double, double);
	////////////////////////////// EXERCISE 9.12 /////////////////////////////////////////////////////
	double x1 = 0;
	double y1 = 0;
	double x2 = 0;
	double y2 = 0;
	double x3 = 0;
	double y3 = 0;
	double x4 = 0;
	double y4 = 0;

	double mathFormula(double, double, double, double);
	double findSlope(double, double, double, double);
	bool isPerp(double, double);

	void setLength(double l);
	void setWidth(double w);

	double getLength() const;
	double getWdith() const;


};

