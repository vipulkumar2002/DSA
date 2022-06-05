#include <iostream>
using namespace std;

bool search(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    int arr[10] = {3, 6, 78, -8, 0, 5, -6, 1, 8, 1};

    cout << "Enter the Key to search" << endl;
    int key;
    cin >> key;

    bool found = search(arr, 10, key);
    if (found)
    {
        cout << "Key is present " << endl;
    }
    else
        cout << "Key is not present " << endl;

    return 0;
}