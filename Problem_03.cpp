// Problem 03: Write a program to ask the user to enter a number, then check if it is Even or Odd and Print in screen.
#include <iostream>
using namespace std;
enum enNumberType {Odd = 1 , Even = 2};
int ReadNumber()
{
	int Number;
	cout << "Please enter number: " << endl;
	cin >> Number;
	return Number;
}
enNumberType CheckNumberType(int Number)
{
	int Result = Number % 2;
	if (Result == 0)
	{
		return enNumberType::Even;
	}
	else
	{
		return enNumberType::Odd;
	}
}
void PrintNumberType(enNumberType NumberType)
{
	if (NumberType == Even)
	{
		cout << "\n Number is Even. \n";
	}
	else
	{
		cout << "\n Number is Odd. \n";
	}
}
int main()
{
	PrintNumberType(CheckNumberType(ReadNumber()));
	return 0;
}
