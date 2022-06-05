#include <iostream>
using namespace std;

void update(int arr[], int n)
{
    cout << "Inside the function" << endl;

    // updating array
    arr[0] = 123;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout
        << "Going back to main function" << endl;
}

int main()
{
    int arr[3] = {3, 5, 9};

    update(arr, 3);

    // Printing array
    cout << "print main funtion" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}