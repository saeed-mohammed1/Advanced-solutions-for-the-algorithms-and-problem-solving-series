#include <iostream>
#include <string>
using namespace std;


float ReadPostiveNumber(string message)
{
	float Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

float TotalBillAfterServiceFeeAndSalesTax(float Bill)
{
	Bill = Bill * 1.1;
	Bill = Bill * 1.16;
	return Bill;
}


int main()
{
	float TotalBill = ReadPostiveNumber("Please Enter the Total Bill?");
	
	cout << endl;
	cout << "Total Bill = " << TotalBill << endl;
	cout << "Total Bill After service Fee and Sales tax = " << TotalBillAfterServiceFeeAndSalesTax(TotalBill )<< endl;

	return 0;

}




