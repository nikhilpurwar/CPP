#include<bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<int> us={5,3,9,7,1};
    us.insert(12);
    for(int i:us)
    {
        cout<<i<<" ";
    }
    return 0;
}