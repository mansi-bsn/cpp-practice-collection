//create a menu-driven program using UDFs for the following operations.
//Factorial of a number
//Check if a number is prime
//Reverse a number

#include<iostream>
using namespace std;

int fact(int fact_dgt)
{
    int m;
    m = fact_dgt;
    for (int i = fact_dgt; i > 1; i--)
    {
        m = m * (i-1);
    }
    cout << "Factorial of " << fact_dgt << " is " << m << endl;
}

int prime(int prm_dgt)
{
    int dgt,ctr = 0;
    for (int i = 2; i < prm_dgt; i++)
    {
        if (prm_dgt % i == 0)
        {
            ctr++;
        }
    }
    if (ctr == 0)
    {
        cout << "Yes, " << prm_dgt << " is prime number." << endl;
    }else{
        cout << "No, " << prm_dgt << " is not prime number." << endl;
    }
}

int reverse(int rev_dgt)
{
    int m;
    cout << "Reeverse of " << rev_dgt << " is ";
    while (rev_dgt > 0)
    {
        m = rev_dgt % 10;
        rev_dgt = rev_dgt / 10;    
        cout << m;
    }
    cout << endl;
}

int main()
{
    int ch;
    do{
        cout << endl;
        cout << "choice 1 for factorial" << endl;
        cout << "choice 2 for primenumber check" << endl;
        cout << "choice 3 for reverse number" << endl;
        cout << "choice 0 for exit" << endl;
        cout << "Enter your choice.: " << endl;
        cin >> ch;
        
        switch (ch)
        {
            case 1:
                int fact_num;
                cout << "Enter digit to find the factorial: ";
                cin >> fact_num;
                fact(fact_num);
                break;

            case 2:
                int prime_num;
                cout << "Enter digit to find the prime number: ";
                cin >> prime_num;
                prime(prime_num);
                break;

            case 3:
                int rev_num,m1;
                cout << "Enter number to find it's reverse: ";
                cin >> rev_num;
                reverse(rev_num);
                break;

            case 0:
                cout << "Thanks for use our app, Have a nice day." << endl;
                break;
        
            default:
                break;
        }
    }while(ch != 0);
}