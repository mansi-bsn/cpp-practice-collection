// 27. Write a program in C++ to display the first n terms of the Fibonacci series.
// Sample Output:
// Input number of terms to display: 10
// Here is the Fibonacci series upto to 10 terms:
// 0 1 1 2 3 5 8 13 21 34

#include<iostream>
using namespace std;

int main()
{
    int n,i, n1 = 0, n2 = 1, n3;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << n1 << " " << n2;

    for (i = 3; i <= n; i++)
    {
        n3 = n1 + n2;
        cout << " " << n3;
        n1 = n2;
        n2 = n3;
    }
    return 0;
}