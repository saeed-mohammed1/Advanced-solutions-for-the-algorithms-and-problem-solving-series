/*
  =============================================================================
  Write a program to ask the user to enter a number N, then calculate and print
  the sum of all even numbers from 1 to N using three
  different loop types (For, While, Do-While).
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

void PrintListSumFor(int Number)
{
	int sum = 0;
	cout << "\n-----------------\n";
	for (int counter = 1; counter <= Number; counter ++)
	{
		if (CheckNumEvenOrOdd(counter) == enEvenOdd::Even)
		{
			sum += counter;
		}

	}
	cout << "sum of even numbers is " << sum << endl;
}

void PrintListSumWhile(int Number)
{
	int sum = 0;
	int counter = 1;
	cout << "\n-----------------\n";
	
		while (counter < Number)
		{
			if (CheckNumEvenOrOdd(counter) == enEvenOdd::Even)
			{
				sum += counter;
			}
			counter++;
		}
	
	cout << "sum of even numbers is " << sum << endl;
}

void PrintListSumDoWhile(int Number)
{
	int sum = 0;
	int counter = 1;
	cout << "\n-----------------\n";

	do
	{
		if (CheckNumEvenOrOdd(counter) == enEvenOdd::Even)
		{
			sum += counter;
		}
		counter++;
	} while (counter < Number);

	cout << "sum of even numbers is " << sum << endl;
}


int main()
{
	int Number = ReadNumber();
	PrintListSumFor(Number);
	PrintListSumWhile(Number);
	PrintListSumDoWhile(Number);
	return 0;
}
