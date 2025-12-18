// 42. Write a C++ program that displays the pattern like a pyramid using asterisks, with odd numbers in each row.
// Sample Output:
 
                                                     
//  Input number of rows: 5                                               
                                                                       
//     *                                                                  
//    ***                                                                 
//   *****                                                                
//  ******* 

#include <iostream>
using namespace std;

int main()
{
    int i, j, n;


    cout << "Enter number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        for (j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
