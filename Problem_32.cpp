/*
  =============================================================================
  Write a program to ask the user to enter a Base number and an Exponent (Power),
  then calculate and print the result of Base^Exponent.
  =============================================================================
*/
#include <iostream>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter number?" << endl;
	cin >> Number;
	return Number;
	
}

int ReadPower( )
{
	int exponent;
	cout << "Please enter power of number?" << endl;
	cin >> exponent;
	return exponent;
}


int CalcPow(int Number, int exponent)
{
	int powr= Number;
	if (exponent == 0)
		{
			return 1;
		}
	
	for (int i = 2; i <= exponent; i++)
	{
		powr = powr * Number;
	}
	return powr;
		
}


int main()
{
	cout << CalcPow(ReadNumber(), ReadPower()) << endl;
	return 0;
}
