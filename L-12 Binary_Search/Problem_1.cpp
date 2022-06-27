#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;

    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end);
    }

    return -1;
}

int main()
{
    int even[6] = {2, 5, 7, 9, 13, 16};
    int odd[5] = {3, 8, 12, 17, 20};

    int evenIndex = binarySearch(even, 6, 5);
    cout << "Index of 5 is: " << evenIndex << endl;

    int oddIndex = binarySearch(odd, 5, 10);
    cout << "Index of 12 is: " << oddIndex << endl;

    return 0;
}