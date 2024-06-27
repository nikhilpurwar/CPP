#include<bits/stdc++.h>
using namespace std;
void array_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void alterSwap(int arr[],int size)
{
    for(int i=0;i<size-1;i++)
    {
        int b=i+1;
        swap(arr[i],arr[b]);
        i++;
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    array_input(arr,size);
    alterSwap(arr,size);
    return 0;
}