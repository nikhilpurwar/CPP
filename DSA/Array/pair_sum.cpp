#include<bits/stdc++.h>
using namespace std;
void arrray_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void pairSum(int arr[],int size, int target)
{
    int temp=size-1;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
int main()
{
    int n,target;
    cin>>n;
    int arr[n];
    arrray_input(arr,n);
    cout<<"Enter the target for pair sum =";
    cin>>target;
    pairSum(arr,n,target);
    return 0;
}