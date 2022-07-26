#include <bits/stdc++.h>
#include <array>
using namespace std;
int main()
{
    // Normal
    int arr[5];
    /*
     kya ham mormal array me size funtion use nhi kar sakte kya ?
     cout << arr.size() << endl;  shows error
    cout << arr.capacity() << endl;
     */
    cout << sizeof(arr) << endl;
    // using stl
    array<int, 5> a;
    cout << a.size() << endl;
    // cout << a.capacity() << endl;
    return 0;
}