#include<iostream>

using namespace std;

int main()
{
    int num[5];
    int *p;
    p=num;
    *p=5;
    p=&num[1];
    *p=10;
    p++;
    *p=15;
    p=num;
    p=num+3;
    *p=20;
    *(p+1)=25;

    for(int i=0;i<5;i++)
        cout<<num[i]<<" ";
    cout<<endl<<*num+10;
}
