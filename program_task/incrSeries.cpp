// 13. Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n).
// Sample Output:
// Input the value for nth term: 5
// 1 = 1
// 1+2 = 3
// 1+2+3 = 6
// 1+2+3+4 = 10
// 1+2+3+4+5 = 15
// The sum of the above series is: 35

#include<iostream>
using namespace std;

int main()
{
    int n,i,j,lnSum = 0, totSum = 0;
    cout << "Enter the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;

            if (j < i)
            {
                cout << " + ";
            }
            lnSum = lnSum + j;
        }
        cout << " = " << lnSum << endl;
        totSum = totSum + lnSum;
        lnSum = 0;
    }
    cout << "Total sum of series is: " << totSum << endl;
    return 0;
}