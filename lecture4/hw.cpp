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
        while (j <= i)
        {
            cout << i + j - 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

/*
Without using extra variable
Output
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/