/*
  =============================================================================
  Write a program to ask the user to enter a number N, then calculate and print
  the sum of all odd numbers from 1 to N.
  =============================================================================
*/
#include <iostream>
using namespace std;
enum enEvenOdd {Even = 1, Odd = 2};

enEvenOdd CheckNumEvenOrOdd(int Num)
{
	if (Num % 2 == 0)
	{
		return enEvenOdd::Even;
	}
	else
	{
		return enEvenOdd::Odd;
	}
}

int ReadNumber()
{
	int Number;
	cout << "Please enter number? " << endl;
	cin >> Number;
	return Number;
}

void PrintListNFrom1(int Number)
{
	int sum = 0;
	cout << "\n-----------------\n";
	for (int counter = 1; counter <= Number; counter ++)
	{
		if (CheckNumEvenOrOdd(counter) == enEvenOdd::Odd)
		{
			sum += counter;
		}

	}
	cout << "sum of odd numbers is " << sum << endl;
}


int main()
{
	PrintListNFrom1(ReadNumber());
	return 0;
}
