/*
  =============================================================================
  Write a program to continuously ask the user to enter an age between 18 and 45
  until a valid age is entered, then print the valid age.
  =============================================================================
*/
#include <iostream>
using namespace std;

int ReadAge()
{
	int Age;
	cout << "Please enter Age between(18 : 45)? " << endl;
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);

}
int ReadUnitAgeBetween(int From, int To)
{
	int Age = 0;
	do
	{
		Age = ReadAge();
	} while (!ValidateNumberInRange(Age, From, To));

	return Age;
}

void PrintValidAge(int Age)
{
	
		cout << "your Age is " << Age << endl;
}


int main()
{
	PrintValidAge(ReadUnitAgeBetween(18 , 45));
	return 0;
}
