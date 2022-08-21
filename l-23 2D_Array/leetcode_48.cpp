#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[][]={{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}};
    vector<vector<int>> vect{{5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
    reverse(vect.begin(), vect.end());
    for (int i = 0; i < vect.size(); ++i)
    {
        for (int j = i + 1; j < vect[i].size(); ++j)
            swap(vect[i][j], vect[j][i]);
    }
    for (int i = 0; i < vect.size(); i++)
    {
        for (int j = vect.size() - 1; j >= 0; j--)
        {
            cout << vect[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}