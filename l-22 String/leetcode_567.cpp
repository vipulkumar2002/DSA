/*
    Permutation in String
        Given two strings s1 and s2, return true if s2 contains a permutation of s1,
        or false otherwise.
        In other words, return true if one of s1's permutations is the substring of s2
 */

#include <bits/stdc++.h>
using namespace std;

bool checkInclusion(string s1, string s2)
{
    for (int i = 0; i < s2.length(); i++)
    {
        if (s2.find(s1) || s2.rfind(s1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    string s1 = "ab";
    string s2 = "eidboaoo";
    cout << checkInclusion(s1, s2);
    return 0;
}

not solved !