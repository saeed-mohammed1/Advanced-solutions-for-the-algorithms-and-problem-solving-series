/*
  =============================================================================
  Write a program to ask the user to enter 3 numbers, then check and print
  the maximum number.
  =============================================================================
*/
#include <iostream>
using namespace std;

void Read3Numbers(int& Num1, int& Num2, int &Num3)
{
	cout << "Please enter number1?\n";
	cin >> Num1;
	cout << "Please enter number2?\n";
	cin >> Num2;
	cout << "Please enter number3?\n";
	cin >> Num3;
}

int MaxOfNumbers(int Num1, int Num2, int Num3)
{
	if (Num1 > Num2 && Num1 > Num3)
		return Num1;
	else if (Num2 > Num1 && Num2 > Num3)
		return Num2;
	else
		return Num3;
}

void PrintMaxNumber(int Max)
{
		cout << "\n Max number is " << Max << endl;
}


int main()
{
	int Num1, Num2, Num3;
	Read3Numbers(Num1, Num2, Num3);
	PrintMaxNumber(MaxOfNumbers(Num1, Num2, Num3));

	return 0;
}
