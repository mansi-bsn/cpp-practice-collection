// 30. Write a program in C++ to display the numbers in reverse order.
// Sample Output:
// Input a number: 12345
// The number in reverse order is : 54321

#include<iostream>
using namespace std;

int main()
{
    int num, i = 1, m;
    cout << "Enter the number: ";
    cin >> num;

    while (num > 0)
    {
        m = num % 10;
        cout << m << " ";
        num = num / 10;
    }
    
    return 0;
}