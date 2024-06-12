#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
    int fact=1;
    for(int i=a;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int combination(int n,int r)
{
    return (fact(n)/(fact(r)*fact(n-r)));
}
int main()
{
    int a,b;
    cout<<"Enter the values of nCr-"<<endl;
    cout<<"Enter the value of n ";
    cin>>a;
    cout<<"Enter the value of r ";
    cin>>b;
    cout<<combination(a,b);
}