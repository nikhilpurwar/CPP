#include<bits/stdc++.h>
using namespace std;
void array_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void binarySearch(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s<=e)
    {
        if(arr[mid]==key)
        {
            cout<<"Found "<<key<<" at position "<<mid;
            break;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        else
        {
            cout<<"Not Found";
        }
    }
    
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    array_input(arr,size);
    int key;
    cout<<"Enter element to search =";
    cin>>key;
    binarySearch(arr,size,key);
    return 0;
}