/*
  =============================================================================
  Write a program to ask the user to enter square side (A), then calculate
  and print the circle area inscribed in that square.
  =============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

float ReadSquareSide()
{
	float SquareSide;
	cout << "Please enter SquareSide:" << endl;
	cin >> SquareSide;
	return SquareSide;
}

float CalccircleAreaInscribedInSquare(float SquareSide)
{
	const float PI = 3.14159265358979323846;
	return (PI * pow(SquareSide, 2))/4;
}

void PrintcircleArea(float Area)
{
	cout << "circle Area = " << Area << endl;
}


int main()
{
	
	PrintcircleArea(CalccircleAreaInscribedInSquare(ReadSquareSide()));
	return 0;
}
