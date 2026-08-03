/*
  =============================================================================
  Write a program to ask the user to enter 3 marks, then calculate and print
  their average.
  =============================================================================
*/
#include <iostream>
using namespace std;

void ReadOf3Marks(int &Mark1, int & Mark2, int & Mark3)
{
	cout << "Please enter mark1: " << endl;
	cin >> Mark1;
	cout << "Please enter mark2: " << endl;
	cin >> Mark2;
	cout << "Please enter mark3: " << endl;
	cin >> Mark3;
}

int SumOf3Marks(int Mark1, int Mark2, int Mark3)
{
	return Mark1 + Mark2 + Mark3;
}

float calcAvrege(int Mark1, int Mark2,int Mark3)
{
	return (float)SumOf3Marks(Mark1, Mark2, Mark3) / 3;
}

void Printof3Marks(float Total)
{
	cout << "the Avrage of marks is " << Total << endl;
}


int main()
{
	int Mark1, Mark2, Mark3;
	ReadOf3Marks(Mark1, Mark2, Mark3);
	Printof3Marks(calcAvrege(Mark1, Mark2, Mark3));
	return 0;
}
