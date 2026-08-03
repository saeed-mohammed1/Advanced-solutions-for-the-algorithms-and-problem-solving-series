
#include <iostream>
#include <string>
using namespace std;
int ReadNumber()
{
	int Number;
	cout << "Please enter number: ";
	cin >> Number;
	return Number;
}
float CalcHalfNumber(int Number)
{
	float HalfNumber = (float(Number) / 2);
	return HalfNumber;
}
void PrintHalfNumber(int Number)
{
	string Result = "half of " + to_string(Number) + " is " + to_string(CalcHalfNumber(Number));
	cout << endl << Result << endl;
}
int main()
{
	PrintHalfNumber(ReadNumber());
	return 0;
}
