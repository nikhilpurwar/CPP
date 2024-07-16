#include<bits/stdc++.h>
using namespace std;
void arrray_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
int sum(int arr[],int size)
{
    if(size!=0)
    {
        return arr[0]+sum(arr+1,size-1);
    }
    return 0;
}
int main()
{
    int size,arr[1000];
    cin>>size;
    arrray_input(arr,size);
    cout<<sum(arr,size);
    return 0;
}