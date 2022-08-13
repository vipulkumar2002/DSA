/*
     Longest Palindrome

     Given a string s which consists of lowercase or uppercase letters,
     return the length of the longest palindrome that can be built with those letters.
 */
#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s)
{
    string result = "";
    int i = 0;
    int n = s.length();

    while (i < n)
    {
        while (i < n && s[i] == ' ')
            i++;

        int j = i + 1;

        while (j < n && s[j] != ' ')
            j++;
        string sub = s.substr(i, j - i);

        if (result.length() == 0)
        {
            result = sub;
        }
        else
        {
            result = sub + " " + result;
        }

        i = j + 1;
    }

    return result;
}

int main()
{
    string str = "   hello   world    ";

    cout << 1 << reverseWords(str) << 1 << endl;
    // cout << reverseWords(str).length();
    return 0;
}