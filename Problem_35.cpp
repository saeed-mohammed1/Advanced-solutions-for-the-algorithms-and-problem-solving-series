/*
  =============================================================================
  Write a program to ask the user to enter a piggy bank content (Pennies,
  Nickels, Dimes, Quarters, and Dollars), then calculate and print the total
  pennies and total dollars.
  =============================================================================
*/
#include <iostream>
using namespace std;

struct stPiggyBankContenet
{
	int Pennies, Nickels, Dimes, Quarters, Dollars;
};

stPiggyBankContenet ReadPiggyBankContenet()
{
	stPiggyBankContenet PiggyBankContenet;
	cout << "Please enter Pennies:" << endl;
	cin >> PiggyBankContenet.Pennies;
	cout << "Please enter Nickels:" << endl;
	cin >> PiggyBankContenet.Nickels;
	cout << "Please enter Dimes:" << endl;
	cin >> PiggyBankContenet.Dimes;
	cout << "Please enter Quarters:" << endl;
	cin >> PiggyBankContenet.Quarters;
	cout << "Please enter Dollars:" << endl;
	cin >> PiggyBankContenet.Dollars;
	return PiggyBankContenet;

}

int CalculateTotalPennies(stPiggyBankContenet PiggyBankContenet)
{
	int TotalPennies = 0;
	TotalPennies = PiggyBankContenet.Pennies * 1 + PiggyBankContenet.Nickels * 5 +
		PiggyBankContenet.Dimes * 10 + PiggyBankContenet.Quarters * 25 +
		PiggyBankContenet.Dollars * 100;
	return TotalPennies;
}


int main()
{
	int TotalPennies = CalculateTotalPennies(ReadPiggyBankContenet());
	cout << endl << "Total Pennies = " << TotalPennies << endl;
	cout << endl << "Total Dollars = " << (float)TotalPennies / 100 << endl;
	return 0;
}
