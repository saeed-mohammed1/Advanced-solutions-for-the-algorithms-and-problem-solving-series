/*
  =============================================================================
  Write a program to ask the user to enter 3 marks, calculate their average,
  and print whether the student passed (Average >= 50) or failed.
  =============================================================================
*/
#include <iostream>
using namespace std;
enum enPassFail {Pass = 1 , Fail = 2};
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
enPassFail CheckAvrege(float Avrage)
{
	if (Avrage >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void Printof3Marks(float Avrage)
{
	cout << "the Avrage of marks is " << Avrage << endl;
	if (CheckAvrege(Avrage) == enPassFail::Pass)
		cout << "\n you Passed" << endl;
	else
		cout << "\n you Failed" << endl;
}


int main()
{
	int Mark1, Mark2, Mark3;
	ReadOf3Marks(Mark1, Mark2, Mark3);
	Printof3Marks(calcAvrege(Mark1, Mark2, Mark3));
	return 0;
}
