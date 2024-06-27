#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int arr[m][n];
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }  
    }
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
            {
                cout<<arr[i][j]<<" ";   //for horizontal wave
                cout<<arr[j][i]<<" ";   //for vertical wave
            }  
        }
        else
        {
            for(int j=n-1;j>=0;j--)
            {
                cout<<arr[i][j]<<" ";   //for horizontal wave
                cout<<arr[j][i]<<" ";   //for vertical wave
            } 
        }
        cout<<endl;
        
    }
    return 0;
}