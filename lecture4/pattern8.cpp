#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cin >> n;
    cout << endl;

    /* w-1
        while (i <= n)
        {
            int j = 1;
            int value = i;
            while (j <= i)
            {
                cout << value << " ";
                value--;
                j++;
            }
            cout << endl;
            i++;
        }
    */

    // w-2

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}

/*
In Reverse order
Output
1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
*/