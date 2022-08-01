#include <bits/stdc++.h>
using namespace std;

// void swap(int *xp, int *yp)
// {
//     int temp = *xp;
//     *xp = *yp;
//     *yp = temp;
// }

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n - 1; i++)
    {

        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[min_idx] > arr[j])
                min_idx = j;

        // Swap the found minimum element
        // with the first element using stl
        swap(arr[min_idx], arr[i]);
    }
}

void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main()
{

    int n = 5;
    int arr[n] = {64, 25, 12, 22, 11};

    selectionSort(arr, n);

    print(arr, n);

    return 0;
}