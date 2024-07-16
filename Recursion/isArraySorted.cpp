#include<bits/stdc++.h>
using namespace std;
bool isSorted(int arr[],int size)
{
    if(size==1||size==0) return true;
    if(arr[0]>arr[1]) return false;

    return(isSorted(arr+1,size-1)); 
}
void arrray_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
int main()
{
    int size,arr[1000];
    cin>>size;
    arrray_input(arr,size);
    if(isSorted(arr,size))
    {
        cout<<"YES SORTED";
    }
    else
    {
        cout<<"NOT SORTED";
    }
    return 0;
}