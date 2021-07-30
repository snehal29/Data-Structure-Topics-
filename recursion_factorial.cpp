#include<iostream>
using namespace std;
int fact(int num)
{
    if(num==0)
        return 1;
    return (num*fact(num-1));           //5!=5*4*3*2*1=120      4!=3*2*1    3!=3*2*1   2!=2*1
}
int main()
{
    int num;
    cout<<"\nEnter number:";
    cin>>num;
    cout<<"Factorial:"<<fact(num);
    return 0;
}

