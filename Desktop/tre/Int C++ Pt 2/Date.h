#pragma once

#include <array>
#include <iostream>

using namespace std;

class Date
{
	friend ostream &operator<<(ostream &, const Date &);
public:
	Date( int m = 1, int d = 1, int y = 1900); // Default Constructor
	~Date();

	void setDate(int, int, int); // set month, day, and year

	/////////////////////////////////////// Addition Operators ///////////////////////////////////////////////
	Date &operator++(); // prefix increment operator
	Date operator++(int); // postfix increment operator
	Date &operator+=(unsigned int); // add days, modify object

	/////////////////////////////////////// Subtraction Operators ///////////////////////////////////////////////
	Date &operator--(); // prefix decrement operator
	Date operator--(int); // postfix decrement operator
	Date &operator-=(unsigned int); // add days, modify object

	static bool leapYear(int); // is date in a leap year?
	bool endOfMonth(int) const; // is date at the end of the month?

private:
	unsigned int month;
	unsigned int day;
	unsigned int year;
	static const array<unsigned int, 13> days; // Days per month
	void helpIncrement(); // utility function for incrementing date
	void helpDecrement(); // utility function for decrementing date

	
};

