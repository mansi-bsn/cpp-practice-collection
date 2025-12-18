// takes score out of 100 from user and calculate grade using ternary operator

#include<iostream>
using namespace std;

int main()
{
    int score;
    cout << "Enter your score out of 100: " << endl;
    cin >> score;
    
    (score > 90)
        ?
        cout << "Grade: A" << endl
        :
    (score > 80)
        ?
        cout << "Grade: B" << endl
        :
    (score > 70)
        ?
        cout << "Grade: C" << endl
        :
    (score > 55)
        ?
        cout << "Grade: D" << endl
        :
    (score > 40)
        ?
        cout << "Grade: E" << endl
        :
        cout << "Grade: F" << endl;

    char choice;
    int scr;
    cout << "Enter grade: " << endl;
    cout << "1. Grade: A" << endl;
    cout << "2. Grade: B" << endl;
    cout << "3. Grade: C" << endl;
    cout << "4. Grade: D" << endl;
    cout << "5. Grade: E" << endl;
    cout << "Enter your choice; " << endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
            if(scr > 90)
            {
                cout << "Grade: A" << endl;
            }
            cout << "Excellent Work!!" << endl;
            break;
        
        case 2:
            if(scr > 80)
            {
                cout << "Grade: B" << endl;
            }
            cout << "Well Done!!" << endl;
            break;

        case 3:
            if(scr > 70)
            {
                cout << "Grade: C" << endl;
            }
            cout << "Good Job!!" << endl;
            break;

        case 4:
            if(scr > 55)
            {
                cout << "Grade: D" << endl;
            }
            cout << "You passed, but you could do better.";
            break;

        case 5:
            if(scr > 30)
            {
                cout << "Grade: F" << endl;
            }
            cout << "Sorry, you failed." << endl;
            break;
        
 
    }

    if(choice == 1 || choice == 2 || choice == 3 || choice == 4)
    {
        cout << "Congratulations! You are eligible for the next level.";
    }else
    {
        cout << "Please try again next time." << endl;
    }
    
    return 0;
}