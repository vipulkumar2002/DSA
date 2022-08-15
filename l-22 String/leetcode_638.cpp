/*
    Remove All Adjacent Duplicates In String
        You are given a string s consisting of lowercase English letters. A duplicate
        removal consists of choosing two adjacent and equal letters and removing them.
 */

#include <bits/stdc++.h>
using namespace std;

string removeDuplicates(string s)
{
    int i = 0;
    string result = "";
    while (s[i])
    {
        if (s[i] != s[i + 1])
        {
            cout << "no" << endl;
            result = result + s[i];
            i++;
        }
        if (s[i + 1] && s[i] == s[i + 1])
        {
            while (s[i + 1] && s[i] == s[i + 1])
            {

                i++;
            }
            i++;
        }
    }

    return result;
}

int main()
{
    string str = "azxxzy";
    cout << removeDuplicates(str);
    return 0;
}