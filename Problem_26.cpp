/*
  =============================================================================
  Write a program to ask the user to enter a number N, then print all numbers
  from 1 to N.
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

void PrintList1FromN(int Number)
{
	cout << "\n-----------------\n";
	for (int counter = 1; counter <= Number; counter++)
		cout << counter << endl;

}


int main()
{
	PrintList1FromN(ReadNumber());
	return 0;
}
