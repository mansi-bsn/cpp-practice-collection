// 17. Write a program in C++ to print a square pattern with the # character.
// Sample Output:
// Print a pattern like square with # character:
// --------------------------------------------------
// Input the number of characters for a side: 4
// # # # #
// # # # #
// # # # #
// # # # #

#include<iostream>
using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= cols; j++)
        {
            cout << "#" << " ";
        }
        cout << endl;
    }
    return 0;
}