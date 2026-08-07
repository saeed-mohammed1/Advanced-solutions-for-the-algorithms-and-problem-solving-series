/*
  =============================================================================
  Write a program to ask the user to enter a positive number N, then calculate
  and print its factorial (N!).
  =============================================================================
*/
#include <iostream>
#include <string>
using namespace std;

int ReadAPositiveNumber(string Message)
{
	int Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number < 0);
	return Number;
}

void PrintFacOfNumber(int Number)
{
	int long Fact = 1;
	for (int counter = 1; counter <= Number; counter++)
	{
		Fact = Fact * counter;
	}
	cout << "------------------------------------" << endl;
	cout << "Facturial number is " << Fact << endl;
}


int main()
{
	PrintFacOfNumber(ReadAPositiveNumber("Please enter a Positive Number?"));
	return 0;
}
