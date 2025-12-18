// Write a program in C++ to find the Greatest Common Divisor (GCD) of two numbers.
// Sample Output:
// Input the first number: 25
// Input the second number: 15
// The Greatest Common Divisor is: 5

#include<iostream>
using namespace std;

int main()
{
    int num1, num2, cmn;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            cmn = i;
        }
    }
    cout << "Big common divider is: " << cmn << endl;
    return 0;
}