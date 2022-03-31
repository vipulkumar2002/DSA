#include <iostream>
using namespace std;

int main()
{
    int n, i = 1;
    cin >> n;

    while (i <= n)
    {
        // Print space (1st trangle)
        int space = n - i;

        while (space)
        {
            cout << " ";
            space = space - 1;
        }

        // print 2ed tringle
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // print 3ed tringle
        int start = i - 1;
        while (start)
        {
            cout << start;
            start = start - 1;
        }

        cout << endl;

        i++;
    }
}

/*

Output

   1
  121
 12321
1234321

*/