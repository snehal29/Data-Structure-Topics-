#include<iostream>
using namespace std;
int top=-1,val;

pushval(int arr[20],int n)
{
    cin>>val;
    if(top==n-1)
        cout<<"stack is full";
    else
        top++;
        arr[top]=val;
}
int pop(int arr[20],int n,int i)
{
    if(top==-1)
        cout<<"Stack is empty";
    else
        for(i=0;i<n;i++)
       {
         val=arr[top];
         top--;
         return val;
       }
}
int main()
{
    int arr[30],n,i;
    cout<<"\nEnter stack size:";
    cin>>n;
    cout<<"\nEnter Value:\n";
    for(i=0;i<n;i++)
    {
        pushval(arr,n);
    }
    cout<<"\nReverse stack";
    if(top>-1)
    {
        for(i=top;i>=0;i--)
        {
            cout<<"\n"<<pop(arr,n,i);
        }
    }
    return 0;
}
