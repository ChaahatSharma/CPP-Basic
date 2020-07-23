#include<iostream>

using namespace std;

class stack1
{
private:
    int top;
    int arr[5];
public:
    stack1()
    {
        top=-1;
    }
    bool isempty()
    {
        if(top==-1)
            return true;
        else
            return false;
    }
    bool isfull()
    {
        if(top==4)
            return true;
        else
            return false;
    }
    void push(int val)
    {
        if(isfull())
        {
           cout<<"\nOverflow\n";
        }
        else
        {
            top++;
            arr[top]=val;
            cout<<val<<" Added";
        }
    }
    void pop()
    {
        if(isempty())
        {
            cout<<"\nUnderflow\n";
        }
        else
        {
            int a;
            a=arr[top];
            //arr[top]=0;
            top--;
            cout<<a;
        }
    }
    void display()
    {
        if(top==-1)
            cout<<"\n\nEMPTY\n\n";
        else
        {for(int i=top;i>=0;i--)
            cout<<arr[i]<<endl;
    }}

};

int main()
{
    stack1 s;
    int op,value;
    do
    {
        cout<<"\n\nWhat op ";
        cout<<"\n1.push\n2.pop\n3.show\n";
        cin>>op;

        switch(op)
        {
            case 1:cout<<"\nEnter value\n";
            cin>>value;
            s.push(value);break;
            case 2:cout<<"\nPop ";s.pop();break;
            case 3:cout<<"Stack \n";s.display();break;
            default:cout<<"\n\nWrong!!\n";break;
        }

    }while(op!=0);
}
