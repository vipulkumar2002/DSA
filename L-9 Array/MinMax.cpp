#include <iostream>
#include <limits.h>
using namespace std;

// Creating Funtions
int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min;
}

int getMax(int num[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    return max;
}

int main()
{
    int size;
    cout << "Enter Array size ";
    cin >> size;
    int num[100];

    // Taking Input in array

    for (int i = 0; i < size; i++)
    {
        cout << "Enter Array elements ";
        cin >> num[i];
    }

    // Returning Array elements
    cout << "Elements are = ";
    for (int i = 0; i < size; i++)
    {
        cout << num[i] << " , ";
    }

    // Array with funtion
    cout << "Maximum Value is " << getMax(num, size) << endl;
    cout << "Minimum Value is " << getMin(num, size) << endl;
    return 0;
}