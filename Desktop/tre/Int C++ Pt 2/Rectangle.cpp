#include "stdafx.h"
#include "Rectangle.h"

#include <math.h>
#include <cmath>

//Constructor
Rectangle::Rectangle()
{
}



//Destructor
Rectangle::~Rectangle()
{
}

////////////////////////////// EXERCISE 9.11 /////////////////////////////////////////////////////

//Other Methods
double Rectangle::rectPerimeter(double length, double width)
{
	perimeter = (length + width) * 2;

	return perimeter;
}

double Rectangle::rectArea(double length, double width)
{
	area = length * width;

	return area;
}

//Setters
void Rectangle::setLength(double l)
{

	if (l > 0.0 && l <= 20.0)
	{
		length = l;
	}
	else if (length <= 0)
	{
		length = rand() % 20 + 1;
	}
	else if (length > 20)
	{
		length = rand() % 20 + 1;
	}
	else
	{
		try
		{
			(l < 0.0 || l > 20.0);
		}
		catch (exception& e)
		{
			cout << "Your value " << e.what() << " is out of range, Try again" << endl;
		}
	}
	
}

void Rectangle::setWidth(double w)
{
	if (w > 0.0 && w <= 20.0)
	{
		width = w;
	}
	else if (width <= 0)
	{
		width = rand() % 20 + 1;
	}
	else if (width > 20)
	{
		width = rand() % 20 + 1;
	}
	else
	{
		try
		{
			(w < 0.0 || w > 20.0);
		}
		catch (exception& e)
		{
			cout << "Your value " << e.what() << " is out of range, Try again" << endl;
		}
	}
}


//Getters
double Rectangle::getLength() const
{
	return length;
}

double Rectangle::getWdith() const
{
	return width;
}

////////////////////////////// EXERCISE 9.12 /////////////////////////////////////////////////////
Rectangle::Rectangle(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
	length = mathFormula(x1, y1, x2, y2);
	width = mathFormula(x3, y3, x4, y4);
}

double Rectangle::mathFormula(double a, double b, double c, double d)
{
	double line;
	line = sqrt(((c - a) * (c - a)) + ((d - b) * (d - b)));
	return line;
}

double Rectangle::findSlope(double a, double b, double c, double d)
{
	double slope;
	slope = (d - b) + (c - a);
	return slope;
}

bool Rectangle::isPerp(double line, double wing)
{
	bool hits = false;
	double value;
	value = line * wing;

	if(value < 0)
	{
		hits = true;
		return hits;
		
	}
	else
	{
		hits = false;
		return hits;
		cout << "Is this a square? " << hits << endl;
	}
	
}