#include<bits/stdc++.h>
using namespace std ;
int main()
{
    int i,j,n;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i+j)>=n-1)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}