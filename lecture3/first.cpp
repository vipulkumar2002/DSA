#include<iostream>
using namespace std;

int main () {
 char ch ;
 cin>>ch;
    if( ch >= '0' && ch <= '9'){
        cout<<"this is a number"<<endl;
    }else if (ch >='a' && ch <= 'z')
    {
        cout << "this is a lover charactor"<<endl;
    }else if(ch >='A' && ch <= 'Z'){
cout<<"this is upper charector";
    }
    
}


