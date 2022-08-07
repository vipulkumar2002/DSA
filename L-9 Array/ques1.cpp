// 11. Container With Most Water

#include <bits/stdc++.h>
using namespace std;

int mostWater(int arr[], int n)
{

    int l = 0;
    int r = n - 1;

    int max = 0;
    int area = 0;

    while (l < r)
    {
        int lh = arr[l];
        int rh = arr[r];
        int base = r - l;

        if (lh > rh)
        {
            area = rh * base;
            r--;
        }
        else
        {
            area = lh * base;
            l++;
        }
        if (area > max)
        {
            max = area;
        }
    }

    return max;
}

int main()
{

    int arr[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};

    cout << mostWater(arr, 9);

    return 0;
}