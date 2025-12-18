// 25. Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].
// Sample Output:
// Input the value of x: 2
// Input number of terms: 5
// The values of series:
// 2
// -8
// 32
// -128
// 512
// The sum of the series upto 5 term is: 410

#include<iostream>
using namespace std;

int main()
{
    int n ,x, i, calc = 1;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Input the number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        int calc = (-i) * (-i) * (-i);
        cout << calc << endl;
    }
    return 0;
}