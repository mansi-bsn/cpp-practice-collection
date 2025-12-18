// 21. Write a C++ program that displays the sum of the n terms of even natural numbers.
// Sample Output:
// Input number of terms: 5
// The even numbers are: 2 4 6 8 10
// The Sum of even Natural Numbers upto 5 terms: 30

#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0, i;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            cout << i << " ";
            sum = sum + i;
        }
    }
    cout << endl;
    cout << "sum of even numbers are: "<< sum << endl;
    return 0;
}