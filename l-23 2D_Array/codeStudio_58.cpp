#include <bits/stdc++.h>
using namespace std;

int wavePrint(int a[3][4], int nRows, int mCols)
{
    int size = sizeof(a) / sizeof(int);
    if (size < nRows * mCols)
    {
        return 0;
    }
    return 1;
}

int main()
{

    int arr[3][4];
    cout << wavePrint(arr, 3, 6);

    return 0;
}