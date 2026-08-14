/*
  =============================================================================
  Write a program to ask the user to enter a PIN code (e.g. "1234").
  Allow the user up to 3 attempts. If entered correctly, show the account
  balance ($7500). If all 3 attempts fail, lock the card and print a warning.
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
	int counter = 3;
	do
	{
		PINCode = ReadPINCode();
		counter--;
		if (PINCode == "1234")
		{
			return 1;
		}
		else
		{
			
			cout << "\n Wrong PIN, you have "<<counter<<" more tries \n\n";
			system("color 4F");
			
		}

	} while (PINCode != "1234" && counter >= 1);
	return 0;
}

int main()
{
	if (Login())
	{
		system("color 2F");
		cout << "\nyour balance is " << 7500 << endl;
	}
	else
	{
		cout << "\nCard Locked call the bank for help. \n";
	}

	return 0;
}
