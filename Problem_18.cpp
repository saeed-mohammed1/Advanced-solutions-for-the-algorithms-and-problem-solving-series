/*
  =============================================================================
  Write a program to ask the user to enter circle radius (r), then calculate
  and print the circle area.
  =============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

float Read2Number()
{
	float A;
	cout << "Please enter Radius:" << endl;
	cin >> A;
	return A;
}

float CalccircleArea(float A)
{
	const float PI = 3.14159;
	return PI * pow(A , 2);
}

void PrintcircleArea(float Area)
{
	cout << "circle Area = " << Area << endl;
}


int main()
{
	
	PrintcircleArea(CalccircleArea(Read2Number()));
	return 0;
}
