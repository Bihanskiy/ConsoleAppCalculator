#pragma once
#include <iostream>

class Calculator
{
public: 
	double Calculate(double x, char oper, double y);
	std::string CalculateValidator(double x, char oper, double y);
};

