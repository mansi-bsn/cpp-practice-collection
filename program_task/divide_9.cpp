// 28. Write a program in C++ to find the number and sum of all integers between 100 and 200 which are divisible by 9.
// Sample Output:
// Numbers between 100 and 200, divisible by 9:
// 108 117 126 135 144 153 162 171 180 189 198
// The sum : 1683

#include<iostream>
using namespace std;

int main()
{
    int i, num1, num2;
    cout << "Enter number 1: ";
    cin >> num1;

    cout << "Enter number 2: ";
    cin >> num2;

    for (i = num1; i <= num2; i++)
    {
        if (i % 9 == 0)
        {
            cout << i << " ";
        }
    }
    return 0;
}