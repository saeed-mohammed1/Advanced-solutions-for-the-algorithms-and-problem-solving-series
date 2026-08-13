/*
  =============================================================================
  Write a program to ask the user to enter total hours, then calculate and print
  the equivalent number of days and weeks.
  =============================================================================
*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;


float ReadPostiveNumber(string message)
{
	float Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float TotalHoursCalcWeek(float Hours)
{
	float Week = Hours / (24 * 7);
	return Week;
	
}

float TotalHoursCalcDays(float Hours)
{
	return Hours / 24;

	

}

float DaysToWeek(float Days)
{
	return Days / 7;
}


int main()
{
	float NumberOfHours = ReadPostiveNumber("Please Enter the Total hours?");
	float NumberOfDays = TotalHoursCalcDays(NumberOfHours);
	float NumberOfWeeks = TotalHoursCalcWeek(NumberOfHours);
	cout << endl;
	cout << NumberOfDays << " Day" << endl;
	cout << NumberOfWeeks <<" Week"<< endl;
	cout << DaysToWeek(NumberOfDays) << " Week of Day" << endl;

	return 0;

}




