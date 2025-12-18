// 22. Write a program in C++ to display the n terms of a harmonic series and their sum.
// 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms.
// Sample Output:
// Input number of terms: 5
// 1/1 + 1/2 + 1/3 + 1/4 + 1/5

#include<iostream>
using namespace std;

int main()
{
    int n,i;
    float sum = 0;
    cout << "Enter number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++)
    {
        float calc = (1 / float(i));
        float res = calc;
        cout << 1 << " / " << i;
        if (i < n)
        {
            cout << " + ";
        }

        sum = sum + res; 
    }
    cout << endl;
    cout << "The sum of the series upto " << n << " terms: " << sum << endl;
    return 0; 
}