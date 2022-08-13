/*
    Remove All Occurrences of a Substring
        Given two strings s and part, perform the following operation on s,
        until all occurrences of the substring part are removed.
        Return s after removing all occurrences of part
 */

#include <bits/stdc++.h>
using namespace std;

string removeOccurrences(string s, string part)
{
    while (s.length() != 0 && s.find(part) < s.length())
    {
        s.erase(s.find(part), part.size());
    }

    return s;
}

int main()
{
    string str = "daabcbaabcbc";
    string part = "abc";
    cout << "Result : " << removeOccurrences(str, part);
    return 0;
}