#include <bits/stdc++.h>
#include <array>
#include <vector>
#include <iterator>
using namespace std;
int main()
{

    array<int, 5> arr;
    array<int>::iterator it;
    auto it = arr.begin();
    while (it != arr.end())
    {
        cout << *it << endl;
    }

    // vector<int> v;
    // v = {1, 2, 3, 4, 5};

    // vector<int>::iterator it;
    // auto it = v.begin();
    // while (it != v.end())
    // {

    // }
    return 0;
}