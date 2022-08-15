#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Creating 2D array
    int arr[3][4];
    int arr2[3][4];

    // Taking input => (row wise)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }

    /*  // Taking input => (colum wise)
     for (int i = 0; i < 4; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             cin >> arr2[i][j];
         }
     }
     cout << endl; */

    // Printing
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    /* // Printing
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    } */

    return 0;
}