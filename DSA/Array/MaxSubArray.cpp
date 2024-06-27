#include<bits/stdc++.h>
using namespace std;
void arrray_input(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}
void arrray_output(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i];
    }
}
int maxSubArray(int arr[],int size)
{
    int temp, sum=arr[0];
    for(int i=0;i<size;i++)
    {
        if(size==1)
        {
            cout<<"sum of max sub array is "<<arr[0];
            break;
        }
        temp=arr[i];
        for(int j=i+1;j<size;j++)
        {
            temp=arr[j]+temp;
            if(sum<temp)
            {
                sum =temp;
            
            }
        }
        
    }
    return sum;
}
int main()
{
    int size;
    cin>>size;
    
    return 0;
}