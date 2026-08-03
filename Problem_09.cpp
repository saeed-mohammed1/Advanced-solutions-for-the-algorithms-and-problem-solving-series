/*
  =============================================================================
  Write a program to ask the user to enter 3 numbers, then calculate and print
  their total sum.
  =============================================================================
*/
#include <iostream>
using namespace std;
void ReadOf3Numbers(int &Num1, int &Num2, int &Num3)
{
	cout << "Please enter number 1: " << endl;
	cin >> Num1;
	cout << "Please enter number 2: " << endl;
	cin >> Num2;
	cout << "Please enter number 3: " << endl;
	cin >> Num3;
}
int SumOf3Numbers(int Num1, int Num2, int Num3)
{
	return Num1 + Num2 + Num3;
}
void Printof3Numbers(int Total)
{
	cout << "the Total sum of Numbers is " << Total << endl;
}
int main()
{
	int Num1, Num2, Num3;
	ReadOf3Numbers(Num1, Num2, Num3);
	Printof3Numbers(SumOf3Numbers(Num1, Num2, Num3));
	return 0;
}
