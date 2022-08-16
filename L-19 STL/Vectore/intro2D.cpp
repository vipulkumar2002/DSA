#include <bits/stdc++.h>
using namespace std;

// void print(vector<vector<int>> v)
// {
//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i];
//     }
// }

int main()
{
    int n = 20, m = 20;
    // cin >> row;
    // cin >> col;
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        for (int j = 0; j < m; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    // cout << v.size() << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}