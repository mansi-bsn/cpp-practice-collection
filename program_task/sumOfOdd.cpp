// 20. Write a C++ program that displays the sum of n odd natural numbers.
// Sample Output:
// Input number of terms: 5
// The odd numbers are: 1 3 5 7 9
// The Sum of odd Natural Numbers upto 5 terms: 25

#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0, i;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << endl;
    cout << "sum of odd numbers are: "<< sum << endl;
    return 0;
}