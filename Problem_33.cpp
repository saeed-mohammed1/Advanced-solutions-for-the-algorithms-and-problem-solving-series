/*
  =============================================================================
  Write a program to ask the user to enter a grade between 0 and 100,
  then calculate and print the corresponding letter grade (A, B, C, D, E, F).
  =============================================================================
*/
#include <iostream>
using namespace std;

int ReadRangeNumber(int From, int To)
{
	int Grade;
	do
	{
		cout << "Please enter your Grade Between(0, 100)?" << endl;
		cin >> Grade;
	} while (Grade < From || Grade > To);
	return Grade;
}

char CalcGrade(int Grade)
{
	if (Grade >= 90)
		return 'A';
	else if (Grade >= 80)
		return 'B';
	else if (Grade >= 70)
		return 'C';
	else if (Grade >= 60)
		return 'D';
	else if (Grade >= 50)
		return 'E';
	else
		return 'F';
}


int main()
{
	cout <<CalcGrade(ReadRangeNumber(0, 100)) << endl;
	return 0;
}
