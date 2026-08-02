// Problem 04: Write a program to ask the user to enter his Age and Driver License,
// then print "Hired" if Age is greater than 21 and has a Driver License, otherwise print "Rejected".
#include <iostream>
using namespace std;
struct stInfo
{
	int Age;
	bool HasDrivreLicense;
};
stInfo ReadInfo()
{
	stInfo Info;
	cout << "Please enter your age?" << endl;
	cin >> Info.Age;
	cout << "Have you Driver license?" << endl;
	cin >> Info.HasDrivreLicense;
	return Info;
}
bool IsAccepted(stInfo Info)
{
	return (Info.Age > 21 && Info.HasDrivreLicense);
}
void PrintInfo(stInfo Info)
{
	if (IsAccepted(Info))
	{
		cout << "\n Hired" << endl;
	}
	else
	{
		cout << "\n Rejected" << endl;
	}
}
int main()
{
	PrintInfo(ReadInfo());
	return 0;
}
