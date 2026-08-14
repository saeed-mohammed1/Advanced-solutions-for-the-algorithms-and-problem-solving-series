/*
  =============================================================================
  Write a program to ask the user to enter Loan Amount and how many months
  they need to settle the loan, then calculate and print the monthly
  installment amount.
  =============================================================================
*/
#include <iostream>
#include <string>
using namespace std;

float ReadPositiveNumber(string Message)
{
	float Number;
	do
	{
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0);
	return Number;

}

float MonthlyInstallment(float LoanAmount, float HowManyMonths)
{
	return LoanAmount / HowManyMonths;
}



int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter Loan Amount?");
	float HowManyMonths = ReadPositiveNumber("How many months?");

	cout << "Monthly Installment = " << MonthlyInstallment(LoanAmount, HowManyMonths)<< endl;
	return 0;
}
