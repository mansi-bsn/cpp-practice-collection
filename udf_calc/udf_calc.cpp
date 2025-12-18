// write a menu driven program to implement arithmatic operation such as +,-,*,/,% using UDF, switch case and looping. make sure that the program is endless until a certain letter is pressed.

#include<iostream>
using namespace std;

int addition(int a, int b){
    int ans = a + b;
    cout << "Addition of " << a << " and " << b << " is: " << ans << endl;
    return ans;
}

int subtraction(int a, int b)
{
    int ans = a - b;
    cout << "Subtraction of " << a << " and " << b << " is: " << ans << endl;
    return ans;
}

int multiplication(int a, int b)
{
    int ans = a * b;
    cout << "Multiplication of " << a << " and " << b << " is: " << ans << endl;
    return ans;
}

int divide(int a, int b)
{
    int ans = a / b;
    cout << "Divide of " << a << " and " << b << " is: " << ans << endl;
    return ans;
}

int mod(int a, int b)
{
    int ans = a % b;
    cout << "Modulus of " << a << " and " << b << " is: " << ans << endl;
    return ans;
}
int main()
{
    int ch, num1, num2;
    do{
        cout << "Input/Output" << endl;
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 to exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
            case 1:
                int a_num1, a_num2;
                cout << "Enter the first number: ";
                cin >> a_num1;
                cout << "Enter the second number: ";
                cin >> a_num2;
                addition(a_num1, a_num2);
                break;

            case 2:
                cout << "Enter the first number: ";
                int s_num1, s_num2;
                cout << "Enter the first number: ";
                cin >> s_num1;
                cout << "Enter the second number: ";
                cin >> s_num2;
                subtraction(s_num1, s_num2);
                break;

            case 3:
                int m_num1, m_num2;
                cout << "Enter the first number: ";
                cin >> m_num1;
                cout << "Enter the second number: ";
                cin >> m_num2;
                multiplication(m_num1, m_num2);
                break;

            case 4:
                int d_num1, d_num2;
                cout << "Enter the first number: ";
                cin >> d_num1;
                cout << "Enter the second number: ";
                cin >> d_num2;
                divide(d_num1, d_num2);
                break;

            case 5:
                int mod_num1, mod_num2;
                cout << "Enter the first number: ";
                cin >> mod_num1;
                cout << "Enter the second number: ";
                cin >> mod_num2;
                mod(mod_num1, mod_num2);
                break;

            case 0:
                cout << "Exit" << endl;
                break;

            default:
                break;
        }


    }while (ch != 0);

    return 0;
}