#include<bits/stdc++.h>
using namespace std;
void array_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void reverse(int arr[],int size)
{
    int end=size-1;
    for(int i=0;i<size;i++)
    {
        if(i==end)
        {
            break;
        }
        swap(arr[i],arr[end]);
        end--;
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
    reverse(arr,size);
    return 0;
}