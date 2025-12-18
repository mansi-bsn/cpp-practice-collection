//develop a program that prints all alphabet from 'a' to 'z' by skipping 3 aphabets using do-while loop.
// example
// a,e,i,m,q,u,y,
#include<iostream>
using namespace std;

int main()
{
    char ch = 'a';
    do
    {
        cout<<ch<<" ";
        ch = ch + 4;
    }while(ch >= 'a' && ch <= 'z');

    return 0;
}