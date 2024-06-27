#include <bits/stdc++.h>
using namespace std;
char charToLower(char c)
{
    if(c>='a'&&c<='z')
    {
        return c;
    }
    return c+32;
}
int main()
{
    char c;
    cin>>c;
    c=charToLower(c);
    cout<<c;
    return 0;
}