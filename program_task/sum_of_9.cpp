// 23. Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
// Sample Output:
// Input number of terms: 5
// 9 99 999 9999 99999
// The sum of the sarise = 111105

#include<iostream>
using namespace std;

int main()
{
    int n, i, j, sum = 0, res =9;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + res;
        cout << res << " ";
        res = res * 10 + 9;
    }
    cout << "The sum of the sarise: " << sum << endl;
    return 0;
}