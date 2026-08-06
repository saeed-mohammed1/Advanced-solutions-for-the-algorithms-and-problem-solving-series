/*
  =============================================================================
  Write a program to ask the user to enter 3 sides of a triangle (A, B, C),
  then calculate and print the area of the circle described around that triangle
  using Heron's formula.
  =============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

void Read3Number(float &a, float &b, float &c)
{
	cout << "Please enter A:" << endl;
	cin >> a;
	cout << "Please enter B:" << endl;
	cin >> b;
	cout << "Please enter c:" << endl;
	cin >> c;
	
}

float CalccircleAreaByDescribedTriangle(float a,float b, float c)
{
	const float PI = 3.14159265358979323846;
	float P = (a + b + c) / 2;

	float T;
	T = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c)));

	return PI * pow(T, 2);
}

void PrintcircleArea(float Area)
{
	cout << "circle Area = " << Area << endl;
}


int main()
{
	float a, b, c;
	Read3Number(a, b, c);
	PrintcircleArea(CalccircleAreaByDescribedTriangle(a, b, c));
	return 0;
}
