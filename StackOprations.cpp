#include<iostream>
using namespace std;
int top=-1;
int pushOP(int st[20],int val,int n);
int popOP(int st[20],int val);
void display(int st[20],int i);

int pushOP(int st[20],int val,int n)
{
    if(top == n-1)
        cout<<"stack is full";
    else
        top++;
        st[top]=val;
        cout<<"\n The  "<<val<<" is pushed in stack";
      return 0;
}
int popOP(int st[20],int val)
{
    if(top==-1)
        cout<<"stack empty";
    else
        val=st[top];
        top--;
        //cout<<"\n The "<<top<<"is popped from Stack";
    return 0;
}
void display(int st[20],int i)
{

    if(top>-1)
    {
        for(i=top;i>=0;i--)
            cout<<"\n"<<st[i];
    }

}
int main()
{
    int st[20],ch,n,i,val;
    cout<<"\n Enter stack size:";
    cin>>n;
    do
{
    cout<<"\n 1.Push \n 2. Pop \n 3.Display";
    cout<<"\n Enter your choice:";
    cin>>ch;

    switch(ch)
    {
        case 1:
            cout<<"\n Enter value:";
            cin>>val;
            pushOP(st,val,n);
            break;
        case 2:
            popOP(st,val);
            break;
        case 3:
            display(st,i);
            break;
        default:
            cout<<"INVALID";
    }
}while(ch!=4);
    return 0;
}
