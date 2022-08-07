// Check If The String Is A Palindrome

#include <bits/stdc++.h>
using namespace std;

bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    return 0;
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool palindrome(string s)
{
    string temp = "";

    // remove faltu
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            temp.push_back(s[i]);
        }
    }

    // lowercase me kardo
    for (int j = 0; j < temp.length(); j++)
    {

        temp[j] = toLowerCase(temp[j]);
    }
    cout << endl;

    int st = 0;
    int e = temp.length() - 1;

    while (st <= e)
    {
        if (temp[st] != temp[e])
        {
            return 0;
        }
        else
        {
            st++;
            e--;
        }
    }
    return 1;
}

int main()
{
    string st = "c1 O$d@eeD o1c";

    cout << "palindrome " << palindrome(st);

    return 0;
}