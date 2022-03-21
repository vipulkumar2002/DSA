#include<iostream>
using namespace std;

int main (){
    int i=1,n;
    int sum =0;
cout<<"Enter the no. :";
cin>>n;
cout<<endl;
    while (i<=n)
    {
   if(i % 2 == 0){
   cout<<i<<endl;     
sum = sum +i;
   }
   
i++;

    }
   cout<<"sum : "<<sum;
    
}