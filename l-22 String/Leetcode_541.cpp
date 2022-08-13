// 541. Reverse String II

#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s, int k)
{
    int st = 0;
    // int e = k;  this is failed when str length = 1 or 0
    int e = min(k, (int)s.length());
    while (st < s.length())
    {
        reverse(s.begin() + st, s.begin() + e);
        st = st + (2 * k);
        // e = st + k; same here
        e = min(st + k, (int)s.length());
    }
    return s;
}

int main()
{
    string str = "abcdefg";
    int k = 2;
    cout << reverseStr(str, k);
    return 0;
}