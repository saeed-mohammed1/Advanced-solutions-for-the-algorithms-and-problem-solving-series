/*
  =============================================================================
  Write a program to ask the user to enter 2 numbers, print them, swap their
  values, and then print them again after swapping.
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

void SwapNumbers(int &Num1, int &Num2)
{
	int Swap;
	Swap = Num1;
	Num1 = Num2;
	Num2 = Swap;
}

void PrintNumber(int Num1, int Num2)
{
	
	cout << "\n Number1 = " <<Num1 << endl;
	cout << " Number2 = " << Num2 << endl;
}


int main()
{
	int Num1, Num2;
	Read2Numbers(Num1, Num2);
	PrintNumber(Num1, Num2);
	SwapNumbers(Num1, Num2);
	PrintNumber(Num1, Num2);
	return 0;
}
