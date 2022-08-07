#include <bits/stdc++.h>
using namespace std;

void reverse2(string &st)
{
    int n = st.length();
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        swap(st[s], st[e]);
        s++;
        e--;
    }
}

void reverse(string &st)
{
    int n = st.length();
    for (int i = 0; i < n / 2; i++)
    {
        swap(st[i], st[(n - i) - 1]);
    }
}
int main()
{
    string st = "vipul";
    string st2 = "kumar";
    reverse(st);
    cout << st << endl;
    reverse2(st2);
    cout << st2;

    return 0;
}