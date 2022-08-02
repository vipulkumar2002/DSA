#include <bits/stdc++.h>
using namespace std;

void bubbleShort(int a[], int n)
{
    int min;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {

            if (a[j] > a[j + 1])

                swap(a[j], a[j + 1]);
        }
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the array elements :" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubbleShort(arr, n);
    print(arr, n);

    return 0;
}