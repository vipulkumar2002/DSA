/*
    Replace Spaces
    You have been givenastring'STR'of words.You need to replace all the spaces between
    words with "@40".
 */

#include <bits/stdc++.h>
using namespace std;

string replaceSpaces(string s)
{
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {

        if (s[i] == ' ')
        {
            // temp = temp + "@40";     it its more time to execute
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            // temp = temp+ s[i];
            temp.push_back(s[i]);
        }
    }

    return temp;
}

int main()
{
    string str = "Hello World";
    cout << replaceSpaces(str);
    return 0;
}