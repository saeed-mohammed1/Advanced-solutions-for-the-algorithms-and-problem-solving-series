/*
  =============================================================================
  Write a program to ask the user to enter Loan Amount and Monthly Installment,
  then calculate and print how many months are needed to settle the loan.
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
        cout << Message;
        cin >> Number;
    } while (Number <= 0);
	return Number;
}

float CalcNumberOfMonthNeed(float LoanAmount, float MonthlyPayment)
{
	return (float) LoanAmount / MonthlyPayment;
}



int main()
{
	float LoanAmount = ReadPositiveNumber("Please enter Loan Amount?");
	float MonthlyPayment = ReadPositiveNumber("Please enter Monthly Payment?");

	cout << "you need = " << CalcNumberOfMonthNeed(LoanAmount, MonthlyPayment)<< " Months" << endl;
	return 0;
}
