#include <iostream>
using namespace std;

int main()
{
    int i, j, row = 6;
    for (i = 1; i <= row; ++i)
    {
        for (j = 1; j <= i; ++j)
        {
            cout << j;
        }
        cout << endl;
    }
}