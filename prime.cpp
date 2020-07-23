
#include<iostream>
using namespace std;

int main()
{

    long n,i;
    cin>>n;
    for(i=2;i*i<=n;i++)
    {
        cout<<"Checked "<<i<<endl;
        if((n%i)==0)
            {cout<<"not a prime";break;
    }}
    if(i*i>n)
    {
        cout<<"Prime";
    }
}
