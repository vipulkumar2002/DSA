#include <iostream>
using namespace std;

int main()
{
    int i, j, k, stamp = 1;
    for (i = 5; i >= 1; i--)
    {
        for (k = stamp; k >= 0; k--)
        {
            cout << " ";
        }
        for (j = i; j >= 1; j--)
        {
            cout << j;
        }
        stamp = stamp + 1;
        cout << endl;
    }
}