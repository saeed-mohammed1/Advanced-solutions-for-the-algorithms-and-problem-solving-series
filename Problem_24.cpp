/*
  =============================================================================
  Write a program to ask the user to enter their age, then check if the age
  is between 18 and 45 (Valid Age) or not (Invalid Age).
  =============================================================================
*/
#include <iostream>
using namespace std;

int ReadAge()
{
	int Age;
	cout << "Please enter Age: " << endl;
	cin >> Age;
	return Age;
}

bool ValidateNumberInRange(int Number, int From, int To)
{
	return (Number >= From && Number <= To);

}

void PrintValidAge(int Age)
{
	if (ValidateNumberInRange(Age, 18, 45))
		cout << "is a valid Age" << endl;
	else
		cout << "is a Invalid Age" << endl;
}


int main()
{
	PrintValidAge(ReadAge());
	return 0;
}
