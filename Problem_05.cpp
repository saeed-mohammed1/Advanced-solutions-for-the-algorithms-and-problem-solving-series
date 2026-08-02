// Problem 05: Write a program to ask the user to enter his Age, Driver License, and Has Recommendation,
// then print "Hired" if (Age > 21 and Has Driver License) OR Has Recommendation, otherwise print "Rejected".
#include <iostream>
using namespace std;
struct stInfo
{
	int Age;
	bool HasDriverLicense;
	bool HasRecommendation;
};
stInfo ReadInfo()
{
	stInfo Info;
	cout << "Please enter your age?" << endl;
	cin >> Info.Age;
	cout << "Do you Have Driver license?" << endl;
	cin >> Info.HasDriverLicense;
	cout << "Do you Have Recommendation?" << endl;
	cin >> Info.HasRecommendation;
	return Info;
}
bool IsAccepted(stInfo Info)
{
	if (Info.HasRecommendation)
	{
		return true;
	}
	else
	{
		return (Info.Age > 21 && Info.HasDriverLicense);
	}
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
