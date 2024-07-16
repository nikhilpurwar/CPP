#include<bits/stdc++.h>
using namespace std;
int findPower(int n,int pow)
{
    if(pow!=0)
    {
        return (n*findPower(n,pow-1));
    }
    return 1;
}
int main()
{
    int n,pow;
    cin>>n>>pow;
    cout<<findPower(n,pow);
    return 0;
}

