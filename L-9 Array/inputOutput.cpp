#include <bits/stdc++.h>
using namespace std;

int minMax()
{
    int n;
    cout << "Enter Array size: " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "List of elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

int main()
{

    minMax();
    return 0;
}