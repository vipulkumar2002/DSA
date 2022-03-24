#include <iostream>
using namespace std;

int main()
{
    int i = 1, n;
    cin >> n;
    cout << endl;

    while (i <= n)
    {
        int value = i;
        int j = 1;
        while (j <= i)
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

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9

*/