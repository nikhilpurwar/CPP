#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    return n*fac(n-1);
    
    // for(int i=n;i>0;i--)
    // {
    //     fact=fact*i;
    // }
    // return fact;
}
int main()
{
    int n;
    cin>>n;
    cout<<fac(n);

}