//develop a program to count the total number of digits in a number
//example
//enter any number: 12345
//total number of digits: 5

#include<iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cout << "Enter any number: ";
    cin >> n;

    while (n > 0)
    {
        n = n / 10;
        cnt++;
    }
    cout << "total number of digits: " << cnt << endl;
    return 0;
}