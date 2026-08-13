/*
  =============================================================================
  Write a program that inputs the total number of seconds and converts it to
  Days, Hours, Minutes, and Seconds.
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



stTaskDuration SecondToTaskDuration(int TotalSecond)
{

	stTaskDuration TaskDuration;
	const int NumberOfDays = 24 * 60 * 60;
	const int NumberOfHours = 60 * 60;
	const int NumberOfMinute = 60;

	int Reminder = 0;
	TaskDuration.NumberOfDays = TotalSecond / NumberOfDays;
	Reminder = TotalSecond % NumberOfDays;
	TaskDuration.NumberOfHours = Reminder / NumberOfHours;
	Reminder = Reminder % NumberOfHours;
	TaskDuration.NumberOfMinutes = Reminder / NumberOfMinute;
	Reminder = Reminder % NumberOfMinute;
	TaskDuration.NumberOfSeconds = Reminder;


	return TaskDuration;

}

void PrintTaskDurationDetails(stTaskDuration TaskDuration)
{
	cout << "\n";
	cout << TaskDuration.NumberOfDays << ":"
		<< TaskDuration.NumberOfHours << ":"
		<< TaskDuration.NumberOfMinutes << ":"
		<< TaskDuration.NumberOfSeconds << endl;
}


int main()
{
	PrintTaskDurationDetails(SecondToTaskDuration(ReadPostiveNumber("Please enter total second?")));

	return 0;

}

