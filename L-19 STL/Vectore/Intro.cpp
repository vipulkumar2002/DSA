#include <bits/stdc++.h>
#include <array>
using namespace std;
int main()
{
    vector<int> a(5, 1);

    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl;
    cout << a.size() << endl;
    cout << a.capacity() << endl;
    cout << a.max_size() << endl; // capacity of system
    return 0;
}