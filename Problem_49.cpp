/*
  =============================================================================
  Write a program to ask the user to enter a PIN code (e.g. "1234").
  If the code is correct, print the account balance ($7500); otherwise,
  print "Wrong PIN" and ask again until the correct PIN is entered.
  =============================================================================
*/
#include <iostream>
#include <string>
using namespace std;

string ReadPINCode()
{
	string PINCode;

	cout << " Please enter PIN code? " << endl;
	cin >> PINCode;
	
	return PINCode;

}

bool Login()
{
	string PINCode;
	do
	{
		PINCode = ReadPINCode();

		if (PINCode == "1234")
		{
			return 1;
		}
		else
		{
			cout << "\n Wrong PIN \n";
			system("color 4F");
		}

	} while (PINCode != "1234");
	return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "your balance is " << 7500 << endl;
	}

	return 0;
}
