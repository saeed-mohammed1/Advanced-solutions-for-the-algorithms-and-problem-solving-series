/*
  =============================================================================
  Write a program to ask the user to enter their First Name and Last Name,
  then print the Full Name on the screen using Functions and Structs.
  =============================================================================
*/
#include <iostream>
#include <string>
using namespace std;
struct stInfo
{
	string FirstName;
	string LastName;
};
stInfo ReadInfo()
{
	stInfo Info;
	cout << "Please enter your first name: " << endl;
	cin >> Info.FirstName;
	cout << "Please enter your last name: " << endl;
	cin >> Info.LastName;
	return Info;
}
string GetFullName(stInfo Info)
{
	string FullName = "";
	FullName = Info.FirstName + " " + Info.LastName;
	return FullName;
}
void PrintFullName(string FullName)
{
	cout << "your FullName is " << FullName << endl;
}
int main()
{
	PrintFullName(GetFullName(ReadInfo()));
	return 0;
}
