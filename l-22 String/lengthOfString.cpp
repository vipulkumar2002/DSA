#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st = "vipul";

    cout << "length fun " << st.length() << endl;

    cout << "size fun " << st.size() << endl;

    int i = 0;
    while (st[i])
    {
        i++;
    }
    cout << "while " << i << endl;

    int count = 0;
    for (int i = 0; st[i] != '\0'; i++)
    {
        count++;
    }
    cout << "For " << count << endl;
    return 0;
}