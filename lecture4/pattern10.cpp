#include <iostream>
using namespace std;

int main()
{

    int i = 1, n;
    cin >> n;
    cout << endl;
    // char value = 'A';

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char result = 'A' + i + j - 2;
            cout << result << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}

/*
Output

A B C D E
B C D E F
C D E F G
D E F G H
E F G H I

*/