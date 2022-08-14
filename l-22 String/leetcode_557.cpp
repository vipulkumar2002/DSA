/*
    Reverse Words in a String III
        Given a string s, reverse the order of characters in each word within a
        sentence while still preserving whitespace and initial word order.
*/

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string str)
{
    int l = 0;
    int r = 0;
    while (l < str.length())
    {
        while (r < str.length() && str[r] != ' ')
        {
            r++;
        }
        // swap(str[l], str[r]);   this will not work
        reverse(str.begin() + l, str.begin() + r);
        l = r + 1;
        r = l;
    }

    return str;
}

int main()
{
    string str = "Let's take LeetCode contest";
    cout << reverseWords(str);

    return 0;
}