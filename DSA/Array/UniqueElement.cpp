#include<bits/stdc++.h>
using namespace std;
int input_array(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
int unique(int arr[],int size)
{
    int j=0;
    for(int i=j+1;i<size;i++)
    {
        if(arr[j]!=arr[i])
        {
            j++;
            arr[j]=arr[i];
        }
    }
    return j;
}
void display(int arr[],int size)
{
    for(int i=0;i<=size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()

{
    int size;
    cin>>size;
    int arr[size];
    input_array(arr,size);
    cout<<"unique elements are"<<endl;
    int a=unique(arr,size);
    display(arr,a);
}