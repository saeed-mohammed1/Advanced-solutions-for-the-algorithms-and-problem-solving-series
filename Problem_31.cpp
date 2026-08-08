/*
  =============================================================================
  Write a program to ask the user to enter a number, then calculate and print
  its power of 2, 3, and 4 (N^2, N^3, N^4).
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


void CalcPowerOfnumber2_3_4(int Number)
{
	int a, b, c;
	a = Number * Number;
	b = Number * Number * Number;
	c = Number * Number * Number * Number;
	cout << a << " " << b << " " << c << endl;
}


int main()
{

	CalcPowerOfnumber2_3_4(ReadNumber());
	

	return 0;
}
