#include<bits/stdc++.h>
using namespace std;

void arrray_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}

void upperBound(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int temp=0;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]>=key)
        {
            temp=mid;
            e=mid-1;
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

int main()
{
    int n,arr[100],target;
    cin>>n;
    arrray_input(arr,n);
    cout<<"target ";
    cin>>target;
    cout<<"Upper bound of  "<<target<<" is ";
    upperBound(arr,n,target);
    
    return 0;
}