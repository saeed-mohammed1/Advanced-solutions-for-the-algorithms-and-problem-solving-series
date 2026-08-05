/*
  =============================================================================
  Write a program to ask the user to enter rectangle side A and diagonal B,
  then calculate and print the rectangle area using side and diagonal formula.
  =============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

void Read2Number(float &A, float &B)
{
	cout << "Please enter rectangle side A" << endl;
	cin >> A;
	cout << "Please enter rectangle digonal B" << endl;
	cin >> B;
}

float CalclRectangleArea(float A, float B)
{
	return A * sqrt(pow(B, 2) - pow(A, 2));
}

void PrintRectangleArea(float Area)
{
	cout << "Rectangle Area = " << Area << endl;
}


int main()
{
	float A, B;
	Read2Number(A, B);
	PrintRectangleArea(CalclRectangleArea(A, B));
	return 0;
}
