#include <bits/stdc++.h>
using namespace std;

bool searchKey(int a[][4], int row, int col, int k)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (a[i][j] == k)
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    // Creating 2D array
    int arr[3][4];

    cout << "Enter array elements :" << endl;

    // Taking input => (row wise)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Enter Key :" << endl;
    int k;
    cin >> k;
    cout << searchKey(arr, 3, 4, k) << endl;
    if (searchKey(arr, 3, 4, k))
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not present" << endl;
    }

    return 0;
}