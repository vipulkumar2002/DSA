#include <bits/stdc++.h>
using namespace std;

int sum(int long long arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += arr[i];
    }
    return ans;
}
int main()
{
    int long long arr[3] = {10, 5, 4};

    cout << sum(arr, 3);

    return 0;
}