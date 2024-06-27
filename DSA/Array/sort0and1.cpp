#include<bits/stdc++.h>
using namespace std;
void array_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void sort0and1(int arr[],int size)
{
    int s=0;
    int arr1[size];
    int j=size-1;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==1)
        {
            arr1[j]=arr[i];
            j--;
        }
        else if(arr[i]==0)
        {
            arr1[s]=arr[i];
            s++;
        }
        
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr1[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    array_input(arr,n);
    sort0and1(arr,n);
    return 0;
}