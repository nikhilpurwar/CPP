#include<bits/stdc++.h>
using namespace std;
bool isAvailable(int arr[][1000],int m,int n,int target)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i][j]==target)
            {
                return true;
                break;
            }
            
        }
    }
    return false;
}
int main()
{
    int m,n;
    int arr[1000][1000];
    cin>>m>>n;
    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }  
    }
    int target;
    cin>>target;
    if(isAvailable(arr,m,n,target))
    {
        cout<<"Yes Available";
    }
    else
    {
        cout<<"Not Available";
    }
    return 0;
}