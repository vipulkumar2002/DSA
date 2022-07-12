#include <iostream>
using namespace std;

int main()
{
    // int n1, n2;
    // int n;

    // cout << "Enter two number : " << endl;

    // cin >> n1 >> n2;

    // cout << "enter op";
    // cin >> n;
    // switch (n)
    // {
    // case 1:
    //     break;
    // case 2:
    //     break;
    // case 3:
    //     break;
    // case 4:
    //     break;
    // default:
    // {

    //     cout << "Enter Valid chose : ";
    //     exit(0);
    // }
    //     return 0;
    // }

    //================================================

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "abcd";
    //     break;
    // }

    // int i;

    // for (i = 0; i < 3; i++)
    // {
    //     int a = 5;
    //     int b = 6;
    // }

    // cout << i << endl;
    // return 0;

    //===============================================================

    // int n;
    // cout << "enter number to add : ";
    // cin >> n;
    // int sum = 0;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    // cout << "Sum of n number : " << sum;
    // return 0;

    // ====================================================================

    // int n;
    // cin >> n;
    // int count = 0;

    // while (n > 0)
    // {
    //     count += n % 10;

    //          n = n / 10;
    // }
    // cout << count;

    // =======================================================================
    /* int n;

    cin >> n;
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {

        if (n == 0)
        {
            fact = 1;
        }
        else if (n < 0)
        {
            cout << "Enterd no is not valid : ";
        }
        else
        {

            fact = fact * i;
        }
    }

    cout << fact; */

    // =============================================================

    /*   int long long n;

      cin >> n;
      int long long digit;
      while (n != 0)
      {
          digit = n % 10;
          cout << digit;
          n = n / 10;
      } */

    // ==============================================================

    //     int n;

    //     cin >> n;

    //     for (int i = 1; i <= n; i++)
    //     {

    //         cout << endl;
    //         for (int j = 0; j <= i - 1; j++)
    //         {
    //             cout << "*";
    //         }
    //     }

    //     return 0;
    // }

    // =======================================================

    /*  int arr[5];

     cout << "Enter array elements : " << endl;
     for (int i = 0; i < 5; i++)
     {
         cin >> arr[i];
     }
     cout << endl;

     for (int i = 0; i < 5; i++)
     {
         cout << arr[4 - i] << " ";
     } */

    double arr[5];
    double average = 0;

    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int size = sizeof(arr) / sizeof(double);
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        total += arr[i];
    }
    average = total / size;
    cout << average;

    return 0;
}
