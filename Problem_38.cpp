#include <iostream>
#include <string>
using namespace std;

enum enPrimeNotPrime{ Prime = 1, NotPrime = 2};

float ReadNumber(string message)
{
	float Number = 0;
	do
	{
		cout << message << endl;
		cin >> Number;
	} while (Number <= 0);

	return Number;
}

enPrimeNotPrime CheckPrimeNumber(int Number)
{
	int M = round(Number / 2);
	for (int counter = 2; counter = M; counter++)
	{
		if (Number % counter == 0)
			return enPrimeNotPrime::NotPrime;
	}
	return enPrimeNotPrime::Prime;
}

void Print(int Number)
{
	switch (CheckPrimeNumber(Number))
	{
	case enPrimeNotPrime::Prime:
		cout << "number is prime\n";
		break;
	case enPrimeNotPrime::NotPrime:
		cout<< "number is Not prime\n";
		break;
	}

}


int main()
{
	 Print(ReadNumber("Please enter positive number: "));
	 
	return 0;
}




