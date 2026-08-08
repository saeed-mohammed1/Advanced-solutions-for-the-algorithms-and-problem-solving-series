/*
  =============================================================================
  Write a program to ask the user to enter total sales, then calculate and print
  the commission percentage and total commission amount.
  =============================================================================
*/
#include <iostream>
using namespace std;

int ReadNumber()
{
	int TotalSales;
	cout << "Please enter totsl sales?" << endl;
	cin >> TotalSales;
	return TotalSales;
}

float CheckPercente(int TotalSales)
{
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else 
		return 0.00;
}

float CalcPercenteTotal(int TotalSales)
{
	return CheckPercente(TotalSales) * TotalSales;
}


int main()
{
	int TotalSales = ReadNumber();
	cout << "Percente comtion = " << CheckPercente(TotalSales) << endl;
	cout << "Total comtion = " << CalcPercenteTotal(TotalSales) << endl;
	return 0;
}
