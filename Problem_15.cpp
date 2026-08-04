/*
  =============================================================================
  Write a program to ask the user to enter rectangle length and width,
  then calculate and print the rectangle area.
  =============================================================================
*/
#include <iostream>
using namespace std;

void Read2Numbers(float& length, float& width)
{
	cout << "Please enter length?\n";
	cin >> length;
	cout << "Please enter width?\n";
	cin >> width;
}

float CalcRectangleArea(float Num1, float Num2)
{
	return Num1 * Num2;
}

void PrintNumber(float Area)
{
	
	cout << "\n Rectangle Area = " << Area << endl;

}


int main()
{
	float Num1, Num2;
	Read2Numbers(Num1, Num2);
	PrintNumber(CalcRectangleArea(Num1, Num2));
	return 0;
}
