#include<iostream>
using namespace std;

int main()
{
    int c,e=90;
    int *ptr=&c;
    cin>>c;
    cout<<endl<<c<<" "<<ptr<<" "<<*ptr;
    int d=10;
    ptr=&d;
    cout<<endl<<d<<" "<<ptr<<" "<<*ptr<<" ";
    ++(ptr)=&e;
    cout<<ptr<<" "<<*ptr;

}


