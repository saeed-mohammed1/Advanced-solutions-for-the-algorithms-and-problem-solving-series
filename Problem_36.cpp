#include <iostream>
#include <string>
using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

float ReadNumber(string Message)
{
	float Number = 0;
	cout << Message << endl;
	cin >> Number;
	return Number;
}

enOperationType ReadOpType()
{
	char OT = '+';
	cout << "Please enter operation type?" << endl;
	cin >> OT;
	return (enOperationType)OT;
}

float Calculate(float Number1, float Number2, enOperationType OpType)
{
	switch (OpType)
	{
		case enOperationType::Add:
				return Number1 + Number2;
		case enOperationType::Subtract:
			return Number1 - Number2;
		case enOperationType::Multiply:
			return Number1 * Number2;
		case enOperationType::Divide:
			return Number1 / Number2;

	}
}


int main()
{
	
	 float Number1 = ReadNumber("Please enter first number?");
	 float Number2 = ReadNumber("Please enter second number?");
	enOperationType Type = ReadOpType();
	cout << "----------\n";
	cout << Calculate(Number1, Number2, Type) << endl;
	return 0;
}




