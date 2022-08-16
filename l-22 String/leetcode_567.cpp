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

    int sumS1 = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        sumS1 = sumS1 + s1[i] - 'a' + 1;
    }
    cout << sumS1 << endl;

    for (int i = 0; i < s2.length(); i++)
    {
        int sumS2 = 0;
        for (int j = i; j < i + 2; j++)
        {
            sumS2 = sumS2 + s2[j] - 'a' + 1;
        }
        if (sumS1 == sumS2)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    string s1 = "ac";
    string s2 = "eidbaooo";

    cout << checkInclusion(s1, s2);
    return 0;
}
