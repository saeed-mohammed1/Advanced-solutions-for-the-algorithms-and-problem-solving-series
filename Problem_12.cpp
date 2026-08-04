/*
  =============================================================================
  Write a program to ask the user to enter 2 numbers, then check and print
  the maximum number.
  =============================================================================
*/
#include <iostream>
using namespace std;

void Read2Numbers(int& Num1, int& Num2)
{
	cout << "Please enter number1?\n";
	cin >> Num1;
	cout << "Please enter number2?\n";
	cin >> Num2;
}

int MaxOfNumbers(int Num1, int Num2)
{
	if (Num1 > Num2)
		return Num1;
	else
		return Num2;
}

void PrintMaxNumber(int Max)
{
		cout << "\n Max number is " << Max << endl;
}


int main()
{
	int Num1, Num2;
	Read2Numbers(Num1, Num2);
	PrintMaxNumber(MaxOfNumbers(Num1, Num2));

	return 0;
}
