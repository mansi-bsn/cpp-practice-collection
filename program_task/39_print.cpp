// 39. Write a C++ program to make such a pattern like a pyramid with numbers increased by 1.
// Sample Output:
//  Input number of rows: 4
//        1
//       2 3
//      4 5 6
//     7 8 9 10

#include <iostream>
using namespace std;

int main()
{
    int i, j, n, ctr = 1, m;
    cout << "Enter number of rows: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {

        for (int k = n - 1; k >= i - 1; k--)
        {
            cout << "  ";
        }
        for (j = 1; j <= i; j++)
        {
            m = ctr++;
            cout << m << "   ";
        }
        cout << endl;
    }
    return 0;
}