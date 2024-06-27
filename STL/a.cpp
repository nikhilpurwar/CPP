#include<bits/stdc++.h>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        int count=0;
        cin>>n>>k;
        for(int i=1;i<=n;i++)
        {
            int score;
            cin>>score;
            if(score>k)
            {
                count++;
            }
        }
        cout<<count;
    }
    
    return 0;
}