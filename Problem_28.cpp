/*
  =============================================================================
  Write a program to ask the user to enter a number N, then calculate and print
  the sum of all odd numbers from 1 to N.
  =============================================================================
*/
#include <iostream>
using namespace std;

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
	for (int counter = 1; counter <= Number; counter += 2)
	{
		sum += counter;
	}
	cout << "sum of odd numbers is " << sum << endl;
}


int main()
{
	PrintListNFrom1(ReadNumber());
	return 0;
}
