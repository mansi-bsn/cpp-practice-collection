// 26. Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.
// Sample Output:
// Input number of terms: 5
// 1 + 11 + 111 + 1111 + 11111
// The sum of the series is: 12345

#include<iostream>
using namespace std;

int main()
{
    int n, i, j, sum = 0, res =1;
    cout << "Enter the number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        sum = sum + res;
        cout << res;
        if (i < n)
        {
            cout << " + ";
        }
        res = res * 10 + 1;
    }
    cout << endl;
    cout << "The sum of the sarise: " << sum << endl;
    return 0;
}