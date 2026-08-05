/*
  =============================================================================
  Write a program to ask the user to enter triangle base A and height (rise) B,
  then calculate and print the triangle area.
  =============================================================================
*/
#include <iostream>
#include <cmath>
using namespace std;

void Read2Number(float &A, float &B)
{
	cout << "Please enter Half the base A" << endl;
	cin >> A;
	cout << "Please enter rise B" << endl;
	cin >> B;
}

float CalctriangleArea(float A, float B)
{
	return (A * B) / 2;
}

void PrinttriangleArea(float Area)
{
	cout << "triangle Area = " << Area << endl;
}


int main()
{
	float A, B;
	Read2Number(A, B);
	PrinttriangleArea(CalctriangleArea(A, B));
	return 0;
}
