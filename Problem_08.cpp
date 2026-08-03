/*
  =============================================================================
  Write a program to ask the user to enter a mark, then check whether the student
  passed (Mark >= 50) or failed (Mark < 50).
  =============================================================================
*/
#include <iostream>
enum enPassFail {Pass = 1, Fail = 2};
using namespace std;
int ReadMark()
{
	int Mark;
	cout << "Please enter Mark: ";
	cin >> Mark;
	return Mark;
}
enPassFail CheckPassFail(int Mark)
{
	if (Mark >= 50)
		return enPassFail::Pass;
	else
		return enPassFail::Fail;
}
void PrintPassFail(int Mark)
{
	if (CheckPassFail( Mark) == enPassFail::Pass)
		cout << "\n you Passed" << endl;
	else
		cout << "\n you Failed" << endl;
}
int main()
{
	PrintPassFail(ReadMark());
	return 0;
}
