#include<iostream>
using namespace std;

int main()
{
    int n;
    int sum=0;
    cin>>n;
    /*for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }*/
    sum=(n*(n+1))/2;
    cout<<endl<<sum<<" ";
}
