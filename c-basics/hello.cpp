#include<iostream>
using namespace std;

int main()
{
    int gr_id;
    string name;
    string address;

    cout << "Enter your Name: " << endl;
    cin >> name;
    cout << "Enter your Address: " << endl;
    cin >> address;
    cout << "Enter your gr_id: " << endl;
    cin >> gr_id;
    
    cout << "!!----About me----!!" << endl;
    cout << "Name is: " << name << endl;
    cout << "Address is: " << address << endl;
    cout << "GR id is: " << gr_id << endl;

    return 0;
}