// 36. Write a program in C++ to display the pattern like right angle triangle with number.
// Sample Output:
// Input number of rows: 5
// 1
// 12
// 123
// 1234
// 12345

#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout << "Enter number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
    return 0;
}