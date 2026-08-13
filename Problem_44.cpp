/*
  =============================================================================
  Write a program to ask the user to enter a number from 1 to 7 representing
  the day of the week, then print the corresponding day name.
  =============================================================================
*/
#include <iostream>
#include <string>
using namespace std;

enum enDayOfWeek { Sat = 1, Sun = 2, Mon = 3 , Teu = 4 , Wed = 5 , Thu = 6 , Fri = 7 };

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

enDayOfWeek ReadDayOfWeek()
{
	return (enDayOfWeek)ReadNumberInRange("Please enter Number of week ( Sat = 1, Sun = 2, Mon = 3 , Teu = 4 , Wed = 5 , Thu = 6 , Fri = 7 )?", 1, 7);
}

string GetDayOfWeek(enDayOfWeek Day)
{
	switch (Day)
	{
	case enDayOfWeek::Sat:
		return "Saturday";
	case enDayOfWeek::Sun:
		return "Sunday";
	case enDayOfWeek::Mon:
		return "Monday";
	case enDayOfWeek::Teu:
		return "Tuesday";
	case enDayOfWeek::Wed:
		return "Wednesday";
	case enDayOfWeek::Thu:
		return "Thursday";
	case enDayOfWeek::Fri:
		return "Friday";
	default:
		return "Not vailed day";

	}
}


int main()
{
	cout << GetDayOfWeek(ReadDayOfWeek()) << endl;
	return 0;

}

