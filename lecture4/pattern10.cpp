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
            char result = 'A';
            cout << result << " ";
            result + i + j - 1;
            j++;
        }
        i++;
        cout << endl;
    }
}