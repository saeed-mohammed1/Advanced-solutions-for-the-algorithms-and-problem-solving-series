/*
  =============================================================================
  Write a program to ask the user to enter a month number from 1 to 12, then
  print the corresponding month name.
  =============================================================================
*/
#include <iostream>
#include <string>
using namespace std;

enum enDayOfMonth { Jan = 1, Feb = 2, Mar = 3 , Apr = 4 , May = 5 , Jun = 6 ,
	Jul = 7 , Aug = 8 , Sep = 9 , Oct = 10 , Nov = 11 , Dec = 12};

float ReadNumberInRange(string message, int From , int To)
{
	float Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number < From || Number > To);

	return Number;
}

enDayOfMonth ReadDayOfMonth()
{
	return (enDayOfMonth)ReadNumberInRange("Please enter a month [1 : 12]?", 1, 12);
}

string GetDayOfMonth(enDayOfMonth Month)
{
	switch (Month)
	{
	case enDayOfMonth::Jan:
		return "January";
	case enDayOfMonth::Feb:
		return "February";
	case enDayOfMonth::Mar:
		return "March";
	case enDayOfMonth::Apr:
		return "April";
	case enDayOfMonth::May:
		return "May";
	case enDayOfMonth::Jun:
		return "June";
	case enDayOfMonth::Jul:
		return "July";
	case enDayOfMonth::Aug:
		return "August";
	case enDayOfMonth::Sep:
		return "September";
	case enDayOfMonth::Oct:
		return "October";
	case enDayOfMonth::Nov:
		return "November";
	case enDayOfMonth::Dec:
		return "December";
	default:
		return "Not valid Month";

	}
}


int main()
{
	cout << GetDayOfMonth(ReadDayOfMonth()) << endl;
	return 0;

}

