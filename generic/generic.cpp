// create a generic class calculator that can perform baisc arithmatic operations.

// Requirements:
// Methods add, subtract, multiply, divide
// accept only numeric values.
// accept value from user.

#include <iostream>
using namespace std;

template <class T>
class Calculator
{
private:
    T num1, num2;

public:
    void getInput()
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }

    T add()
    {
        return num1 + num2;
    }

    T subtract()
    {
        return num1 - num2;
    }

    T multiply()
    {
        return num1 * num2;
    }

    T divide()
    {
        if (num2 == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return 0;
        }
        return num1 / num2;
    }
};

int main()
{
    // You can change int to float or double if you like
    Calculator<float> calc;

    calc.getInput();

    cout << "Addition: " << calc.add() << endl;
    cout << "Subtraction: " << calc.subtract() << endl;
    cout << "Multiplication: " << calc.multiply() << endl;
    float result = calc.divide();
    if (result != 0)
    {
        cout << "Division: " << result << endl;
    }

    return 0;
}
