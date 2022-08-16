#include <bits/stdc++.h>
#include <array>
using namespace std;

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}

int main()
{
    // initialzation
    vector<int> temp;

    int n;
    cin >> n;
    // taking input
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        temp.push_back(x);
    }

    cout << "Size : " << temp.size() << endl;

    // printing
    print(temp);
    return 0;
}