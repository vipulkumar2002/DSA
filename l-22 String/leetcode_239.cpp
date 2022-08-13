/*
    Sliding Window Maximum
        You are given an array of integers nums, there is a sliding window of size k
        which is moving from the very left of the array to the very right.
        You can only see the k numbers in the window. Each time the sliding window
        moves right by one position.
        Return the max sliding window
 */

#include <bits/stdc++.h>
using namespace std;

void maxSlidingWindow(int a[], int k, int n)
{

    for (int i = 0; i <= n - k; i++)
    {
        int max = a[i];
        for (int j = 1; j < k; j++)
        {
            if (max < a[i + j])
            {
                max = a[i + j];
            }
        }
        cout << max << " ";
    }
}

int main()
{
    int arr[] = {1, 3, -1, -3, 5, 3, 6, 7};
    int k = 3;
    int n = sizeof(arr) / sizeof(int);
    maxSlidingWindow(arr, k, n);
    return 0;
}