#include <bits/stdc++.h>
#include <regex>
using namespace std;

void isPresent(string str[], int n)
{
    const regex pattern("^(?=.*[a-z])(?=.*[A-Z])(?=.*\\d)(?=.*[-+_!@#$%^&*.,?]).+$");

    for (int i = 0; i < n; i++)
    {
        if (str[i].empty())
        {
            cout << "No" << endl;
            return;
        }

        // Print Yes If the string matches
        // with the Regex
        if (regex_match(str[i], pattern))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    return;
}

int main()
{

    int n;
    cout << "Enter array size: " << endl;
    cin >> n;
    string str[n];

    cout << endl
         << "Enter Strings : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }

    // Printing the Strings
    /*  cout << endl
          << "Strings are : ";
     for (int i = 0; i < n; i++)
     {
         cout << endl
              << str[i];
     }
  */

    isPresent(str, n);

    return 0;
}