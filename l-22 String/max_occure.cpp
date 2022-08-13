#include <bits/stdc++.h>
using namespace std;

char getMaxOccurringChar(string s)
{
    // create an arrey to store count of occurece of char
    int arr[26] = {0};

    for (int i = 0; i < s.length(); i++)
    {
        // finding the index of count
        int arrIndex = s[i] - 'a';

        // updating the count value
        arr[arrIndex]++;
    }

    int max = -1; // -1, because all count is initiaze woth 0
    int result = 0;
    for (int i = 0; i < 26; i++)
    {
        if (max < arr[i])
        {
            result = i;
            max = arr[i];
        }
    }

    return result + 'a';
}

int main()
{
    string str = "testsample";
    cout << getMaxOccurringChar(str);
    return 0;
}
