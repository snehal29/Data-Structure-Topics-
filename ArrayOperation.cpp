#include<iostream>
#include<stdio.h>
#include<stdlib.h> //for exit() function
using namespace std;
void display(int arr[20],int n)         //display array
{
    printf("array elements are:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d \n",arr[i]);
    }

}
int insertAt(int arr [20],int n)        //insert element at particular position
{
    int loc, ele;
    printf("\nEnter the location:");
    scanf("%d",&loc);
    printf("\nEnter the element:");
    scanf("%d",&ele);
    for(int i=n-1;i>=loc;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[loc]=ele;
    return 1;

}
int deleteAt(int arr [20],int n)            //delete the element from particular location
{
    int loc, ele;
    printf("\nEnter the location:");
    scanf("%d",&loc);
    for(int i=n-1;i>=loc;i--)
    {
        arr[loc]=arr[loc+1];
    }
    return 1;

}
int searching(int arr [20],int n)           //Linear search element from the array
{
    int ele,temp;
    printf("\nEnter the element you want to search:");
    scanf("%d",&ele);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==ele)
            printf("element is found at %d",i);
    }
    return 1;

}
int sorting(int arr[20],int n)
{
    int temp=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    return 1;
}
int reverseArray(int arr[20],int n)
{
    printf("\n Reverse Array is\n");
    for(int i=n-1;i>=0;i--)
    {
        printf("\n Array element is %d",arr[i]);
    }
    return 0;
}
int main()
{
    int arr[20],n,ch;
    printf("Enter array value:");
    scanf("%d",&n);
    printf("Enter array elements ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr,n);
    printf("\n1.Insertion\n2.Deletion\n3.Sorting\n4.Searching\n5.Reverse Array\n6.Exit\n");
    printf("\nEnter Your choice:\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:insertAt(arr,n);
            n+=1;
            display(arr,n);
        break;
    case 2:deleteAt(arr,n);
            n-=1;
            display(arr,n);
        break;
    case 3: sorting(arr,n);
            display(arr,n);
        break;
    case 4:searching(arr,n);
        break;
    case 5:
        reverseArray(arr,n);
       // display(arr,n);
        break;
    case 6:
        exit(0);
        break;
    default:
        printf("INVALID");

    }
    return 0;
}
