#include<bits/stdc++.h>
using namespace std;
char frequentChar(string str)
{
    char x;
    int count=0,max=0;
    for(int i=0;i<str.size();i++)
    {
        x=str[i];
        for(int j=i+1;j<str.size();j++)
        {
            if(x==str[j])
            {
                count++;
            }
        }
        if(count>max)
        {
            max=count;
        }
    }
}
int main()
{
    return 0;
}