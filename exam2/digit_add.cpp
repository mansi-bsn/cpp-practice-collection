//develop a program to find the sum of a number's first and last digits
//Example
//Input: 12345
//Output: 1 + 5 = 6

#include<iostream>
using namespace std;

int main()
{
    int n,i, sum = 0;
    int frst_digit, lst_digit;

    cout << "Enter any number: ";
    cin >> n;
    lst_digit = n % 10;

    while (n >= 10)
    {
        n = n/10;
    }
    frst_digit = n;
    
    sum = frst_digit + lst_digit;

    
    // sum = frst_digit + lst_digit;
    cout << "Sum of first and last digit is: " << sum;
    return 0;
} 