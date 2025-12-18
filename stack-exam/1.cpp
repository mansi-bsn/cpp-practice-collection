//create a stack class that uses an array TO HOLD ELEMENTS. the class will include following methods:

//1. push(): adds an element to the top of the stack
//2. pop(): removes the top element from the stack
//3. top(): returns the top element without removing it
//4. is_empty(): checks if the stack is empty
//5. is_full(): checks if the stack is full

#include<iostream>
using namespace std;
#define SIZE 5
class Stack
{
    private:
    int arr[SIZE];
    int top;

    public:
    Stack()
    {
        this->top = -1;
    }

    void push(int value)
    {
        if(top == SIZE - 1)
        {
            cout << "Stack is full" << endl;
            return;
        }
        top++;
        arr[top] = value;
    }

    void pop()
    {
        if(top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        top--;
    }

    void topEle()
    {
        if(top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Top element: " << arr[top] << endl;
    }

    void display()
    {
        if(top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        for(int i = top; i >= 0; i--)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }

    void is_empty()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        else
        {
            cout << "Stack is not empty" << endl;
        }
    }

    void is_full()
    {
        if(top == SIZE - 1)
        {
            cout << "Stack is full" << endl;
        }
        else
        {
            cout << "Stack is not full" <<endl;
        }
    }
};

int main()
{
    Stack s;
    int choice;
    do
    {
        cout << endl;
        cout << "====== Stack Menu ======" << endl;
        cout << "Press 1. for push an element." << endl;
        cout << "Press 2. for pop an element." << endl;
        cout << "Press 3. for display the top element." << endl;
        cout << "Press 4. for display the stack." << endl;
        cout << "Press 5. for check if the stack is empty." << endl;
        cout << "Press 6. for check if the stack is full." << endl;
        cout << "Press 0. to exit." << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the value to be pushed: ";
            int value;
            cin >> value;
            s.push(value);
            break;
        case 2:
            s.pop();
            break;
        case 3:
            s.topEle();
            break;
        case 4:
            s.display();
            break;
        case 5:
            s.is_empty();
            break;
        case 6:
            s.is_full();
            break;

        case 0:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (choice != 0);
    
    return 0;
}