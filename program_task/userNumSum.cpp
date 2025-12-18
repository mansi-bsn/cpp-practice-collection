// 10. Write a program in C++ to find the sum of the digits of a given number.
// Sample Output:
// Input a number: 1234
// The sum of digits of 1234 is: 10

#include<iostream>
using namespace std;

int main()
{
    int n,m,bsn, sum = 0;
    cout << "Enter any number:- ";
    cin >> n;

    m = n;

    while (n > 0)
    {
        bsn = n % 10;
        n = n / 10;
        sum = sum + bsn;
    }

    cout << "sum of all digits are: " << sum << endl;
    return 0;
}