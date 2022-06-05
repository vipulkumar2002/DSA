#include <iostream>
using namespace std;

void printArr(int arr[], int size)
{
    cout << "Printing the Array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Printing Done !" << endl;
}

int main()
{
    // Declear
    int array[15];

    // Initialization
    int arr[10] = {5, 7, 9};
    int arrSize = sizeof(arr) / sizeof(int);
    cout << "Size of arr is " << arrSize << endl;

    // Accessing an array
    cout << endl
         << "Value at 0 index : " << arr[0] << endl;
    cout << endl
         << "Value at 8 index : " << arr[8] << endl;

    // Array with function
    int arr3[12] = {3, 4};
    printArr(arr3, 12);
    int arr3Size = sizeof(arr3) / sizeof(int);
    cout << "Size of arr3 is " << arr3Size << endl;
    cout << endl
         << "Everything is good" << endl;

    return 0;
}