/*
  =============================================================================
  Write a program to ask the user to enter a number N, then print all numbers
  from N down to 1.
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
	cout << "\n-----------------\n";
	for (int counter = Number; counter >= 1; counter--)
		cout << counter << endl;

}


int main()
{
	PrintListNFrom1(ReadNumber());
	return 0;
}
