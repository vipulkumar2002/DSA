#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;

    cin >> n;

    cout << endl;

    while (i <= n)
    {
        int j = 1;
        char value = 'A';

        while (j <= n)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
}

/*
Output

A B C D E
A B C D E
A B C D E
A B C D E
A B C D E
*/