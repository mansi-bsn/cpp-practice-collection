// 1. basic linked list implementation : craete a basic linked list with append() and display()
// 2. insert at beginning and search operation add methods for inserting at the beginning and searching for element
// 3. deletion of a node : implement deletion by value.
// 4. reversing the linked list : add functionality to reverse the linked list

#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* nextNode;

    Node(int data)
    {
        this->data = data;
        this->nextNode = NULL;
    }
};

class LinkList
{
    public:
    Node* head;
    int count;
    LinkList()
    {
        this->head = NULL;
        this->count = 0;
    }

    void insert_at_beginning(int data)
    {
        Node* newNode = new Node(data);
        newNode->nextNode = head;
        head = newNode;
        count++;
    }

    void search(int key)
    {
        Node *searchNode = head;
        int countSearch = 0;
        while(searchNode != NULL)
        {
            countSearch++;
            if (searchNode->data == key)
            {
                cout << "searched node is: " << key << " found at position: " << countSearch << "." << endl;
                return;
            }else{
                cout << "searched node is: " << key << " not found." << endl;
                return;
            }
            searchNode = searchNode->nextNode;
        }

    }

    void delete_node(int key)
    {
        if (head == NULL)
        {
            cout << "Linked list is empty." << endl;
            return;
        }
        if (head->data == key)
        {
            head = head->nextNode;
            return;
        }
        Node* temp = head;
        while (temp->nextNode->data != key)
        {
            temp = temp->nextNode;
        }
        temp->nextNode = temp->nextNode->nextNode;
        
        count--;
    }

    void reverse()
    {
        Node* prev = NULL;
        Node* current = head;
        Node* next = NULL;
        while (current != NULL)
        {
            next = current->nextNode;
            current->nextNode = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }

    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->nextNode;
        }
    }

};

int main()
{
    LinkList list;
    int choice;
    do
    {
        cout << endl;
        cout << "======CRUD operation on linked list=======" << endl;
        cout << "Press 1. for insert node at beginning." << endl;
        cout << "Press 2. for search node." << endl;
        cout << "Press 3. for delete node." << endl;
        cout << "Press 4. for reverse linked list." << endl;
        cout << "Press 5. for display." << endl;
        cout << "Press 0. for exit." << endl;
        cout << "Enter your choice :- ";
        cin >> choice;

        switch (choice)
        {
            case 1:
            {
                int data;
                cout << "Enter the data for insert node at beginning: ";
                cin >> data;
                list.insert_at_beginning(data);
                cout << "Node inserted successfully..." << endl;
                break;
            }

            case 2:
            {
                int key;
                cout << "Enter the key for search node: ";
                cin >> key;
                list.search(key);
                break;
            }

            case 3:
            {
                int del_key;
                cout << "Enter the key for delete node: ";
                cin >> del_key;
                list.delete_node(del_key);
                cout << "Node deleted successfully..." << endl;
                break;
            }

            case 4:
            {
                list.reverse();
                cout << "Linked list reversed successfully..." << endl;
                break;
            }

            case 5:
            {
                cout << "Node list is: " << endl;
                list.display();
                break;
            }

            case 0:
            {
                cout << "Exit successfully..." << endl;
                break;
            }

            default:
            {
                cout << "Invalid choice" << endl;
                break;
            }
        }
    }while(choice != 0);
    return 0;
}