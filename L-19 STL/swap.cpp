
// C++ program for illustration of swap() function
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int a = 10;
    // int b = 20;
    // cout << "Value of a before: " << a << endl;
    // cout << "Value of b before: " << b << endl;

    // // swap values of the variables
    // swap(a, b);
    // cout << "Value of a now: " << a << endl;
    // cout << "Value of b now: " << b << endl;
    // return 0;

    int arr[5] = {20, 40, 23, 5, 8};
    int s = 0, e = 4;
    while (s < e)
    {

        arr[s] = arr[e];
        arr[e] = arr[s];
        s++;
        e--;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}