#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 2; i < n;)
    {
        if (n % i == 0)
        {
            cout << "Not prime";
            break;
        }
        else
        {
            cout << "prime";
        }
    }
}