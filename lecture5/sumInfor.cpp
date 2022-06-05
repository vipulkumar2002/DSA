#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << endl;
    int sum = 0;

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum of " << n << " is :" << sum;
}