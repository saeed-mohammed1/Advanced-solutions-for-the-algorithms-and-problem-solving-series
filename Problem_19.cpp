/*
  =============================================================================
  Problem Statement:
  Write a program to ask the user to enter circle diameter (D), then calculate
  and print the circle area using diameter formula, Functions, and Constants.
  =============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

float ReadDiameter()
{
	float Diameter;
	cout << "Please enter Diameter:" << endl;
	cin >> Diameter;
	return Diameter;
}

float CalccircleArea(float Diameter)
{
	const float PI = 3.14159265358979323846;
	return (PI * pow(Diameter, 2))/4;
}

void PrintcircleArea(float Area)
{
	cout << "circle Area = " << Area << endl;
}


int main()
{
	
	PrintcircleArea(CalccircleArea(ReadDiameter()));
	return 0;
}
