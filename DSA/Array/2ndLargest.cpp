#include<bits/stdc++.h>
using namespace std;
void array_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void secondLast(int arr[],int size)
{
    int a,b=0;
    int temp=arr[0];
    for(int i=1;i<size;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
            
        }
        else if(arr[i]>b && arr[i]!=b)
        {
            b=arr[i];
        }
        else
        {
            
        }
    }
    cout<<"Greater is ="<<temp<<endl;
    cout<<"Second Greatest is ="<<b;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    array_input(arr,n);
    secondLast(arr,n);
    return 0;
}