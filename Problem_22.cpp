/*
  =============================================================================
  Write a program to ask the user to enter side A and base B of an isosceles
  triangle, then calculate and print the area of the circle inscribed in that
  triangle.
  =============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

void Read2Number(float &a, float &b)
{
	cout << "Please enter A:" << endl;
	cin >> a;
	cout << "Please enter B:" << endl;
	cin >> b;
	
}

float CalccircleAreaByITriangle(float a,float b)
{
	const float PI = 3.14159265358979323846;
	return PI * (pow(b, 2) / 4 ) * ((2 * a - b) / (2 * a + b));
}

void PrintcircleArea(float Area)
{
	cout << "circle Area = " << Area << endl;
}


int main()
{
	float a, b;
	Read2Number(a, b);
	PrintcircleArea(CalccircleAreaByITriangle(a, b));
	return 0;
}
