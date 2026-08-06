/*
  =============================================================================
  Write a program to ask the user to enter circle circumference (L), then calculate
  and print the circle area using circumference formula.
  =============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

float Readcircumference()
{
	float circumference;
	cout << "Please enter circumference:" << endl;
	cin >> circumference;
	return circumference;
}

float CalccircleAreaFromCircumFerence(float SquareSide)
{
	const float PI = 3.14159265358979323846;
	return  pow(SquareSide, 2) / (4 * PI);
}

void PrintcircleArea(float Area)
{
	cout << "circle Area = " << Area << endl;
}


int main()
{
	
	PrintcircleArea(CalccircleAreaFromCircumFerence(Readcircumference()));
	return 0;
}
