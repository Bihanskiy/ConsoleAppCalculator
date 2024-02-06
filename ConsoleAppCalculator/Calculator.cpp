#include <iostream>
#include "Calculator.h"

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
		case '+':
			return x + y;
		case '-':
			return x - y;
		case '*':
			return x * y;
		case '/':
			return x / y;
		default:
			return 0.0;
	}
}

std::string Calculator::CalculateValidator(double x, char oper, double y)
{
	if (oper == '/' && y == 0)
	{
		return "Attempted to divide by zero!";
	}

	return "isValided";
}
