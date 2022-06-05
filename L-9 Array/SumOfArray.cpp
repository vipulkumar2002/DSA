#include <iostream>
using namespace std;

int sum(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum = arr[i] + sum;
    }
    return sum;
}

int main()
{
    int arrSize;
    cout << "Enter Array Size ";
    cin >> arrSize;

    int num[100];

    cout << "Enter Array elements = ";
    for (int i = 0; i < arrSize; i++)
    {
        cin >> num[i];
    }

    cout << "Array Elements are ";
    for (int i = 0; i < arrSize; i++)
    {
        cout << num[i] << " ";
    }
    cout << endl;
    cout << "Sum of the array is " << sum(num, arrSize);
    return 0;
}