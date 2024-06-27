#include<bits/stdc++.h>
using namespace std;
void array_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
int Find_smaller(int arr[],int size)
{
        array_input(arr,size);

    int temp=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]<temp)
        {
            temp=arr[i];
        }
    }
    cout<<"Smaller is ="<<temp<<endl;
}
int Find_greater(int arr[],int size)
{
    int temp=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
    }
    cout<<"Greater is ="<<temp;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    // array_input(arr,n);
    Find_smaller(arr,n);
    Find_greater(arr,n);
    return 0;
}