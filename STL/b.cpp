#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    int n;
    int max,min;
    while(t--)
    {
        cin>>n;
        vector<int> l(n);
        for(int i=0;i<n;i++)
        {
            cin>>l[i];
        }
        max=l[0];
        for(int i=0;i<n;i++)
        {
            if(l[i]>max)
            {
                max=l[i];
            }
        }
        min=l[0];
        for(int i=0;i<n;i++)
        {
            if(l[i]<min)
            {
                min=l[i];
            }
        }
        cout<<min<<" "<<max;
    }
    return 0;
}
