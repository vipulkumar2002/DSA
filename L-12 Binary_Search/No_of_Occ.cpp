#include <bits/stdc++.h>
using namespace std;

int firstOcc(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == k)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int lastOcc(int arr[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {

        if (arr[mid] == k)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }

    return ans;
}

int main()
{

    int arr[5] = {1, 3, 3, 3, 4};

    cout << "First occurenece of 3 is : " << firstOcc(arr, 5, 3) << endl;
    cout << "Last occurenece of 3 is : " << lastOcc(arr, 5, 3) << endl;

    cout << "No Of Occu of 3 is : " << (lastOcc(arr, 5, 3) - firstOcc(arr, 5, 3) + 1);
}
