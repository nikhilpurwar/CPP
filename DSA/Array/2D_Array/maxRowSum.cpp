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
    int sum=0,max=0;
    for(int i=0;i<m;i++)
    {
        sum=0;
        for(int j=0;j<n;j++)
        {
            sum+=arr[i][j];
        }  
        if(sum>max)
        {
            max=sum;
        }
    }
    cout<<"Max Sum Is "<<max;
    return 0;
}