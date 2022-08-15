#include <bits/stdc++.h>
using namespace std;

void rowWiseSum(int a[][4])
{
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            sum += a[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
}

int main()
{
    int arr[3][4];
    // Taking input => (row wise)
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> arr[i][j];
        }
    }
    rowWiseSum(arr);
    return 0;
}