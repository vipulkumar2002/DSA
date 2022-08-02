#include <bits/stdc++.h>
using namespace std;
int shouldPunish(int roll[], int marks[], int n, double avg)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - i - 1; j++)
        {
            if (roll[j] > roll[j + 1])
            {
                count++;
            }
            if (marks[j] > marks[j + 1])
            {
                count++;
            }
        }
    }

    int totalMarks;
    int totalStd = 0;
    for (int i = 0; i < n; i++)
    {
        totalMarks += marks[i];
        totalStd++;
    }

    int classAvg;
    classAvg = (totalMarks - count) / totalStd;

    if (avg > classAvg)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

int main()
{

    int N = 6;
    int avg = 67.5;
    int roll[] = {5, 4, 1, 3, 2, 6};
    int marks[] = {78, 98, 86, 67, 78, 79};

    cout << shouldPunish(roll, marks, N, avg);
    return 0;
}