#include <iostream>
#include <string>
using namespace std;


float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}

float calcsum()
{
	float Number =0,sum = 0;
	int counter = 1;
	do
	{
		
		Number= ReadNumber("Please enter number " + to_string(counter));
		if (Number == -99)
		{
			break;
		}

		counter++;
		sum += Number;
	} while (Number != -99);
	return sum;
}


int main()
{
	cout << calcsum() << endl;
	 
	return 0;
}




