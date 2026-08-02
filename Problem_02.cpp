// Problem 02: Write a program to ask the user to enter his/her name and print it on screen.
#include <iostream>
#include <string>
using namespace std;
string ReadName()
{
	string Name;
	cout << "Please enter your Fullname: "<<endl;
	getline(cin, Name);
	return Name;
}
void PrintName(string Name)
{
	cout << "\nyour name is: " << Name << endl;
}
int main()
{
	PrintName(ReadName());
	return 0;
}
