
#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double result = 0.0;
    char oper = '+';
    std::string calculatorValidationStatus = "";

    cout << "Calculator Console Application" << endl << endl;
    cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;

    Calculator calculatorInstanse;
    while (true)
    {
        cin >> x >> oper >> y;

        if (cin.fail())
        {
            cout << "Invalid input. Please enter valid numbers." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }

        calculatorValidationStatus = calculatorInstanse.CalculateValidator(x, oper, y);

        if (calculatorValidationStatus == "isValided")
        {
            result = calculatorInstanse.Calculate(x, oper, y);
        }
        else
        {
            cout << calculatorValidationStatus << endl;
            continue;
        }
        cout << "Result " << "of " << x << oper << y << " is: " << result << endl;
    }

    return 0;
}