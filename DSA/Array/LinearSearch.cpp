#include<bits/stdc++.h>
using namespace std;
void array_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
bool Find(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(key==arr[i])
        {
            return true;
            break;
        }
    }
    return false;
}

int main()
{
    int size,key;
    cout<<"Size of array is ";
    cin>>size;
    int arr[size];
    array_input(arr,size);
    cout<<"Enter the value to find in array =";
    cin>>key;
    cout<<Find(arr,size,key);
    return 0;
}