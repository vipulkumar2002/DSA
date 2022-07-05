#include <bits/stdc++.h>
using namespace std;

int arrang()
{
}

int maxSum(int a[], int n)
{
    int ans = 0;

    if (a[0] > a[1])
    {
        ans = a[0];
    }
    else
    {
        ans = a[1];
    }
    for (int i = 2; i < n; i++)
    {
        ans += a[i] * i;
    }
    return ans;
}

int main()
{
    int arr[] = {4, 1, 7, 5, 1};
    int n;

    cout << "maximum sum : " << maxSum(arr, 5);

    Incomplete;
}