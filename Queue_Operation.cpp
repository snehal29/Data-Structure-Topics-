#include<iostream>
using namespace std;
int f=-1,r=-1;
void insertion(int que[20],int n,int num)
{
        if(r==n-1)
        {
            cout<<"\nQueue is Full";
        }
        else
        {
                f=0;
                r=r+1;
                que[r]=num;
        }

}
void deletion(int que[20],int n)
{
    if(f==-1 || f>r)
    {
        cout<<"\nQueue is Empty";
    }
    else
    {
        cout<<"\n Deleted number is:"<<que[f];
        f++;
    }
}
void display(int que[20])
{
    if(f==-1)
        cout<<"\n Queue is empty";
    else{
        cout<<"\n Queue elements\n";
        for(int i=f;i<=r;i++)
        {
            cout<<que[i]<<""<<endl;
        }
    }
}
int main()
{
    int que[20],n,ch,num;
    cout<<"\n Enter queue size";
    cin>>n;
    do{
    cout<<"\n1.Insertion\n2.Deletion\n3.display\n";
    cout<<"\n Enter your choice:";
    cin>>ch;

        switch(ch)
        {
        case 1:
            cout<<"\nEnter number want to add in queue:";
            cin>>num;
            insertion(que,n,num);
            break;
        case 2:
            deletion(que,n);
            break;
        case 3:
            display(que);
            break;
        default:
            cout<<"\n INVALID";
        }
    }while(ch!=3);
    return 0;
}
