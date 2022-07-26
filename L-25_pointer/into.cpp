#include <bits/stdc++.h>
using namespace std;

// void print(int *q)
// {
//   cout << sizeof(q) << endl;
// }

int main()
{
  /*  int num = 4;
   int a = num;
   cout << "before " << &num << endl;

   a++;
   cout << "after " << &num << endl;

   int *p = &num;

   cout << endl
        << num << endl;
   (*p)++;
   cout << endl
        << num << endl; */

  // Copying a poiter
  /*
      int *q = p;
      cout << *q << endl;

      int i = 3;

      int *t = &i;
      cout << *t << endl;
      *t++;
      cout << "after increment T is :" << *t << endl; */
  /*  float f = 10.5;
   float *ptr = &f;
   (*ptr)++;
   cout << *ptr; */

  /*   int *ptr = 0;
    int a = 10;
    *ptr = a;                                 ***** error kaise ******
    cout << *ptr << endl; */

  /* char ch = 'a';
  char *ptr = &ch;
  ch++;
  cout << ptr << endl;
  */

  /* int a = 10;
  int *ptr = &a;
  ptr = ptr + 1;
  cout << a << " " << *ptr; */

  /* int a[3] = {10, 20, 30};
  cout << *(a) << " " << *(a + 1) << endl; */

  /*  int a[3] = {10, 20, 30};
   int *ptr = a++;
   cout << *ptr << endl; */

  /* int a[] = {10, 20, 30};
  int *p = (a + 1);
  cout << *p << endl; */

  // /* char ch[] = "xyz";
  // char *c = &ch[0];                             ***** "xyz" kaise ******
  // cout << c << endl; */

  /*   char s[] = "hello";
    char *c = s;
    cout << s[0] << " " << c[0] << endl; */

  /* char arr[2];
  int i = 1;
  *(arr + i) = 65 + i;
  *(arr + i) = '\0'; // ****** what is the meaning of this line ******
  cout << arr << endl; */

  /*  int arr[5];
   cout << arr << " " << arr + 1 << endl; */

  /*
      int a[10];
      a = a + 1;
      cout<<a<<endl; */

  // int v = 5;
  // int *p = &v;

  // print(p);

  /*  int a[10];
   int *p = &a[10];
   cout << sizeof(p) << endl; */
  // print(a);

  //// call by reference
  /*
      int x = 10;
      int y = x;
      y = y + 5;

      cout << y << endl;

      x = x + 6;
      cout << x << endl; */

  /*  char ch[] = "ABCD";
   for (int i = 0; ch[i] != '\0'; i++)
   {
     cout << *(ch) << endl; //********************** 65 & so on  understandable

     cout << *(ch) + i << endl; //********************** A & so on  how
   }
  */

  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
  float *ptr1 = &arr[0];
  float *ptr2 = ptr1 + 3;
  cout << *ptr2 << " ";
  cout << ptr2 - ptr1;

  return 0;
}