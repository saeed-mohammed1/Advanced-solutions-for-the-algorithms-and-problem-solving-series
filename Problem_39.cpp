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

float CheckPill(float Bill, float Cash)
{
	return Cash - Bill;
}


int main()
{
	float Bill = ReadPostiveNumber("Please Enter the Bill:");
	float Cash = ReadPostiveNumber("Please Enter the Cash:");

	cout << "Bill = " << Bill << endl;
	cout << "Cash = " << Cash << endl;

	cout << "-------------------" << endl;
	cout << "reminder = " << CheckPill(Bill, Cash) << endl;

}




