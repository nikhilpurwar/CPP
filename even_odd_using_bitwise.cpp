#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(!(n & 1))
    {
        cout<<"even";
    }
    else
    {
        cout<<"odd";
    }
    // if((n^1)==(n+1))
    // {
    //     cout<<"even";
    // }
    // else
    // {
    //     cout<<"odd";
    // }
    return 0;
}