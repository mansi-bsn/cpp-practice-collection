// Selection sort
// Merge sort
// Binary search sort

#include <iostream>
using namespace std;

void selectionSort(int array[], int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; ++j)
        {
            if (array[j] < array[min_idx])
            {
                min_idx = j;
            }
        }
        swap(array[i], array[min_idx]);
    }
}

void merge(int array[], int start, int mid, int end)
{
    int temp[100];
    int i = start;
    int j = mid + 1;
    int k = 0;

    while (i <= mid && j <= end)
    {
        if (array[i] < array[j])
        {
            temp[k++] = array[i++];
        }
        else
        {
            temp[k++] = array[j++];
        }
    }

    while (i <= mid)
    {
        temp[k++] = array[i++];
    }

    while (j <= end)
    {
        temp[k++] = array[j++];
    }

    for (int m = start; m < k; m++)
    {
        array[start + m] = temp[m];
    }
}

void mergeSort(int array[], int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergeSort(array, start, mid);
        mergeSort(array, mid + 1, end);
        merge(array, start, mid, end);
    }
}

int binarySearch(int arr[], int start, int end, int target, int n)
{
    int midVal = start + (end - start) / 2;
    if (start <= end)
    {
        if (arr[midVal] == target)
        {
            return midVal;
        }
        else if (arr[midVal] > target)
        {
            return binarySearch(arr, start, midVal - 1, target, n);
        }
        else if (arr[midVal] < target)
        {
            return binarySearch(arr, midVal + 1, end, target, n);
        }
    }
    else
    {
        return -1;
    }
}

int main()
{
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the number: " << i << " ";
        cin >> arr[i];
    }
    cout << "Array list is: " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    int choice;
    do
    {
        cout << endl;
        cout << "======== Menu for searching and sorting ========" << endl;
        cout << "Press 1. for sort array using Selection Sort" << endl;
        cout << "Press 2. for sort array using Merge Sort" << endl;
        cout << "Press 3. for search index using Binary Search" << endl;
        cout << "Press 0. for Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Sorted array using Selection Sort:- " << endl;
            selectionSort(arr, size);
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            break;
        }
        case 2:
        {
            cout << "Merge Sort" << endl;
            mergeSort(arr, 0, size - 1);
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << " ";
            }
            break;
        }
        case 3:
        {
            selectionSort(arr, size);
            cout << "Array list is: " << endl;
            for (int j = 0; j < size; j++)
            {
                cout << arr[j] << " ";
            }
            cout << endl;
            cout << "Binary Search" << endl;
            int key;
            cout << "Enter the key for search: ";
            cin >> key;
            int res = binarySearch(arr, 0, size - 1, key, size);
            if (res == -1)
            {
                cout << key << " is not found at any index." << endl;
            }
            else
            {
                cout << key << " is found at " << res << " index." << endl;
            }
            break;
        }
        case 0:
        {
            cout << "Exiting..." << endl;
            break;
        }
        default:
        {
            cout << "Invalid choice" << endl;
            break;
        }
        }
    } while (choice != 0);
    return 0;
}
