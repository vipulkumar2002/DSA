//

#include <bits/stdc++.h>
using namespace std;

void result(int arr[], int n)
{
    // for (int i = 1; i <= n; i + 2)
    // {
    //     if (arr[i] < arr[i + 1])
    //     {
    //         arr[i] = arr[i + 1];
    //     }
    //     if (arr[i] < arr[i - 1])
    //     {
    //         arr[i] = arr[i - 1];
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int n;
    cout << "enter size of array" << endl;
    cin >> n;
    int inpu[n];
    cout << "enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> inpu[i];
    }

    result(inpu, n);
    return 0;
}