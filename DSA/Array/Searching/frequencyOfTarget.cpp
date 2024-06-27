#include<bits/stdc++.h>
using namespace std;

void arrray_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void SearchFirstOccurance(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int temp=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            temp=mid;
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            cout<<"Not Found";
        }
    }
    cout<<temp;
}

void SearchLastOccurance(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int temp1=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==key)
        {
            temp1=mid;
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else
        {
            cout<<"Not Found";
        }
    }
    cout<<temp1;
}



int main()
{
    int n,arr[100],target;
    cin>>n;
    arrray_input(arr,n);
    cout<<"target ";
    cin>>target;
    cout<<"First occured position of "<<target<<" is ";
    SearchFirstOccurance(arr,n,target);
    cout<<"Last occured position of "<<target<<" is ";
    SearchLastOccurance(arr,n,target);
    
    return 0;
}