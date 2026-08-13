/*
  =============================================================================
  Write a program to ask the user to enter total hours, then calculate and print
  the equivalent number of days and weeks.
  =============================================================================
*/
#include <iostream>
#include <string>
using namespace std;

struct stTaskDuration
{
	int NumberOfSeconds, NumberOfMinutes, NumberOfHours, NumberOfDays;
};

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



stTaskDuration ReadTaskDuration()
{
	stTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPostiveNumber("Please enter Number of Days?");
	TaskDuration.NumberOfHours = ReadPostiveNumber("Please enter Number of Hours?");
	TaskDuration.NumberOfMinutes = ReadPostiveNumber("Please enter Number of Minutes?");
	TaskDuration.NumberOfSeconds = ReadPostiveNumber("Please enter Number of Seconds?");

	return TaskDuration;

}

int CalcSecond(stTaskDuration TaskDuration)
{
	int TotalSecond ;
	TotalSecond = TaskDuration.NumberOfDays * 24 * 60 * 60;
	TotalSecond += TaskDuration.NumberOfHours * 60 * 60;
	TotalSecond += TaskDuration.NumberOfMinutes * 60;
	TotalSecond += TaskDuration.NumberOfSeconds;
	return TotalSecond;
}


int main()
{
	int TotalSecond = CalcSecond(ReadTaskDuration());
	cout << "Total second = " << TotalSecond << endl;

	return 0;

}




